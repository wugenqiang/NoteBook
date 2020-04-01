# Poi-微软Office读写库

> [Apache POI](http://poi.apache.org/)
>
> [POI概述与操作Excel](https://www.cnblogs.com/gdwkong/p/8669220.html)

## 概述

Apache POI是Apache软件基金会的开放源码函式库，POI提供API给Java程序对Microsoft Office格式档案读和写的功能。

结构：

- HSSF － 提供读写Microsoft Excel格式档案的功能。

- XSSF － 提供读写Microsoft Excel OOXML格式档案的功能。
- HWPF － 提供读写Microsoft Word格式档案的功能。
- HSLF － 提供读写Microsoft PowerPoint格式档案的功能。
- HDGF － 提供读写Microsoft Visio格式档案的功能。

## HSSF读写Excel

理解Excel中的几个名词：

- Workbook 工作簿
- Sheet 页
- Row 行
- Cell 单元格

一个工作簿包含多页，每页有多行，每行可以有多个单元格。

### 写入Excel

将一个List<VO>数据写入Excel，表头为VO的每个成员名，表体为List中的所有数据。

```java
public class ExcelWriterUtil {
    
    public static void writeExcel(String filePath, List<ExampleVO> voList) {
        HSSFWorkbook workbook = new HSSFWorkbook(); // 创建HSSF工作簿
        HSSFSheet sheet = workbook.createSheet(); // 创建页
        HSSFRow headerRow = sheet.createRow(0); // 创建表头
        HSSFCell cell; // 单元格

        String[] headerContent = ExampleVO.getHeaderData(); //获取表头内容
        // 表头内容填充
        for (int i = 0; i < headerContent.length; i++) {
            cell = headerRow.createCell(i);
            cell.setCellValue(headerContent[i]);
        }

        // 数据填充
        int rowNum = 1; //当前行数
        for (ExampleVO vo : voList) {
            HSSFRow dataRow = sheet.createRow(rowNum++);
            dataRow.createCell(0).setCellValue(vo.getId());
            dataRow.createCell(1).setCellValue(vo.getName());
            dataRow.createCell(2).setCellValue(vo.getPhone());
            // ... 根据VO成员数或自行决定创建多少单元格
        }

        // 输出工作簿文件
        try {
            FileOutputStream file = new FileOutputStream(filePath);
            workbook.write(file);
            file.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    
}
```



### 读出Excel

将Excel中的数据读出，根据表头映射到对应VO中，放入List<VO>集合。

```java
public class ExcelReaderUtil {

    private static final String XLS = "xls";

    private static Workbook getWorkbook(InputStream inputStream, String fileType) throws IOException {
        Workbook workbook = null;
        if (fileType.equalsIgnoreCase(XLS)) {
            workbook = new HSSFWorkbook(inputStream);
        }
        return workbook;
    }

    public static List<ExampleVO> readExcel(String filePath) {
        Workbook workbook = null;
        FileInputStream excelFile = null;
        try {
            String fileType = filePath.substring(filePath.lastIndexOf(".") + 1, filePath.length());
            excelFile = new FileInputStream(filePath);
            workbook = getWorkbook(excelFile, fileType);
            // 获取Excel数据
            List<ExampleVO> voList = parseExcel(workbook);
            return voList;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        } finally {
            try {
                if (null != workbook) workbook.close();
                if (null != excelFile) excelFile.close();
            } catch (IOException e) {
                e.printStackTrace();
                return null;
            }
        }
    }

    private static List<ExampleVO> parseExcel(Workbook workbook) {
        List<ExampleVO> voList = new ArrayList<>();
        for (int sheetNum = 0; sheetNum < workbook.getNumberOfSheets(); sheetNum++) {
            Sheet sheet = workbook.getSheetAt(sheetNum);

            if (null == sheet) continue;

            int headerRowNum = sheet.getFirstRowNum();
            Row headerRow = sheet.getRow(headerRowNum);
            if (null == headerRow) {
                Log.e("parseExcel", "表头数据未找到");
            }

            int rowStart = headerRowNum + 1;
            int rowEnd = sheet.getPhysicalNumberOfRows();
            for (int rowNum = rowStart; rowNum < rowEnd; rowNum++) {
                Row row = sheet.getRow(rowNum);
                if (null == row) continue;

                ExampleVO vo = convertRowToData(row);

                if (null == data) {
                    Log.e("converRowToData", rowNum + "行数据不合法，已忽略");
                    continue;
                }
                voList.add(vo);
            }
        }

        return voList;

    }

    public static ExampleVO convertRowToData(Row row) {
        ExampleVO vo = new ExampleVO();
        Cell cell;
        int cellNum = 0;
        cell = row.getCell(cellNum++);
        vo.setId((int) cell.getNumericCellValue());

        cell = row.getCell(cellNum++);
        vo.setName((int) cell.getStringCellValue());

        cell = row.getCell(cellNum++);
        vo.setPhone((int) cell.getStringCellValue());

        return vo;
    }



}
```

