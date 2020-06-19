## 第 4 章 常见概率分布

### 4.1 均匀分布

1. 离散随机变量的均匀分布：假设 ![五、常见概率分布 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142740.svg) 有 ![五、常见概率分布 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142743.svg) 个取值： ![五、常见概率分布 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142748.svg)，则均匀分布的概率密度函数(`probability mass function:PMF`)为：

   ![五、常见概率分布 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142755.svg)

2. 连续随机变量的均匀分布： 假设 ![五、常见概率分布 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142801.svg) 在 `[a,b]`上均匀分布，则其概率密度函数(`probability density function：PDF`)为：

   ![五、常见概率分布 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142807.svg)

   .

### 4.2 伯努利分布

1. 伯努利分布：参数为 ![五、常见概率分布 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142812.svg)。随机变量 ![五、常见概率分布 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142815.svg) 。

   - 概率分布函数为：![五、常见概率分布 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142820.svg) 。
   - 期望： ![五、常见概率分布 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142823.svg) 。方差： ![五、常见概率分布 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142826.svg) 。

2. `categorical` 分布：它是二项分布的推广，也称作`multinoulli`分布。假设随机变量 ![五、常见概率分布 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142831.svg)，其概率分布函数为：

   ![五、常见概率分布 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142835.svg)

   其中 ![五、常见概率分布 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142852.svg) 为参数，它满足 ![五、常见概率分布 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142858.svg)，且 ![五、常见概率分布 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142901.svg) 。

### 4.3 二项分布

1. 假设试验只有两种结果：成功的概率为 ![五、常见概率分布 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142921.svg)，失败的概率为 ![五、常见概率分布 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142926.svg)。 则二项分布描述了：独立重复地进行 ![五、常见概率分布 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142930.svg) 次试验中，成功 ![五、常见概率分布 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142934.svg) 次的概率。

   - 概率质量函数：

     ![五、常见概率分布 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142942.svg)

   - 期望： ![五、常见概率分布 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142947.svg)。 方差： ![五、常见概率分布 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142950.svg) 。

### 4.4 高斯分布

1. 正态分布是很多应用中的合理选择。如果某个随机变量取值范围是实数，且对它的概率分布一无所知，通常会假设它服从正态分布。有两个原因支持这一选择：
   - 建模的任务的真实分布通常都确实接近正态分布。中心极限定理表明，多个独立随机变量的和近似正态分布。
   - 在具有相同方差的所有可能的概率分布中，正态分布的熵最大（即不确定性最大）。

#### 4.4.1 一维正态分布

1. 正态分布的概率密度函数为 :

   ![五、常见概率分布 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143019.svg)

   其中 ![五、常见概率分布 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143022.svg) 为常数。

   - 若随机变量 ![五、常见概率分布 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143026.svg) 的概率密度函数如上所述，则称 ![五、常见概率分布 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143030.svg) 服从参数为 ![五、常见概率分布 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143034.svg) 的正态分布或者高斯分布，记作 ![五、常见概率分布 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143038.svg)。
   - 特别的，当 ![五、常见概率分布 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143042.svg) 时，称为标准正态分布，其概率密度函数记作 ![五、常见概率分布 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143046.svg)，分布函数记作 ![五、常见概率分布 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143051.svg) 。
   - 为了计算方便，有时也记作：![五、常见概率分布 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143115.svg) ，其中 ![五、常见概率分布 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143119.svg) 。

2. 正态分布的概率密度函数性质：

   - 曲线关于 ![五、常见概率分布 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143127.svg) 对称。
   - 曲线在 ![五、常见概率分布 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143130.svg) 时取最大值。
   - 曲线在 ![五、常见概率分布 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143133.svg) 处有拐点。
   - 参数 ![五、常见概率分布 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143136.svg) 决定曲线的位置； ![五、常见概率分布 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143139.svg) 决定图形的胖瘦。

   ![五、常见概率分布 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143146.png)

