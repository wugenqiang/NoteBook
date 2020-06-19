# 第 2 章 期望与方差

## 2.1 期望

1. 期望描述了随机变量的平均情况，衡量了随机变量 ![二、期望和方差 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的均值。它是概率分布的泛函（函数的函数）。

   - 离散型随机变量 ![二、期望和方差 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的期望：![二、期望和方差 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9a9416e56b2b1e81f820b50c3ae33b52.svg) 。

     若右侧级数不收敛，则期望不存在。

   - 连续性随机变量 ![二、期望和方差 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的期望： ![二、期望和方差 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3d658a5abfed884074aec6200c0258f0.svg) 。

     若右侧极限不收敛，则期望不存在。

2. 定理：对于随机变量 ![二、期望和方差 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) ，设 ![二、期望和方差 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7df6d3649fbda80776f95c52bb0963cf.svg) 也为随机变量，![二、期望和方差 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b8e9bc221cf8e9042839e29e49b68c3f.svg) 是连续函数。

   - 若 ![二、期望和方差 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 为离散型随机变量，若 ![二、期望和方差 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的期望存在，则：![二、期望和方差 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/76411d175a50e98ea92f6df80e188979.svg) 。

     也记做：![二、期望和方差 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/98e9016224e4d3d57c24140bb7f41528.svg) 。

   - 若 ![二、期望和方差 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 为连续型随机变量，若 ![二、期望和方差 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的期望存在，则 ：![二、期望和方差 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/471e79d6a4a02d55e4b4b1790bdc5352.svg) 。

     也记做：![二、期望和方差 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/30c8b8e0ba87e404c126eed167c6c278.svg) 。

   该定理的意义在于：当求 ![二、期望和方差 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4a10e5c2ea3b8bf6ac545e197c8d88b4.svg) 时，不必计算出 ![二、期望和方差 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的分布，只需要利用 ![二、期望和方差 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的分布即可。

   该定理可以推广至两个或两个以上随机变量的情况。对于随机变量![二、期望和方差 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f76f03884cf5b300a43b9d173cfa6743.svg)，假设 ![二、期望和方差 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32950b05fac8f214c31877af59131a2e.svg) 也是随机变量， ![二、期望和方差 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b8e9bc221cf8e9042839e29e49b68c3f.svg) 为连续函数，则有：![二、期望和方差 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2b5c990ae461ed4559222b6c36315d72.svg) 。也记做：![二、期望和方差 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/17c95faa8bc3fe98a560cc8848ceb697.svg) 。

1. 期望性质：

   - 常数的期望就是常数本身。

   - 对常数 ![二、期望和方差 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1fac4ef649f71edf54d7b03d3830de7c.svg) 有 ：![二、期望和方差 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5e343ec37cbffd34c69e29fb9dda07e0.svg) 。

   - 对两个随机变量 ![二、期望和方差 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f76f03884cf5b300a43b9d173cfa6743.svg)，有：![二、期望和方差 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/98e870a489f0cac73874896d5fd3694a.svg) 。

     该结论可以推广到任意有限个随机变量之和的情况。

   - 对两个相互独立的随机变量，有：![二、期望和方差 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b112ee74ea62907c316c3471198a7797.svg) 。

     该结论可以推广到任意有限个相互独立的随机变量之积的情况。

## 2.2 方差

1. 对随机变量 ![二、期望和方差 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) ，若 ![二、期望和方差 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/235bb458920db9e80c096ca82739924b.svg) 存在，则称它为 ![二、期望和方差 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的方差，记作 ![二、期望和方差 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/601d2bb078fe571bc9314acfd0fa4704.svg) 。

   ![二、期望和方差 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的标准差为方差的开平方。即：

   ![二、期望和方差 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb7fa84847971712ee03bb393c344171.svg)

   - 方差度量了随机变量 ![二、期望和方差 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 与期望值偏离的程度，衡量了 ![二、期望和方差 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 取值分散程度的一个尺度。

   - 由于绝对值 ![二、期望和方差 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df10107e9a57fa8d7f871969661658c9.svg) 带有绝对值，不方便运算，因此采用平方来计算。

     又因为 ![二、期望和方差 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5940ebb6349a064e7649f20bc0532e6b.svg) 是一个随机变量，因此对它取期望，即得 ![二、期望和方差 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 与期望值偏离的均值。

2. 根据定义可知：

   ![二、期望和方差 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/240c6fb7b7bc32695ad6c8c4d382a8d0.svg)

3. 对于一个期望为 ![二、期望和方差 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e8422a0fdbff493a2c97af4b55b4b140.svg)， 方差为 ![二、期望和方差 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c2e1eaf3662882e4633ce2f28d073d64.svg) 的随机变量 ![二、期望和方差 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg)，随机变量 ![二、期望和方差 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0686559f72e65cadad9496130e2d9a3f.svg) 的数学期望为0，方差为1。 称 ![二、期望和方差 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d248c0bdd8fc96e4499fb67b4bbcbb15.svg) 为 ![二、期望和方差 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的标准化变量。

4. 方差的性质：

   - 常数的方差恒为 0 。

   - 对常数 ![二、期望和方差 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1fac4ef649f71edf54d7b03d3830de7c.svg) ，有 ![二、期望和方差 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/14463bbbc8a48e6461a49dc4074c15df.svg) 。

   - 对两个随机变量 ![二、期望和方差 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f76f03884cf5b300a43b9d173cfa6743.svg)，有： ![二、期望和方差 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/032c9e40f0b33894ee5f0cf9e15f86fd.svg)

     当 ![二、期望和方差 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 相互独立时，有 ![二、期望和方差 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2f3b475bf07b2375b019fa1d8002ed40.svg) 。这可以推广至任意有限多个相互独立的随机变量之和的情况。

   - ![二、期望和方差 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f3918d1913bbe12dda4cba797feb81da.svg) 的充要条件是 ![二、期望和方差 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 以概率1取常数。

## 2.3 协方差与相关系数

1. 对于二维随机变量 ![二、期望和方差 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/498e3e86088660b9111d006e7b4cf96a.svg) ，可以讨论描述 ![二、期望和方差 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 与 ![二、期望和方差 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 之间相互关系的数字特征。

   - 定义 ![二、期望和方差 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0af4f6519b039717ed0f807d013ce2e0.svg) 为随机变量 ![二、期望和方差 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 与 ![二、期望和方差 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的协方差，记作 ![二、期望和方差 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5598a351f76186c3512aa5b61335be01.svg)。
   - 定义 ![二、期望和方差 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e951e686aef355e155425ee6430a7903.svg) 为随机变量 ![二、期望和方差 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 与![二、期望和方差 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg)的相关系数，它是协方差的归一化。

2. 由定义可知：

   ![二、期望和方差 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de34b2a9626ee5741a6332edb5f5f69d.svg)

3. 协方差的性质：

   - ![二、期望和方差 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bdebaba318611338271bbbdcc9977b34.svg)，![二、期望和方差 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4c726d4d0b4c7f74c3b2d1e808534f4.svg) 为常数。
   - ![二、期望和方差 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1f0c834ddbcc35e0969e360174c31940.svg)
   - ![二、期望和方差 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ceb498a5bbd6c20fbdf62e0e01914f5e.svg)
   - ![二、期望和方差 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9d272b779e32e1f7cd9885699ce108c6.svg)

4. 协方差的物理意义：

   - 协方差的绝对值越大，说明两个随机变量都远离它们的均值。

   - 协方差如果为正，则说明两个随机变量同时趋向于取较大的值或者同时趋向于取较小的值；如果为负，则说明一个随变量趋向于取较大的值，另一个随机变量趋向于取较小的值。

   - 两个随机变量的独立性可以导出协方差为零。但是两个随机变量的协方差为零无法导出独立性。

     因为独立性也包括：没有非线性关系。有可能两个随机变量是非独立的，但是协方差为零。如：假设随机变量 ![二、期望和方差 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/07f0606c5a4e639c039ed19f18f34bee.svg) 。定义随机变量 ![二、期望和方差 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3fb853765eaf98bfa8c7c3495c9c39c3.svg) 的概率分布函数为：

     ![二、期望和方差 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6aeb7ebf508e5dd0169c39223733da0d.svg)

     定义随机变量 ![二、期望和方差 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/97ae82c252cd3dd8dd6fb5222cf488bb.svg)，则随机变量 ![二、期望和方差 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f76f03884cf5b300a43b9d173cfa6743.svg) 是非独立的，但是有： ![二、期望和方差 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/03b0f2097255d824f7540a8b31de9ce8.svg) 。

5. 相关系数的物理意义：考虑以随机变量 ![二、期望和方差 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的线性函数 ![二、期望和方差 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1a55f01922ceed45b1a82f1d88b7f50d.svg) 来近似表示 ![二、期望和方差 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg)。以均方误差

   ![二、期望和方差 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/28929e8de8a25e1eb6ecd0b3eef09fa6.svg)

   来衡量以 ![二、期望和方差 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1a55f01922ceed45b1a82f1d88b7f50d.svg) 近似表达 ![二、期望和方差 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的好坏程度。 ![二、期望和方差 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/66e107b0f45a14b638e1bb37b2e9ee0d.svg) 越小表示近似程度越高。

   为求得最好的近似，则对 ![二、期望和方差 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4c726d4d0b4c7f74c3b2d1e808534f4.svg) 分别取偏导数，得到：

   ![二、期望和方差 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/34c91c518f859ed87723173f3970fa14.svg)

   因此有以下定理：

   - ![二、期望和方差 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5482d068f2c62f579995d72410f59883.svg)（![二、期望和方差 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8f8313414ea3fdad567b521631fa889e.svg) 是绝对值）。
   - ![二、期望和方差 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3ee8981a70616a3fa358daeb727a59bc.svg) 的充要条件是：存在常数 ![二、期望和方差 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4c726d4d0b4c7f74c3b2d1e808534f4.svg) 使得 ![二、期望和方差 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d9becba83ba6f1771c825e0d5154f8d8.svg)。

6. 当![二、期望和方差 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1b0b1ceaceb56458a165d323297a1bde.svg) 较大时， ![二、期望和方差 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/66e107b0f45a14b638e1bb37b2e9ee0d.svg) 较小，意味着随机变量 ![二、期望和方差 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 联系较紧密。于是 ![二、期望和方差 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ee036f51bad0eb4c8abd5b047021d1ad.svg) 是一个表征 ![二、期望和方差 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg)、![二、期望和方差 - 图99](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 之间线性关系紧密程度的量。

7. 当 ![二、期望和方差 - 图100](https://static.bookstack.cn/projects/huaxiaozhuan-ai/14a511ca4863c2255173427e9aaeda0f.svg) 时，称 ![二、期望和方差 - 图101](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图102](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 不相关。

   - 不相关是就线性关系来讲的，而相互独立是一般关系而言的。
   - 相互独立一定不相关；不相关则未必独立。

## 2.4 协方差矩阵

1. 设 ![二、期望和方差 - 图103](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图104](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 是随机变量。

   - 若 ![二、期望和方差 - 图105](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d800572012aa45141adeba1730754ef.svg) 存在，则称它为 ![二、期望和方差 - 图106](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的 ![二、期望和方差 - 图107](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 阶原点矩，简称 ![二、期望和方差 - 图108](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 阶矩。
   - 若 ![二、期望和方差 - 图109](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7fc0765e1e34e0dd48125cf28c27e8cf.svg) 存在，则称它为 ![二、期望和方差 - 图110](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的 ![二、期望和方差 - 图111](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 阶中心矩。
   - 若 ![二、期望和方差 - 图112](https://static.bookstack.cn/projects/huaxiaozhuan-ai/307d7f001b93b20e00ed97d7fc4f6878.svg) 存在，则称它为 ![二、期望和方差 - 图113](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图114](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的 ![二、期望和方差 - 图115](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ac7c5c6ca71403852748a7f119342732.svg) 阶混合矩。
   - 若 ![二、期望和方差 - 图116](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f80e674cdd1dd13e783a6fd797751e9e.svg) 存在，则称它为 ![二、期望和方差 - 图117](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![二、期望和方差 - 图118](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的 ![二、期望和方差 - 图119](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1d45484bc1b90c8c43fbdea45a4e3da2.svg) 阶混合中心矩。

   因此：期望是一阶原点矩，方差是二阶中心矩，协方差是二阶混合中心矩。

2. 协方差矩阵：

   - 二维随机变量![二、期望和方差 - 图120](https://static.bookstack.cn/projects/huaxiaozhuan-ai/36c36319cbee020bc3206d26d0ca9139.svg) 有四个二阶中心矩（假设他们都存在），记作：

     ![二、期望和方差 - 图121](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cc40e5d67de2f500be51ac7621a6a968.svg)

     称矩阵

     ![二、期望和方差 - 图122](https://static.bookstack.cn/projects/huaxiaozhuan-ai/db0e13ad0e84bca65e59cd6334c1e6e5.svg)

     为随机变量 ![二、期望和方差 - 图123](https://static.bookstack.cn/projects/huaxiaozhuan-ai/36c36319cbee020bc3206d26d0ca9139.svg) 的协方差矩阵。

   - 设 ![二、期望和方差 - 图124](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维随机变量 ![二、期望和方差 - 图125](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 的二阶混合中心矩 ![二、期望和方差 - 图126](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7cf52bf65d7289d2d118d29425214594.svg) 都存在，则称矩阵

     ![二、期望和方差 - 图127](https://static.bookstack.cn/projects/huaxiaozhuan-ai/56e5714b7213cbeee9e1ae0e3e525a61.svg)

     为 ![二、期望和方差 - 图128](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维随机变量 ![二、期望和方差 - 图129](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 的协方差矩阵。

     由于 ![二、期望和方差 - 图130](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3172813a53e30436f3333467bbaa66d6.svg) 因此协方差矩阵是个对称阵。

3. 通常 ![二、期望和方差 - 图131](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维随机变量的分布是不知道的，或者太复杂以致数学上不容易处理。因此实际中协方差矩阵非常重要。