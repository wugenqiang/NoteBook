# 第 3 章 矩阵运算

1. 给定两个矩阵 ![三、矩阵运算 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619113441.svg) ，定义：

   - 阿达马积`Hadamard product`（又称作逐元素积）：

     ![三、矩阵运算 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115324.svg)

   - 克罗内积`Kronnecker product`：

     ![三、矩阵运算 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115335.svg)

2. 设 ![三、矩阵运算 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115342.svg) 为 ![三、矩阵运算 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4cecfcf39d53138c459300dff2fd50a3.svg) 阶向量， ![三、矩阵运算 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115345.svg) 为 ![三、矩阵运算 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4cecfcf39d53138c459300dff2fd50a3.svg) 阶方阵，则有：

   ![三、矩阵运算 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115349.svg)

   ![三、矩阵运算 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115354.svg)

   ![三、矩阵运算 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115357.svg)

   ![三、矩阵运算 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115400.svg)

   ![三、矩阵运算 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115403.svg)

   ![三、矩阵运算 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115406.svg)

   ![三、矩阵运算 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115409.svg)

   ![三、矩阵运算 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115413.svg)

   ![三、矩阵运算 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115417.svg)

3. 如果 ![三、矩阵运算 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150104.svg) 是一元函数，则：

   - 其逐元向量函数为：![三、矩阵运算 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115421.svg) 。

   - 其逐矩阵函数为：

     ![三、矩阵运算 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115424.svg)

   - 其逐元导数分别为：

     ![三、矩阵运算 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115427.svg)

4. 各种类型的偏导数：

   - 标量对标量的偏导数： ![三、矩阵运算 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115431.svg) 。

   - 标量对向量（![三、矩阵运算 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115447.svg) 维向量）的偏导数 ：![三、矩阵运算 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115434.svg) 。

   - 标量对矩阵(![三、矩阵运算 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115458.svg) 阶矩阵)的偏导数：

     ![三、矩阵运算 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115454.svg)

   - 向量（![三、矩阵运算 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115505.svg) 维向量）对标量的偏导数： ![三、矩阵运算 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115508.svg) 。

   - 向量（![三、矩阵运算 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150129.svg) 维向量）对向量 (![三、矩阵运算 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150134.svg) 维向量) 的偏导数（雅可比矩阵，行优先）

     ![三、矩阵运算 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115514.svg)

     如果为列优先，则为上面矩阵的转置。

   - 矩阵(![三、矩阵运算 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150142.svg) 阶矩阵)对标量的偏导数

   ![三、矩阵运算 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115518.svg)

5. 对于矩阵的迹，有下列偏导数成立：

   ![三、矩阵运算 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150152.svg)

   ![三、矩阵运算 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150155.svg)

   ![三、矩阵运算 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150159.svg)

   ![三、矩阵运算 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150204.svg)

   ![三、矩阵运算 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150207.svg)

   ![三、矩阵运算 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150211.svg)

   ![三、矩阵运算 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150213.svg)

   ![三、矩阵运算 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150216.svg)

   ![三、矩阵运算 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150219.svg)

6. 假设 ![三、矩阵运算 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150223.svg) 是关于 ![三、矩阵运算 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150226.svg) 的矩阵值函数（![三、矩阵运算 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150229.svg)），且 ![三、矩阵运算 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150232.svg) 是关于 ![三、矩阵运算 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150235.svg) 的实值函数（![三、矩阵运算 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150238.svg)），则下面链式法则成立：

   ![三、矩阵运算 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150242.svg)