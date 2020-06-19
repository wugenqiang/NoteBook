# 第 3 章 大数定律及中心极限定理

### 3.1 切比雪夫不等式

1. 切比雪夫不等式：假设随机变量 ![三、大数定律及中心极限定理 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 具有期望 ![三、大数定律及中心极限定理 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b2191bd981cc8de50619c3f01b901c66.svg)， 方差 ![三、大数定律及中心极限定理 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/36c27bbf68ca052dd71198abea869a47.svg) ，则对于任意正数 ![三、大数定律及中心极限定理 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b2f5ccd45a4253331cc2db89332cdf6d.svg) ，下面的不等式成立：

   ![三、大数定律及中心极限定理 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/92a7d55689140b84b7c739738ad24bed.svg)

   - 其意义是：对于距离 ![三、大数定律及中心极限定理 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9eeb23c6c05493c7a293979c1fe4cd50.svg) 足够远的地方 （距离大于等于 ![三、大数定律及中心极限定理 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b2f5ccd45a4253331cc2db89332cdf6d.svg) ），事件出现的概率是小于等于 ![三、大数定律及中心极限定理 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/91f453c814f4538c5f4443679e57044c.svg)。即事件出现在区间 ![三、大数定律及中心极限定理 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78e6ee69f2eddcf82fad87af02fcce7d.svg) 的概率大于 ![三、大数定律及中心极限定理 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d5d190bc33a811952342040529de8359.svg) 。

     该不等式给出了随机变量 ![三、大数定律及中心极限定理 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 在分布未知的情况下， 事件 ![三、大数定律及中心极限定理 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d9e8f928c02e7c94aea0f59ab4da589c.svg) 的下限估计。如： ![三、大数定律及中心极限定理 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e6a94dbced8915f6966f0eadd3639d3c.svg) 。

   - 证明：

     ![三、大数定律及中心极限定理 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d903d9463c42ea5ca4cc467a583034fd.svg)

2. 切比雪夫不等式的特殊情况：设随机变量 ![三、大数定律及中心极限定理 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 相互独立，且具有相同的数学期望和方差： ![三、大数定律及中心极限定理 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f0a00db7aab7292527df44c3add127c3.svg)。 作前 ![三、大数定律及中心极限定理 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 个随机变量的算术平均： ![三、大数定律及中心极限定理 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/508c9436b5624d7183eed298844c4521.svg)， 则对于任意正数 ![三、大数定律及中心极限定理 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de56070bdde35db754db79947c16d84f.svg) 有：

   ![三、大数定律及中心极限定理 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/40e8e88ed04ad793f7d0a90a4d785d30.svg)

   证明：根据期望和方差的性质有：![三、大数定律及中心极限定理 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4faf809cbbc982e379fc6c09160ae41.svg)， ![三、大数定律及中心极限定理 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/295acc26d747970acb714f8ba06afbfd.svg) 。根据切比雪夫不等式有：

   ![三、大数定律及中心极限定理 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b9e0c979198b5f7799ec8da9b715ddff.svg)

   则有 ![三、大数定律及中心极限定理 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/438d24f6cafc83999d0c8cbdf87bf95b.svg) ，因此有：![三、大数定律及中心极限定理 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/05b340387f2dbd27dc49018971ca0a16.svg) 。

### 3.2 大数定理

1. 依概率收敛：设 ![三、大数定律及中心极限定理 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eb6a1a9b2769de9e67f00f2ff400f58e.svg) 是一个随机变量序列， ![三、大数定律及中心极限定理 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32ba1f0cc2cca1a8b657c7994b5d22c1.svg) 是一个常数。

   若对于任意正数 ![三、大数定律及中心极限定理 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de56070bdde35db754db79947c16d84f.svg) 有 ： ![三、大数定律及中心极限定理 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86b088b64cd333728a1b0dc0b7002ad6.svg) ，则称序列 ![三、大数定律及中心极限定理 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eb6a1a9b2769de9e67f00f2ff400f58e.svg) 依概率收敛于 ![三、大数定律及中心极限定理 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32ba1f0cc2cca1a8b657c7994b5d22c1.svg) 。记作： ![三、大数定律及中心极限定理 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2de47f082bfd460ddb581b94696a6f57.svg)

2. 依概率收敛的两个含义：

   - 收敛：表明这是一个随机变量序列，而不是某个随机变量；且序列是无限长，而不是有限长。
   - 依概率：表明序列无穷远处的随机变量 ![三、大数定律及中心极限定理 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4bc0241c8ea7eda7a273b3b4e5187218.svg) 的分布规律为：绝大部分分布于点 ![三、大数定律及中心极限定理 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32ba1f0cc2cca1a8b657c7994b5d22c1.svg) ，极少数位于 ![三、大数定律及中心极限定理 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32ba1f0cc2cca1a8b657c7994b5d22c1.svg) 之外。且分布于 ![三、大数定律及中心极限定理 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32ba1f0cc2cca1a8b657c7994b5d22c1.svg) 之外的事件发生的概率之和为0。

3. 大数定理一： 设随机变量 ![三、大数定律及中心极限定理 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 相互独立，且具有相同的数学期望和方差： ![三、大数定律及中心极限定理 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f0a00db7aab7292527df44c3add127c3.svg)。 则序列： ![三、大数定律及中心极限定理 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/508c9436b5624d7183eed298844c4521.svg) 依概率收敛于 ![三、大数定律及中心极限定理 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e8422a0fdbff493a2c97af4b55b4b140.svg) ， 即 ![三、大数定律及中心极限定理 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4443ab4258bada278b88e177b0261138.svg) 。

   注意：这里并没有要求随机变量 ![三、大数定律及中心极限定理 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 同分布。

4. 伯努利大数定理： 设 ![三、大数定律及中心极限定理 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8e0aa2e313bffe5dc834ada6c740b6fe.svg) 为 ![三、大数定律及中心极限定理 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 次独立重复实验中事件 ![三、大数定律及中心极限定理 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9368d2e2c94fd187c2b695424de5ddc8.svg) 发生的次数， ![三、大数定律及中心极限定理 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 是事件 ![三、大数定律及中心极限定理 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9368d2e2c94fd187c2b695424de5ddc8.svg) 在每次试验中发生的概率。则对于任意正数 ![三、大数定律及中心极限定理 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de56070bdde35db754db79947c16d84f.svg) 有：

   ![三、大数定律及中心极限定理 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3716e5de5cba991aef3c833b1fb48a8a.svg)

   即：当独立重复实验执行非常大的次数时，事件 ![三、大数定律及中心极限定理 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9368d2e2c94fd187c2b695424de5ddc8.svg) 发生的频率逼近于它的概率。

5. 辛钦定理：设随机变量 ![三、大数定律及中心极限定理 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 相互独立，服从同一分布，且具有相同的数学期望： ![三、大数定律及中心极限定理 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/022ab8fe6de3834d5da3ec49d666c03a.svg)。 则对于任意正数 ![三、大数定律及中心极限定理 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de56070bdde35db754db79947c16d84f.svg) 有：

   ![三、大数定律及中心极限定理 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a14d356e869836489b93f6a108ac847c.svg)

   - 注意：这里并没有要求随机变量 ![三、大数定律及中心极限定理 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 的方差存在。
   - 伯努利大数定理是亲钦定理的特殊情况。

### 3.3 中心极限定理

1. 独立同分布的中心极限定理：设随机变量 ![三、大数定律及中心极限定理 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 独立同分布，且具有数学期望和方差： ![三、大数定律及中心极限定理 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3d4dbb14614bbfd9c1683ee2c9651132.svg)， 则随机变量之和 ![三、大数定律及中心极限定理 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9729e421a014aff5291bb1d8a944b1d9.svg) 的标准变化量：

   ![三、大数定律及中心极限定理 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df401ef468281d63c2d35f7ec3be002f.svg)

   的概率分布函数 ![三、大数定律及中心极限定理 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d9c48ab70fd6101889a133018ca2c309.svg) 对于任意 ![三、大数定律及中心极限定理 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c53d188b991fcfbf557889d6013dd7c.svg) 满足：

   ![三、大数定律及中心极限定理 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/563b0b0092a21d5708ff30056da97527.svg)

   - 其物理意义为：均值方差为 ![三、大数定律及中心极限定理 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/193a7b4ae000257e2d7ed3dc476b8d26.svg) 的独立同分布的随机变量 ![三、大数定律及中心极限定理 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 之和 ![三、大数定律及中心极限定理 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9729e421a014aff5291bb1d8a944b1d9.svg) 的标准变化量 ![三、大数定律及中心极限定理 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1ab1481812decfcc3dc8ddf8fc1bd003.svg)，当 ![三、大数定律及中心极限定理 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 充分大时，其分布近似于标准正态分布。

     即：![三、大数定律及中心极限定理 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9729e421a014aff5291bb1d8a944b1d9.svg) 在 ![三、大数定律及中心极限定理 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 充分大时，其分布近似于 ![三、大数定律及中心极限定理 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/13446cd7c6efbc00299ea4f68048cc84.svg) 。

   - 一般情况下，很难求出 ![三、大数定律及中心极限定理 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 个随机变量之和的分布函数。因此当 ![三、大数定律及中心极限定理 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 充分大时，可以通过正态分布来做理论上的分析或者计算。

2. `Liapunov` 定理：设随机变量 ![三、大数定律及中心极限定理 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 相互独立，具有数学期望和方差：![三、大数定律及中心极限定理 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4d5675cc6da573157228d194f92adef7.svg) 。记：![三、大数定律及中心极限定理 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/aa960f772823d9ef84a9b7f91a905033.svg)。 若存在正数 ![三、大数定律及中心极限定理 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ad963971c26681a85d6b99e355af1bfc.svg)，使得当 ![三、大数定律及中心极限定理 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/44c446af27c5f65a73683902d7ba3006.svg) 时，![三、大数定律及中心极限定理 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/222c2922fcf9f0e949640235bf3e4343.svg) 。则随机变量之和 ![三、大数定律及中心极限定理 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9729e421a014aff5291bb1d8a944b1d9.svg) 的标准变化量:

   ![三、大数定律及中心极限定理 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/131ce23f174a70300dc5f7a81c4454d2.svg)

   的概率分布函数 ![三、大数定律及中心极限定理 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d9c48ab70fd6101889a133018ca2c309.svg) 对于任意 ![三、大数定律及中心极限定理 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c53d188b991fcfbf557889d6013dd7c.svg) 满足：

   ![三、大数定律及中心极限定理 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/638bae37077fe9bee6f8e6166cf7649f.svg)

   - 其物理意义为：相互独立的随机变量 ![三、大数定律及中心极限定理 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 之和 ![三、大数定律及中心极限定理 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9729e421a014aff5291bb1d8a944b1d9.svg)的衍生随机变量序列![三、大数定律及中心极限定理 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e959b5d193666333c7d95ee22d7ea1cb.svg)，当 ![三、大数定律及中心极限定理 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 充分大时，其分布近似与标准正态分布。
   - 这里并不要求 ![三、大数定律及中心极限定理 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4aedf01442f2c5f52aff9eade0aef5e.svg) 同分布。

3. `Demoiver-Laplace`定理：设随机变量序列 ![三、大数定律及中心极限定理 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e90eca7597b931da4f5ddd84a59342fd.svg) 服从参数为 ![三、大数定律及中心极限定理 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0bb76c333f0f07e4d05df4d6ed3f0074.svg) 的二项分布，其中 ![三、大数定律及中心极限定理 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6879bf74fdda71f6967a796bff9d4f16.svg) 。则对于任意 ![三、大数定律及中心极限定理 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c53d188b991fcfbf557889d6013dd7c.svg) , 有：

   ![三、大数定律及中心极限定理 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dc5cfbb2f8d58714c5ee99bc305f8b03.svg)

   该定理表明，正态分布是二项分布的极限分布。当 ![三、大数定律及中心极限定理 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 充分大时，可以利用正态分布来计算二项分布的概率。