3. 若 ![五、常见概率分布 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143154.svg) 则：

   - ![五、常见概率分布 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143158.svg)
   - 期望：![五、常见概率分布 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143203.svg) 。方差：![五、常见概率分布 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143206.svg) 。

4. 有限个相互独立的正态随机变量的线性组合仍然服从正态分布：若随机变量 ![五、常见概率分布 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143210.svg) 且它们相互独立，则它们的线性组合：![五、常见概率分布 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143222.svg) 仍然服从正态分布（其中![五、常见概率分布 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143226.svg) 不全是为 0 的常数），且：![五、常见概率分布 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143231.svg) 。

#### 4.4.2 多维正态分布

1. 二维正态随机变量 ![五、常见概率分布 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143235.svg) 的概率密度为：

   ![五、常见概率分布 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143239.svg)

   根据定义，可以计算出:

   ![五、常见概率分布 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143244.svg)

2. 引入矩阵：

   ![五、常见概率分布 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143253.svg)

   ![五、常见概率分布 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143257.svg) 为 ![五、常见概率分布 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143300.svg) 的协方差矩阵。其行列式为 ![五、常见概率分布 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143308.svg)，其逆矩阵为：

   ![五、常见概率分布 - 图56](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143312.svg)

   于是 ![五、常见概率分布 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143315.svg) 的概率密度函数可以写作 ![五、常见概率分布 - 图58](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143319.svg) 表示矩阵的转置：

   ![五、常见概率分布 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143322.svg)

   其中：

   - 均值 ![五、常见概率分布 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143326.svg) 决定了曲面的位置（本例中均值都为0）。

   - 标准差 ![五、常见概率分布 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143331.svg) 决定了曲面的陡峭程度（本例中方差都为1）。

   - ![五、常见概率分布 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143337.svg) 决定了协方差矩阵的形状，从而决定了曲面的形状。

     - ![五、常见概率分布 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143341.svg) 时，协方差矩阵对角线非零，其他位置均为零。此时表示随机变量之间不相关。

       此时的联合分布概率函数形状如下图所示，曲面在 ![五、常见概率分布 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143346.svg) 平面的截面是个圆形：

       ![五、常见概率分布 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143350.png)

     - ![五、常见概率分布 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143356.svg) 时，协方差矩阵对角线非零，其他位置非零。此时表示随机变量之间相关。

       此时的联合分布概率函数形状如下图所示，曲面在 ![五、常见概率分布 - 图67](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143402.svg) 平面的截面是个椭圆，相当于圆形沿着直线 ![五、常见概率分布 - 图68](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143405.svg) 方向压缩 ：

       ![五、常见概率分布 - 图69](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143408.png)

   - ![五、常见概率分布 - 图70](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143413.svg) 时，协方差矩阵对角线非零，其他位置非零。

     此时表示随机变量之间完全相关。此时的联合分布概率函数形状为：曲面在 ![五、常见概率分布 - 图71](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143418.svg) 平面的截面是直线 ![五、常见概率分布 - 图72](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143422.svg) ，相当于圆形沿着直线 ![五、常见概率分布 - 图73](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143425.svg) 方向压缩成一条直线 。

     由于 ![五、常见概率分布 - 图74](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143428.svg)会导致除数为 0，因此这里给出 ![五、常见概率分布 - 图75](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143432.svg)：

     ![五、常见概率分布 - 图76](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143436.png)

3. 多维正态随机变量 ![五、常见概率分布 - 图77](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143440.svg) ，引入列矩阵：

   ![五、常见概率分布 - 图78](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143457.svg)

   ![五、常见概率分布 - 图79](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143502.svg) 为 ![五、常见概率分布 - 图80](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143506.svg) 的协方差矩阵。则：

   ![五、常见概率分布 - 图81](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143510.svg)

   记做 ：![五、常见概率分布 - 图82](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143514.svg) 。

