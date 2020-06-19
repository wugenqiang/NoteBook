# 第 3 章 大数定律及中心极限定理

## 3.1 切比雪夫不等式

1. 切比雪夫不等式：假设随机变量 ![三、大数定律及中心极限定理 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141851.svg) 具有期望 ![三、大数定律及中心极限定理 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141900.svg)， 方差 ![三、大数定律及中心极限定理 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141903.svg) ，则对于任意正数 ![三、大数定律及中心极限定理 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141912.svg) ，下面的不等式成立：

   ![三、大数定律及中心极限定理 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141918.svg)

   - 其意义是：对于距离 ![三、大数定律及中心极限定理 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141945.svg) 足够远的地方 （距离大于等于 ![三、大数定律及中心极限定理 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141950.svg) ），事件出现的概率是小于等于 ![三、大数定律及中心极限定理 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141954.svg)。即事件出现在区间 ![三、大数定律及中心极限定理 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619141958.svg) 的概率大于 ![三、大数定律及中心极限定理 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142003.svg) 。

     该不等式给出了随机变量 ![三、大数定律及中心极限定理 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142008.svg) 在分布未知的情况下， 事件 ![三、大数定律及中心极限定理 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142013.svg) 的下限估计。如： ![三、大数定律及中心极限定理 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142017.svg) 。

   - 证明：

     ![三、大数定律及中心极限定理 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142025.svg)

2. 切比雪夫不等式的特殊情况：设随机变量 ![三、大数定律及中心极限定理 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142030.svg) 相互独立，且具有相同的数学期望和方差： ![三、大数定律及中心极限定理 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142034.svg)。 作前 ![三、大数定律及中心极限定理 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142040.svg) 个随机变量的算术平均： ![三、大数定律及中心极限定理 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142045.svg)， 则对于任意正数 ![三、大数定律及中心极限定理 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142049.svg) 有：

   ![三、大数定律及中心极限定理 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142055.svg)

   证明：根据期望和方差的性质有：![三、大数定律及中心极限定理 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142059.svg)， ![三、大数定律及中心极限定理 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142106.svg) 。根据切比雪夫不等式有：

   ![三、大数定律及中心极限定理 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142109.svg)

   则有 ![三、大数定律及中心极限定理 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142114.svg) ，因此有：![三、大数定律及中心极限定理 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142117.svg) 。

## 3.2 大数定理

1. 依概率收敛：设 ![三、大数定律及中心极限定理 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142123.svg) 是一个随机变量序列， ![三、大数定律及中心极限定理 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142127.svg) 是一个常数。

   若对于任意正数 ![三、大数定律及中心极限定理 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142130.svg) 有 ： ![三、大数定律及中心极限定理 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142134.svg) ，则称序列 ![三、大数定律及中心极限定理 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142138.svg) 依概率收敛于 ![三、大数定律及中心极限定理 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142142.svg) 。记作： ![三、大数定律及中心极限定理 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142145.svg)

2. 依概率收敛的两个含义：

   - 收敛：表明这是一个随机变量序列，而不是某个随机变量；且序列是无限长，而不是有限长。
   - 依概率：表明序列无穷远处的随机变量 ![三、大数定律及中心极限定理 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142154.svg) 的分布规律为：绝大部分分布于点 ![三、大数定律及中心极限定理 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142200.svg) ，极少数位于 ![三、大数定律及中心极限定理 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142204.svg) 之外。且分布于 ![三、大数定律及中心极限定理 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142208.svg) 之外的事件发生的概率之和为0。

3. 大数定理一： 设随机变量 ![三、大数定律及中心极限定理 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142213.svg) 相互独立，且具有相同的数学期望和方差： ![三、大数定律及中心极限定理 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142219.svg)。 则序列： ![三、大数定律及中心极限定理 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142227.svg) 依概率收敛于 ![三、大数定律及中心极限定理 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142232.svg) ， 即 ![三、大数定律及中心极限定理 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142235.svg) 。

   注意：这里并没有要求随机变量 ![三、大数定律及中心极限定理 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142240.svg) 同分布。

4. 伯努利大数定理： 设 ![三、大数定律及中心极限定理 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142244.svg) 为 ![三、大数定律及中心极限定理 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142247.svg) 次独立重复实验中事件 ![三、大数定律及中心极限定理 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142251.svg) 发生的次数， ![三、大数定律及中心极限定理 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142256.svg) 是事件 ![三、大数定律及中心极限定理 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142302.svg) 在每次试验中发生的概率。则对于任意正数 ![三、大数定律及中心极限定理 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142306.svg) 有：

   ![三、大数定律及中心极限定理 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142310.svg)

   即：当独立重复实验执行非常大的次数时，事件 ![三、大数定律及中心极限定理 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142316.svg) 发生的频率逼近于它的概率。

