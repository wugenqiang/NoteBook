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

3. 如果 ![三、矩阵运算 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cd3fd1d210821060634780abea4338ed.svg) 是一元函数，则：

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

   - 向量（![三、矩阵运算 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3a1a30aa782d20230ef8f420560c71f7.svg) 维向量）对向量 (![三、矩阵运算 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4cecfcf39d53138c459300dff2fd50a3.svg) 维向量) 的偏导数（雅可比矩阵，行优先）

     ![三、矩阵运算 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115514.svg)

     如果为列优先，则为上面矩阵的转置。

   - 矩阵(![三、矩阵运算 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/41217834f786808efb99947e9ec248d8.svg) 阶矩阵)对标量的偏导数

   ![三、矩阵运算 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115518.svg)

5. 对于矩阵的迹，有下列偏导数成立：

   ![三、矩阵运算 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8ac64a1039019d0514fb59553867aee2.svg)

   ![三、矩阵运算 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4b8ebf81133b974834c8b9f482adc400.svg)

   ![三、矩阵运算 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c88dbad45b703706390f218c0305eaa7.svg)

   ![三、矩阵运算 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8283af60f649cbcf0c7a10489431c307.svg)

   ![三、矩阵运算 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2f5f3f2decf52fa2442d20d39bec6832.svg)

   ![三、矩阵运算 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7115c8d3ba612c3d5410a2be7cb7cd6d.svg)

   ![三、矩阵运算 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cb4da79448773114935fc14237011839.svg)

   ![三、矩阵运算 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/21480adabb46fa4a31330b5ba0fb4a8d.svg)

   ![三、矩阵运算 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c6c8f3445874589cb4fa646d23171f4b.svg)

6. 假设 ![三、矩阵运算 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/da92a98f864cb4d87b4e3fcdc4ea7cea.svg) 是关于 ![三、矩阵运算 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3528caba73e65a0bbff0501a5cc63f04.svg) 的矩阵值函数（![三、矩阵运算 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f248ab8f248b105d6a161acfe6d39aa6.svg)），且 ![三、矩阵运算 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/38857fe8ffd39b084a957e0f07ed5c14.svg) 是关于 ![三、矩阵运算 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c7cff0fa1cffe30271402408dea22e55.svg) 的实值函数（![三、矩阵运算 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eb1de71e5a283653d6c8b63b1f5b6412.svg)），则下面链式法则成立：

   ![三、矩阵运算 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619115533.svg)