4. ![五、常见概率分布 - 图83](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143518.svg) 维正态变量具有下列四条性质：

   - ![五、常见概率分布 - 图84](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143522.svg) 维正态变量的每一个分量都是正态变量；反之，若 ![五、常见概率分布 - 图85](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143525.svg) 都是正态变量，且相互独立，则 ![五、常见概率分布 - 图86](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143529.svg) 是 ![五、常见概率分布 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态变量。

   - ![五、常见概率分布 - 图88](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143533.svg) 维随机变量 ![五、常见概率分布 - 图89](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143536.svg) 服从 ![五、常见概率分布 - 图90](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143539.svg) 维正态分布的充要条件是： ![五、常见概率分布 - 图91](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143541.svg) 的任意线性组合： ![五、常见概率分布 - 图92](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143548.svg) 服从一维正态分布，其中 ![五、常见概率分布 - 图93](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143551.svg) 不全为 0 。

   - 若 ![五、常见概率分布 - 图94](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143555.svg) 服从 ![五、常见概率分布 - 图95](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143559.svg) 维正态分布，设 ![五、常见概率分布 - 图96](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143604.svg) 是 ![五、常见概率分布 - 图97](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143607.svg) 的线性函数，则 ![五、常见概率分布 - 图98](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143610.svg) 也服从多维正态分布。

     这一性质称为正态变量的线性变换不变性。

   - 设 ![五、常见概率分布 - 图99](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143614.svg) 服从 ![五、常见概率分布 - 图100](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143617.svg) 维正态分布，则 ![五、常见概率分布 - 图101](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143622.svg) 相互独立 ![五、常见概率分布 - 图102](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143626.svg) ![五、常见概率分布 - 图103](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143635.svg) 两两不相关。

### 4.5 拉普拉斯分布

1. 拉普拉斯分布：

   - 概率密度函数：![五、常见概率分布 - 图104](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143646.svg) 。
   - 期望： ![五、常见概率分布 - 图105](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143655.svg) 。方差： ![五、常见概率分布 - 图106](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143658.svg) 。

   ![五、常见概率分布 - 图107](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143701.png)

### 4.6 泊松分布

1. 假设已知事件在单位时间（或者单位面积）内发生的**平均**次数为 ![五、常见概率分布 - 图108](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143707.svg) ，则泊松分布描述了：事件在单位时间（或者单位面积）内发生的具体次数为 ![五、常见概率分布 - 图109](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143711.svg) 的概率。

   - 概率质量函数：![五、常见概率分布 - 图110](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143715.svg) 。
   - 期望： ![五、常见概率分布 - 图111](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143718.svg)。 方差： ![五、常见概率分布 - 图112](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143721.svg) 。

   ![五、常见概率分布 - 图113](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143725.jpeg)

2. 用均匀分布模拟泊松分布：

   ```python
   def make_poisson(lmd,tm):
       '''
    用均匀分布模拟泊松分布。 lmd为 lambda 参数； tm 为时间
       '''
    t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻
       count,tm_edges=np.histogram(t,bins=tm,range=(0,tm))#获取每个单位时间内，事件发生的次数
       max_k= lmd *2 # 要统计的最大次数
       dist,count_edges=np.histogram(count,bins=max_k,range=(0,max_k),density=True)
       x=count_edges[:-1]
       return x,dist,stats.poisson.pmf(x,lmd)
   ```
   
   该函数：
   
   - 首先随机性给出了 `lmd*tm`个事件发生的时间（时间位于区间`[0,tm]`）内。
   - 然后统计每个单位时间区间内，事件发生的次数。
   - 然后统计这些次数出现的频率。
   - 最后将这个频率与理论上的泊松分布的概率质量函数比较。

### 4.7 指数分布

1. 若事件服从泊松分布，则该事件前后两次发生的时间间隔服从指数分布。由于时间间隔是个浮点数，因此指数分布是连续分布。

   - 概率密度函数：（ ![五、常见概率分布 - 图114](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143852.svg) 为时间间隔）

     ![五、常见概率分布 - 图115](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143856.svg)

   - 期望： ![五、常见概率分布 - 图116](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143900.svg)。方差：![五、常见概率分布 - 图117](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143904.svg) 。

   ![五、常见概率分布 - 图118](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143911.jpeg)

2. 用均匀分布模拟指数分布：

   ```python
   def make_expon(lmd,tm):
       '''
       用均匀分布模拟指数分布。 lmd为 lambda 参数； tm 为时间 
       '''
       t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻
       sorted_t=np.sort(t) #时刻升序排列
       delt_t=sorted_t[1:]-sorted_t[:-1] #间隔序列
       dist,edges=np.histogram(delt_t,bins="auto",density=True)
       x=edges[:-1]
       return x,dist,stats.expon.pdf(x,loc=0,scale=1/lmd) #scale 为 1/lambda
   ```

### 4.8 伽马分布

1. 若事件服从泊松分布，则事件第 ![五、常见概率分布 - 图119](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143937.svg) 次发生和第 ![五、常见概率分布 - 图120](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143940.svg) 次发生的时间间隔为伽玛分布。由于时间间隔是个浮点数，因此指数分布是连续分布。

   - 概率密度函数：![五、常见概率分布 - 图121](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143945.svg)， ![五、常见概率分布 - 图122](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143949.svg) 为时间间隔 。
   - 期望： ![五、常见概率分布 - 图123](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143952.svg) 。方差：![五、常见概率分布 - 图124](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619143956.svg) 。

2. 上面的定义中 ![五、常见概率分布 - 图125](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144000.svg) 必须是整数。事实上，若随机变量 ![五、常见概率分布 - 图126](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144003.svg) 服从伽马分布，则其概率密度函数为：

   ![五、常见概率分布 - 图127](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144008.svg)

   记做 ![五、常见概率分布 - 图128](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144012.svg) 。其中 ![五、常见概率分布 - 图129](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144015.svg) 称作形状参数，![五、常见概率分布 - 图130](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144018.svg) 称作尺度参数。

   - 期望 ![五、常见概率分布 - 图131](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144021.svg)，方差![五、常见概率分布 - 图132](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144024.svg) 。
   - 当 ![五、常见概率分布 - 图133](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144027.svg) 时，![五、常见概率分布 - 图134](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144031.svg) 为递减函数。
   - 当 ![五、常见概率分布 - 图135](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144034.svg) 时，![五、常见概率分布 - 图136](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144042.svg) 为单峰函数。

   ![五、常见概率分布 - 图137](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144046.jpeg)

3. 性质：

   - 当 ![五、常见概率分布 - 图138](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144053.svg) 时， 为 `Erlang`分布。
   - 当 ![五、常见概率分布 - 图139](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144057.svg) 时，就是参数为 ![五、常见概率分布 - 图140](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144104.svg) 的指数分布。
   - 当 ![五、常见概率分布 - 图141](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144107.svg) 时，就是常用的卡方分布。

4. 伽马分布的可加性：设随机变量 ![五、常见概率分布 - 图142](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144111.svg) 相互独立并且都服从伽马分布： ![五、常见概率分布 - 图143](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144115.svg)，则：

   ![五、常见概率分布 - 图144](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144118.svg)

5. 用均匀分布模拟伽玛分布：

   ```python
   def make_gamma(lmd,tm,k):
       '''
       用均匀分布模拟伽玛分布。 lmd为 lambda 参数； tm 为时间；k 为 k 参数
       '''
       t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻
       sorted_t=np.sort(t) #时刻升序排列
       delt_t=sorted_t[k:]-sorted_t[:-k] #间隔序列
       dist,edges=np.histogram(delt_t,bins="auto",density=True)
       x=edges[:-1]
       return x,dist,stats.gamma.pdf(x,loc=0,scale=1/lmd,a=k) #scale 为 1/lambda,a 为 k
   ```

### 4.9 贝塔分布

1. 贝塔分布是定义在 ![五、常见概率分布 - 图145](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144145.svg) 之间的连续概率分布。

   如果随机变量 ![五、常见概率分布 - 图146](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144149.svg) 服从贝塔分布，则其概率密度函数为：

   ![五、常见概率分布 - 图147](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144152.svg)

   记做 ![五、常见概率分布 - 图148](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144156.svg) 。

   - 众数为： ![五、常见概率分布 - 图149](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144159.svg) 。
   - 期望为： ![五、常见概率分布 - 图150](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144202.svg) ，方差为： ![五、常见概率分布 - 图151](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144205.svg)。

   ![五、常见概率分布 - 图152](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144210.jpeg)

### 4.10 狄拉克分布

1. 狄拉克分布：假设所有的概率都集中在一点 ![五、常见概率分布 - 图153](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144219.svg) 上，则对应的概率密度函数为：![五、常见概率分布 - 图154](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144223.svg) 。

   其中 ![五、常见概率分布 - 图155](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144226.svg) 为狄拉克函数，其性质为：

   ![五、常见概率分布 - 图156](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144229.svg)

2. 狄拉克分布的一个典型用途就是定义连续型随机变量的经验分布函数。假设数据集中有样本 ![五、常见概率分布 - 图157](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144234.svg)，则定义经验分布函数：

   ![五、常见概率分布 - 图158](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144238.svg)

   它就是对每个样本赋予了一个概率质量 ![五、常见概率分布 - 图159](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144240.svg)。

3. 对于离散型随机变量的经验分布，则经验分布函数就是`multinoulli`分布，它简单地等于训练集中的经验频率。

4. 经验分布的两个作用：

   - 通过查看训练集样本的经验分布，从而指定该训练集的样本采样的分布（保证采样之后的分布不失真）。
   - 经验分布就是使得训练数据的可能性最大化的概率密度函数。

### 4.11 多项式分布与狄里克雷分布

1. 多项式分布的质量密度函数：

   ![五、常见概率分布 - 图160](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144248.svg)

   它是 ![五、常见概率分布 - 图161](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144251.svg) 的多项式展开的形式。

2. 狄利克雷分布的概率密度函数：

   ![五、常见概率分布 - 图162](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144254.svg)

3. 可以看到，多项式分布与狄里克雷分布的概率密度函数非常相似，区别仅仅在于前面的归一化项：

   - 多项式分布是针对离散型随机变量，通过求和获取概率。
   - 狄里克雷分布时针对连续型随机变量，通过求积分来获取概率。

### 4.12 混合概率分布

1. 混合概率分布：它组合了其他几个分量的分布来组成。

   - 在每次生成样本中，首先通过`multinoulli`分布来决定选用哪个分量，然后由该分量的分布函数来生成样本。

   - 其概率分布函数为：

     ![五、常见概率分布 - 图163](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144300.svg)

     其中 ![五、常见概率分布 - 图164](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144304.svg) 为一个`multinoulli`分布，![五、常见概率分布 - 图165](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144307.svg) 的取值范围就是各分量的编号。

2. 前面介绍的连续型随机变量的经验分布函数就是一个混合概率分布的例子，此时 ![五、常见概率分布 - 图166](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144310.svg) 。

3. 混合概率分布可以通过简单的概率分布创建更复杂的概率分布。一个常见的例子是混合高斯模型，其中 ![五、常见概率分布 - 图167](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144315.svg) 为高斯模型。每个分量都有对应的参数 ![五、常见概率分布 - 图168](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144319.svg) 。

   - 有些混合高斯模型有更强的约束，如 ![五、常见概率分布 - 图169](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144323.svg)，更进一步还可以要求 ![五、常见概率分布 - 图170](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144356.svg) 为一个对角矩阵。
   - 混合高斯模型是一个通用的概率密度函数逼近工具。任何平滑的概率密度函数都可以通过足够多分量的混合高斯模型来逼近。