5. 辛钦定理：设随机变量 ![三、大数定律及中心极限定理 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142319.svg) 相互独立，服从同一分布，且具有相同的数学期望： ![三、大数定律及中心极限定理 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142324.svg)。 则对于任意正数 ![三、大数定律及中心极限定理 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142327.svg) 有：

   ![三、大数定律及中心极限定理 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142330.svg)

   - 注意：这里并没有要求随机变量 ![三、大数定律及中心极限定理 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142335.svg) 的方差存在。
   - 伯努利大数定理是亲钦定理的特殊情况。

## 3.3 中心极限定理

1. 独立同分布的中心极限定理：设随机变量 ![三、大数定律及中心极限定理 - 图56](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142345.svg) 独立同分布，且具有数学期望和方差： ![三、大数定律及中心极限定理 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142403.svg)， 则随机变量之和 ![三、大数定律及中心极限定理 - 图58](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142411.svg) 的标准变化量：

   ![三、大数定律及中心极限定理 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142414.svg)

   的概率分布函数 ![三、大数定律及中心极限定理 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142419.svg) 对于任意 ![三、大数定律及中心极限定理 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142422.svg) 满足：

   ![三、大数定律及中心极限定理 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142425.svg)

   - 其物理意义为：均值方差为 ![三、大数定律及中心极限定理 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142429.svg) 的独立同分布的随机变量 ![三、大数定律及中心极限定理 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142432.svg) 之和 ![三、大数定律及中心极限定理 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142435.svg) 的标准变化量 ![三、大数定律及中心极限定理 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142439.svg)，当 ![三、大数定律及中心极限定理 - 图67](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142441.svg) 充分大时，其分布近似于标准正态分布。

     即：![三、大数定律及中心极限定理 - 图68](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142445.svg) 在 ![三、大数定律及中心极限定理 - 图69](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142448.svg) 充分大时，其分布近似于 ![三、大数定律及中心极限定理 - 图70](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142452.svg) 。

   - 一般情况下，很难求出 ![三、大数定律及中心极限定理 - 图71](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142456.svg) 个随机变量之和的分布函数。因此当 ![三、大数定律及中心极限定理 - 图72](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142500.svg) 充分大时，可以通过正态分布来做理论上的分析或者计算。

2. `Liapunov` 定理：设随机变量 ![三、大数定律及中心极限定理 - 图73](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142504.svg) 相互独立，具有数学期望和方差：![三、大数定律及中心极限定理 - 图74](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142507.svg) 。记：![三、大数定律及中心极限定理 - 图75](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142511.svg)。 若存在正数 ![三、大数定律及中心极限定理 - 图76](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142516.svg)，使得当 ![三、大数定律及中心极限定理 - 图77](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142521.svg) 时，![三、大数定律及中心极限定理 - 图78](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142529.svg) 。则随机变量之和 ![三、大数定律及中心极限定理 - 图79](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142533.svg) 的标准变化量:

   ![三、大数定律及中心极限定理 - 图80](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142536.svg)

   的概率分布函数 ![三、大数定律及中心极限定理 - 图81](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142542.svg) 对于任意 ![三、大数定律及中心极限定理 - 图82](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142547.svg) 满足：

   ![三、大数定律及中心极限定理 - 图83](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142550.svg)

   - 其物理意义为：相互独立的随机变量 ![三、大数定律及中心极限定理 - 图84](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142554.svg) 之和 ![三、大数定律及中心极限定理 - 图85](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142559.svg)的衍生随机变量序列![三、大数定律及中心极限定理 - 图86](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142602.svg)，当 ![三、大数定律及中心极限定理 - 图87](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142605.svg) 充分大时，其分布近似与标准正态分布。
   - 这里并不要求 ![三、大数定律及中心极限定理 - 图88](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142609.svg) 同分布。

3. `Demoiver-Laplace`定理：设随机变量序列 ![三、大数定律及中心极限定理 - 图89](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142613.svg) 服从参数为 ![三、大数定律及中心极限定理 - 图90](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142616.svg) 的二项分布，其中 ![三、大数定律及中心极限定理 - 图91](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142620.svg) 。则对于任意 ![三、大数定律及中心极限定理 - 图92](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142624.svg) , 有：

   ![三、大数定律及中心极限定理 - 图93](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142627.svg)

   该定理表明，正态分布是二项分布的极限分布。当 ![三、大数定律及中心极限定理 - 图94](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619142631.svg) 充分大时，可以利用正态分布来计算二项分布的概率。