# 第 3 章 二阶导数与海森矩阵

## 3.1 海森矩阵

1. 二阶导数 ![三、二阶导数与海森矩阵 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113019.svg) 刻画了曲率。假设有一个二次函数（实际任务中，很多函数不是二次的，但是在局部可以近似为二次函数）：

   - 如果函数的二阶导数为零，则它是一条直线。如果梯度为 1，则当沿着负梯度的步长为 ![三、二阶导数与海森矩阵 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113039.svg) 时，函数值减少 ![三、二阶导数与海森矩阵 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113043.svg) 。
   - 如果函数的二阶导数为负，则函数向下弯曲。如果梯度为1，则当沿着负梯度的步长为 ![三、二阶导数与海森矩阵 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113058.svg) 时，函数值减少的量大于 ![三、二阶导数与海森矩阵 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113137.svg) 。
   - 如果函数的二阶导数为正，则函数向上弯曲。如果梯度为1，则当沿着负梯度的步长为 ![三、二阶导数与海森矩阵 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113140.svg) 时，函数值减少的量少于 ![三、二阶导数与海森矩阵 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113144.svg) 。 ![curvature.PNG](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113152.png)

2. 当函数输入为多维时，定义海森矩阵：

   ![三、二阶导数与海森矩阵 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113215.svg)

   即海森矩阵的第 ![三、二阶导数与海森矩阵 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113223.svg) 行 ![三、二阶导数与海森矩阵 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113225.svg) 列元素为：![三、二阶导数与海森矩阵 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113228.svg) 。

3. 当二阶偏导是连续时，海森矩阵是对称阵，即有： ![三、二阶导数与海森矩阵 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113242.svg) 。

   在深度学习中大多数海森矩阵都是对称阵。

4. 对于特定方向 ![三、二阶导数与海森矩阵 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113255.svg) 上的二阶导数为：![三、二阶导数与海森矩阵 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113300.svg) 。

   - 如果 ![三、二阶导数与海森矩阵 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113305.svg) 是海森矩阵的特征向量，则该方向的二阶导数就是对应的特征值。
   - 如果 ![三、二阶导数与海森矩阵 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113310.svg) 不是海森矩阵的特征向量，则该方向的二阶导数就是所有特征值的加权平均，权重在 `(0,1)`之间。且与 ![三、二阶导数与海森矩阵 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113314.svg) 夹角越小的特征向量对应的特征值具有更大的权重。
   - 最大特征值确定了最大二阶导数，最小特征值确定最小二阶导数。

## 3.2 海森矩阵与学习率

1. 将 ![三、二阶导数与海森矩阵 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113419.svg) 在 ![三、二阶导数与海森矩阵 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113424.svg) 处泰勒展开：![三、二阶导数与海森矩阵 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113427.svg) 。其中： ![三、二阶导数与海森矩阵 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113447.svg) 为 ![三、二阶导数与海森矩阵 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113457.svg) 处的梯度； ![三、二阶导数与海森矩阵 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113457.svg) 为 ![三、二阶导数与海森矩阵 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113506.svg) 处的海森矩阵。

   根据梯度下降法：![三、二阶导数与海森矩阵 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113510.svg) 。

   应用在点 ![三、二阶导数与海森矩阵 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113514.svg)，有：![三、二阶导数与海森矩阵 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113517.svg) 。

   - 第一项代表函数在点 ![三、二阶导数与海森矩阵 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113521.svg) 处的值。
   - 第二项代表由于斜率的存在，导致函数值的变化。
   - 第三项代表由于曲率的存在，对于函数值变化的矫正。

