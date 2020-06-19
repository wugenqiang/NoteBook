# 第 2 章 期望与方差

## 2.1 期望

1. 期望描述了随机变量的平均情况，衡量了随机变量 ![二、期望和方差 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133703.svg) 的均值。它是概率分布的泛函（函数的函数）。

   - 离散型随机变量 ![二、期望和方差 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133717.svg) 的期望：![二、期望和方差 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133727.svg) 。

     若右侧级数不收敛，则期望不存在。

   - 连续性随机变量 ![二、期望和方差 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133740.svg) 的期望： ![二、期望和方差 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133744.svg) 。

     若右侧极限不收敛，则期望不存在。

2. 定理：对于随机变量 ![二、期望和方差 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133803.svg) ，设 ![二、期望和方差 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133807.svg) 也为随机变量，![二、期望和方差 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133839.svg) 是连续函数。

   - 若 ![二、期望和方差 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133843.svg) 为离散型随机变量，若 ![二、期望和方差 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133847.svg) 的期望存在，则：![二、期望和方差 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133857.svg) 。

     也记做：![二、期望和方差 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133908.svg) 。

   - 若 ![二、期望和方差 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133913.svg) 为连续型随机变量，若 ![二、期望和方差 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133918.svg) 的期望存在，则 ：![二、期望和方差 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133934.svg) 。

     也记做：![二、期望和方差 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133944.svg) 。

   该定理的意义在于：当求 ![二、期望和方差 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133949.svg) 时，不必计算出 ![二、期望和方差 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133952.svg) 的分布，只需要利用 ![二、期望和方差 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619133956.svg) 的分布即可。

   该定理可以推广至两个或两个以上随机变量的情况。对于随机变量![二、期望和方差 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134000.svg)，假设 ![二、期望和方差 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134003.svg) 也是随机变量， ![二、期望和方差 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134007.svg) 为连续函数，则有：![二、期望和方差 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134019.svg) 。也记做：![二、期望和方差 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134022.svg) 。

1. 期望性质：

   - 常数的期望就是常数本身。

   - 对常数 ![二、期望和方差 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134036.svg) 有 ：![二、期望和方差 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134039.svg) 。

   - 对两个随机变量 ![二、期望和方差 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134044.svg)，有：![二、期望和方差 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134048.svg) 。

     该结论可以推广到任意有限个随机变量之和的情况。

   - 对两个相互独立的随机变量，有：![二、期望和方差 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134056.svg) 。

     该结论可以推广到任意有限个相互独立的随机变量之积的情况。

## 2.2 方差

1. 对随机变量 ![二、期望和方差 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134102.svg) ，若 ![二、期望和方差 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134106.svg) 存在，则称它为 ![二、期望和方差 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134111.svg) 的方差，记作 ![二、期望和方差 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134116.svg) 。

   ![二、期望和方差 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134122.svg) 的标准差为方差的开平方。即：

   ![二、期望和方差 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134126.svg)

   - 方差度量了随机变量 ![二、期望和方差 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134135.svg) 与期望值偏离的程度，衡量了 ![二、期望和方差 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134138.svg) 取值分散程度的一个尺度。

   - 由于绝对值 ![二、期望和方差 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134141.svg) 带有绝对值，不方便运算，因此采用平方来计算。

     又因为 ![二、期望和方差 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134150.svg) 是一个随机变量，因此对它取期望，即得 ![二、期望和方差 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134201.svg) 与期望值偏离的均值。

2. 根据定义可知：

   ![二、期望和方差 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134206.svg)

3. 对于一个期望为 ![二、期望和方差 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134214.svg)， 方差为 ![二、期望和方差 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134218.svg) 的随机变量 ![二、期望和方差 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134225.svg)，随机变量 ![二、期望和方差 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134229.svg) 的数学期望为0，方差为1。 称 ![二、期望和方差 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134234.svg) 为 ![二、期望和方差 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134238.svg) 的标准化变量。

4. 方差的性质：

   - 常数的方差恒为 0 。

   - 对常数 ![二、期望和方差 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134243.svg) ，有 ![二、期望和方差 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134246.svg) 。

   - 对两个随机变量 ![二、期望和方差 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134254.svg)，有： ![二、期望和方差 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134258.svg)

     当 ![二、期望和方差 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134317.svg) 和 ![二、期望和方差 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134320.svg) 相互独立时，有 ![二、期望和方差 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134326.svg) 。这可以推广至任意有限多个相互独立的随机变量之和的情况。

   - ![二、期望和方差 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134332.svg) 的充要条件是 ![二、期望和方差 - 图56](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134335.svg) 以概率1取常数。

## 2.3 协方差与相关系数

1. 对于二维随机变量 ![二、期望和方差 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134459.svg) ，可以讨论描述 ![二、期望和方差 - 图58](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134503.svg) 与 ![二、期望和方差 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134506.svg) 之间相互关系的数字特征。

   - 定义 ![二、期望和方差 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134515.svg) 为随机变量 ![二、期望和方差 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134519.svg) 与 ![二、期望和方差 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134522.svg) 的协方差，记作 ![二、期望和方差 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134526.svg)。
   - 定义 ![二、期望和方差 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134532.svg) 为随机变量 ![二、期望和方差 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134536.svg) 与![二、期望和方差 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134539.svg)的相关系数，它是协方差的归一化。

2. 由定义可知：

   ![二、期望和方差 - 图67](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134603.svg)

3. 协方差的性质：

   - ![二、期望和方差 - 图68](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134608.svg)，![二、期望和方差 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4c726d4d0b4c7f74c3b2d1e808534f4.svg) 为常数。
   - ![二、期望和方差 - 图70](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134622.svg)
   - ![二、期望和方差 - 图71](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134631.svg)
   - ![二、期望和方差 - 图72](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134637.svg)

