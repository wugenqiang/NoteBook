# Postman使用笔记

[Postman使用方法详解](https://blog.csdn.net/fxbin123/article/details/80428216)

## 测试带@RequestBody参数的接口

https://www.baidu.com/link?url=ERgrgh6XG9XnrktUxWnfpqfScoPNFweuNp86PSJDgL3RAkWmXFQ3oqyWWajA6sU9RGcQs44zozuUPhKplTSsppq-1KnqjqDN6YYkvc3ltJu&wd=&eqid=ae30d15b00455748000000035db58ea5

测试接口：

```java
@PostMapping(value = "/insertMsg")
public DataReturn insertData(@RequestBody DataMsg msg) {
    return DataService.insertDataMsg(msg);
} 
```

DataMsg类：

```java
public class DataMsg {
	private int id;
    private int dataType;
    private String msg;
}
```

设置Headers

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191027222358.png)

Body选择raw，填写要发送的JSON数据。

注意数据类型要与接口对应的参数类一致。

例如int类型的参数，JSON中不要加引号。String类型的才加引号。

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191027222945.png)