2. 注意：如果 ![三、二阶导数与海森矩阵 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113702.svg) 较大，则很有可能导致：沿着负梯度的方向，函数值反而增加！

   - 如果 ![三、二阶导数与海森矩阵 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113707.svg) ，则无论 ![三、二阶导数与海森矩阵 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113711.svg) 取多大的值， 可以保证函数值是减小的。

   - 如果 ![三、二阶导数与海森矩阵 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113715.svg)， 则学习率 ![三、二阶导数与海森矩阵 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113719.svg) 不能太大。若 ![三、二阶导数与海森矩阵 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113722.svg) 太大则函数值增加。

     - 根据 ![三、二阶导数与海森矩阵 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113725.svg) ，则需要满足：![三、二阶导数与海森矩阵 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113728.svg) 。若 ![三、二阶导数与海森矩阵 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113730.svg) ，则会导致沿着负梯度的方向函数值在增加。

     - 考虑最速下降法，选择使得 ![三、二阶导数与海森矩阵 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113734.svg) 下降最快的 ![三、二阶导数与海森矩阵 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113738.svg) ，则有：![三、二阶导数与海森矩阵 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113740.svg) 。求解 ![三、二阶导数与海森矩阵 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113744.svg) 有：![三、二阶导数与海森矩阵 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113746.svg) 。

       根据 ![三、二阶导数与海森矩阵 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113749.svg) ，很明显有： ![三、二阶导数与海森矩阵 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113752.svg) 。

3. 由于海森矩阵为实对称阵，因此它可以进行特征值分解。假设其特征值从大到小排列为：![三、二阶导数与海森矩阵 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113756.svg) 。

   海森矩阵的瑞利商为： ![三、二阶导数与海森矩阵 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113758.svg) 。可以证明：

   ![三、二阶导数与海森矩阵 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113803.svg)

   根据 ![三、二阶导数与海森矩阵 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113808.svg) 可知：海森矩阵决定了学习率的取值范围。最坏的情况下，梯度 ![三、二阶导数与海森矩阵 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113812.svg) 与海森矩阵最大特征值 ![三、二阶导数与海森矩阵 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113815.svg) 对应的特征向量平行，则此时最优学习率为 ![三、二阶导数与海森矩阵 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113818.svg) 。

## 3.3 驻点与全局极小点

1. 满足导数为零的点（即 ![三、二阶导数与海森矩阵 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113822.svg) ）称作驻点。驻点可能为下面三种类型之一：

   - 局部极小点：在 ![三、二阶导数与海森矩阵 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113827.svg) 的一个邻域内，该点的值最小。
   - 局部极大点：在 ![三、二阶导数与海森矩阵 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113830.svg) 的一个邻域内，该点的值最大。
   - 鞍点：既不是局部极小，也不是局部极大。

   ![critical_point.PNG](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113833.png)

2. 全局极小点：![三、二阶导数与海森矩阵 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113842.svg)。

   - 全局极小点可能有一个或者多个。

   - 在深度学习中，目标函数很可能具有非常多的局部极小点，以及许多位于平坦区域的鞍点。这使得优化非常不利。

     因此通常选取一个非常低的目标函数值，而不一定要是全局最小值。 ![deeplearning_optimization.PNG](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113848.png)

3. 二阶导数可以配合一阶导数来决定驻点的类型：

   - 局部极小点：![三、二阶导数与海森矩阵 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113852.svg) 。
   - 局部极大点：![三、二阶导数与海森矩阵 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113855.svg) 。
   - ![三、二阶导数与海森矩阵 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113857.svg) ：驻点的类型可能为任意三者之一。

4. 对于多维的情况类似有：

   - 局部极小点：![三、二阶导数与海森矩阵 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113900.svg)，且海森矩阵为正定的（即所有的特征值都是正的）。

     当海森矩阵为正定时，任意方向的二阶偏导数都是正的。

   - 局部极大点：![三、二阶导数与海森矩阵 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113902.svg)，且海森矩阵为负定的（即所有的特征值都是负的）。

     当海森矩阵为负定时，任意方向的二阶偏导数都是负的。

   - ![三、二阶导数与海森矩阵 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113906.svg)，且海森矩阵的特征值中至少一个正值、至少一个负值时，为鞍点。

   - 当海森矩阵非上述情况时，驻点类型无法判断。

   下图为 ![三、二阶导数与海森矩阵 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113909.svg) 在原点附近的等值线。其海森矩阵为一正一负。

   - 沿着 ![三、二阶导数与海森矩阵 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113912.svg) 方向，曲线向上弯曲；沿着 ![三、二阶导数与海森矩阵 - 图67](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113915.svg) 方向，曲线向下弯曲。
   - 鞍点就是在一个横截面内的局部极小值，另一个横截面内的局部极大值。

   ![saddle.PNG](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621113918.png)