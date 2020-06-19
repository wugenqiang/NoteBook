# 第 4 章 特殊函数

1. 这里给出机器学习中用到的一些特殊函数。

## 4.1 sigmoid 函数

1. `sigmoid`函数：

   ![四、特殊函数 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145648.svg)

   - 该函数可以用于生成二项分布的 ![四、特殊函数 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145652.svg) 参数。
   - 当 ![四、特殊函数 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145657.svg) 很大或者很小时，该函数处于饱和状态。此时函数的曲线非常平坦，并且自变量的一个较大的变化只能带来函数值的一个微小的变化，即：导数很小。

   ![四、特殊函数 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145706.png)

## 4.2 softplus 函数

1. `softplus`函数：![四、特殊函数 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145719.svg) 。

   - 该函数可以生成正态分布的 ![四、特殊函数 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145724.svg) 参数。
   - 它之所以称作`softplus`，因为它是下面函数的一个光滑逼近：![四、特殊函数 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145728.svg) 。

   ![四、特殊函数 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145736.png)

2. 如果定义两个函数：

   ![四、特殊函数 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145746.svg)

   则它们分布获取了 ![四、特殊函数 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145749.svg) 的正部分和负部分。

   根据定义有：![四、特殊函数 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145753.svg) 。而 ![四、特殊函数 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145757.svg) 逼近的是 ![四、特殊函数 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145800.svg)， ![四、特殊函数 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145802.svg) 逼近的是 ![四、特殊函数 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145805.svg)，于是有：

   ![四、特殊函数 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145809.svg)

3. `sigmoid`和`softplus`函数的性质：

   ![四、特殊函数 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145813.svg)

   其中 ![四、特殊函数 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145818.svg) 为反函数。

   ![四、特殊函数 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145821.svg) 也称作`logit`函数。

   ![四、特殊函数 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145828.png)

## 4.3 伽马函数

1. 伽马函数定义为：

   ![四、特殊函数 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145904.svg)

   ![四、特殊函数 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145907.jpeg)

   性质为：

   - 对于正整数 ![四、特殊函数 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145912.svg) 有： ![四、特殊函数 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145915.svg) 。

   - ![四、特殊函数 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145917.svg) ，因此伽马函数是阶乘在实数域上的扩展。

   - 与贝塔函数的关系：

     ![四、特殊函数 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145922.svg)

   - 对于 ![四、特殊函数 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145925.svg) 有：

     ![四、特殊函数 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145928.svg)

     则可以推导出重要公式： ![四、特殊函数 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145931.svg) 。

   - 对于 ![四、特殊函数 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145934.svg)，伽马函数是严格凹函数。

2. 当 ![四、特殊函数 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145938.svg) 足够大时，可以用`Stirling` 公式来计算`Gamma`函数值：![四、特殊函数 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145942.svg) 。

## 4.4 贝塔函数

1. 对于任意实数 ![四、特殊函数 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145946.svg) ，定义贝塔函数：

   ![四、特殊函数 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145949.svg)

   其它形式的定义：

   ![四、特殊函数 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145953.svg)

2. 性质：

   - 连续性：贝塔函数在定义域 ![四、特殊函数 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145957.svg) 内连续。

   - 对称性：![四、特殊函数 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150001.svg) 。

   - 递个公式：

     ![四、特殊函数 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150004.svg)

   - 当 ![四、特殊函数 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150007.svg) 较大时，有近似公式：

     ![四、特殊函数 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150011.svg)

   - 与伽马函数关系：

     - 对于任意正实数 ![四、特殊函数 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150014.svg) ，有：

       ![四、特殊函数 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150018.svg)

     - ![四、特殊函数 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619150021.svg) 。