4. 协方差的物理意义：

   - 协方差的绝对值越大，说明两个随机变量都远离它们的均值。

   - 协方差如果为正，则说明两个随机变量同时趋向于取较大的值或者同时趋向于取较小的值；如果为负，则说明一个随变量趋向于取较大的值，另一个随机变量趋向于取较小的值。

   - 两个随机变量的独立性可以导出协方差为零。但是两个随机变量的协方差为零无法导出独立性。

     因为独立性也包括：没有非线性关系。有可能两个随机变量是非独立的，但是协方差为零。如：假设随机变量 ![二、期望和方差 - 图73](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134650.svg) 。定义随机变量 ![二、期望和方差 - 图74](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134654.svg) 的概率分布函数为：

     ![二、期望和方差 - 图75](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134659.svg)

     定义随机变量 ![二、期望和方差 - 图76](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134703.svg)，则随机变量 ![二、期望和方差 - 图77](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134707.svg) 是非独立的，但是有： ![二、期望和方差 - 图78](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134711.svg) 。

5. 相关系数的物理意义：考虑以随机变量 ![二、期望和方差 - 图79](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134721.svg) 的线性函数 ![二、期望和方差 - 图80](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134725.svg) 来近似表示 ![二、期望和方差 - 图81](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134728.svg)。以均方误差

   ![二、期望和方差 - 图82](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134737.svg)

   来衡量以 ![二、期望和方差 - 图83](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134741.svg) 近似表达 ![二、期望和方差 - 图84](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134744.svg) 的好坏程度。 ![二、期望和方差 - 图85](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134747.svg) 越小表示近似程度越高。

   为求得最好的近似，则对 ![二、期望和方差 - 图86](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134751.svg) 分别取偏导数，得到：

   ![二、期望和方差 - 图87](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134755.svg)

   因此有以下定理：

   - ![二、期望和方差 - 图88](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134801.svg)（![二、期望和方差 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8f8313414ea3fdad567b521631fa889e.svg) 是绝对值）。
   - ![二、期望和方差 - 图90](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134806.svg) 的充要条件是：存在常数 ![二、期望和方差 - 图91](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134809.svg) 使得 ![二、期望和方差 - 图92](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134813.svg)。

6. 当![二、期望和方差 - 图93](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134818.svg) 较大时， ![二、期望和方差 - 图94](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134822.svg) 较小，意味着随机变量 ![二、期望和方差 - 图95](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134825.svg) 和 ![二、期望和方差 - 图96](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134827.svg) 联系较紧密。于是 ![二、期望和方差 - 图97](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134830.svg) 是一个表征 ![二、期望和方差 - 图98](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134834.svg)、![二、期望和方差 - 图99](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134836.svg) 之间线性关系紧密程度的量。

7. 当 ![二、期望和方差 - 图100](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134840.svg) 时，称 ![二、期望和方差 - 图101](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134844.svg) 和 ![二、期望和方差 - 图102](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134847.svg) 不相关。

   - 不相关是就线性关系来讲的，而相互独立是一般关系而言的。
   - 相互独立一定不相关；不相关则未必独立。

## 2.4 协方差矩阵

1. 设 ![二、期望和方差 - 图103](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134855.svg) 和 ![二、期望和方差 - 图104](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134857.svg) 是随机变量。

   - 若 ![二、期望和方差 - 图105](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134911.svg) 存在，则称它为 ![二、期望和方差 - 图106](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134915.svg) 的 ![二、期望和方差 - 图107](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134919.svg) 阶原点矩，简称 ![二、期望和方差 - 图108](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134922.svg) 阶矩。
   - 若 ![二、期望和方差 - 图109](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134933.svg) 存在，则称它为 ![二、期望和方差 - 图110](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134938.svg) 的 ![二、期望和方差 - 图111](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134941.svg) 阶中心矩。
   - 若 ![二、期望和方差 - 图112](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134944.svg) 存在，则称它为 ![二、期望和方差 - 图113](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134947.svg) 和 ![二、期望和方差 - 图114](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134950.svg) 的 ![二、期望和方差 - 图115](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619134954.svg) 阶混合矩。
   - 若 ![二、期望和方差 - 图116](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135005.svg) 存在，则称它为 ![二、期望和方差 - 图117](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135013.svg) 和 ![二、期望和方差 - 图118](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135016.svg) 的 ![二、期望和方差 - 图119](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135019.svg) 阶混合中心矩。

   因此：期望是一阶原点矩，方差是二阶中心矩，协方差是二阶混合中心矩。

2. 协方差矩阵：

   - 二维随机变量![二、期望和方差 - 图120](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135025.svg) 有四个二阶中心矩（假设他们都存在），记作：

     ![二、期望和方差 - 图121](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135029.svg)

     称矩阵

     ![二、期望和方差 - 图122](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135033.svg)

     为随机变量 ![二、期望和方差 - 图123](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135036.svg) 的协方差矩阵。

   - 设 ![二、期望和方差 - 图124](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135043.svg) 维随机变量 ![二、期望和方差 - 图125](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135039.svg) 的二阶混合中心矩 ![二、期望和方差 - 图126](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135047.svg) 都存在，则称矩阵

     ![二、期望和方差 - 图127](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135050.svg)

     为 ![二、期望和方差 - 图128](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135055.svg) 维随机变量 ![二、期望和方差 - 图129](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135058.svg) 的协方差矩阵。

     由于 ![二、期望和方差 - 图130](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135102.svg) 因此协方差矩阵是个对称阵。

3. 通常 ![二、期望和方差 - 图131](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619135107.svg) 维随机变量的分布是不知道的，或者太复杂以致数学上不容易处理。因此实际中协方差矩阵非常重要。