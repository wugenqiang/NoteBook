# 第 3 章 MCMC 采样

1. 概率图模型中最常用的采样技术是马尔可夫链蒙特卡罗方法`Markov Chain Monte Carlo:MCMC`。

   给定连续随机变量 ![三、MCMC 采样 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7b7e549236c5a93ad790c4035ca1ea0b.svg) 的概率密度函数 ![三、MCMC 采样 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/659983463fe5543eecdc2b2bfb36dd94.svg) ，则 ![三、MCMC 采样 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64869188e3bcd72f23d4e019e2e95779.svg) 在区间 ![三、MCMC 采样 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e5cb751244cda4053910bfba44a94f2e.svg) 中的概率可以计算为：

   ![三、MCMC 采样 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dde114182065de390266b0d0538d99df.svg)

   如果函数 ![三、MCMC 采样 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/817eb36e33889c45b16c6fa389d4971b.svg)， 则可以计算 ![三、MCMC 采样 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cf0564e1d1e786d1588e50379f21c915.svg) 的期望：![三、MCMC 采样 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f76574ae45d61e1f071db56a79364ac4.svg) 。

   - 如果 ![三、MCMC 采样 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64869188e3bcd72f23d4e019e2e95779.svg) 不是一个单变量，而是一个高维的多元变量 ![三、MCMC 采样 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9bba327e22b00b0274ff66b08ebf7c7c.svg) ，且服从一个非常复杂的分布，则对于上式的求积分非常困难。为此，`MCMC`先构造出服从 ![三、MCMC 采样 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 分布的独立同分布随机变量 ![三、MCMC 采样 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2228faa1cd03da0a5758fe98536450be.svg) ， 再得到 ![三、MCMC 采样 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/956ad1a6bdda8e3b64a9e5de603e2718.svg) 的无偏估计：

     ![三、MCMC 采样 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5bc81af682accfac79a15dffb059d179.svg)

   - 如果概率密度函数 ![三、MCMC 采样 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a32482e301c82b573d21f0270d7cf9b1.svg) 也很复杂，则构造服从 ![三、MCMC 采样 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 分布的独立同分布随机变量也很困难。`MCMC` 方法就是通过构造平稳分布为 ![三、MCMC 采样 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a32482e301c82b573d21f0270d7cf9b1.svg) 的马尔可夫链来产生样本。

## 3.1 MCMC 算法

1. `MCMC` 算法的基本思想是：先设法构造一条马尔可夫链，使其收敛到平稳分布恰好为 ![三、MCMC 采样 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 。然后通过这条马尔可夫链来产生符合 ![三、MCMC 采样 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 分布的样本。最后通过这些样本来进行估计。

   这里马尔可夫链的构造至关重要，不同的构造方法将产生不同的`MCMC`算法。`Metropolis-Hastings:MH`算法是`MCMC`的重要代表。

2. 假设已经提供了一条马尔可夫链，其转移矩阵为 ![三、MCMC 采样 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be77f1a4cb3a358f5664b32a1c68f31b.svg) 。目标是另一个马尔科夫链，使转移矩阵为 ![三、MCMC 采样 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7898ba6178e6a0c4a55151b3015356ef.svg) 、平稳分布是 ![三、MCMC 采样 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 。

   通常 ![三、MCMC 采样 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bf13dd4d9bc6f23adb8a66bd395f6302.svg) ，即 ![三、MCMC 采样 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 并不满足细致平稳条件不成立。但是可以改造已有的马尔可夫链，使得细致平稳条件成立。

   引入一个函数 ![三、MCMC 采样 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78c2121d42c471fdd24619db737357fb.svg) ，使其满足：![三、MCMC 采样 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f248770abfd3609f8d341ea056340011.svg) 。如：取 ![三、MCMC 采样 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/95f3edac10508c397e6c81729cf3191b.svg) ，则有：

   ![三、MCMC 采样 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e45c1f5b3eb0d276af3425ef00892ff0.svg)

   令： ![三、MCMC 采样 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/61ebfb09d6b87326d39c09f01d386052.svg) ，则有 ![三、MCMC 采样 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/680b487fb4739210efa61c990640390b.svg) 。其中 ![三、MCMC 采样 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8415b605ea4d7bfb28f1cd930fb9e237.svg) 构成了转移矩阵 ![三、MCMC 采样 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cfd0ff025484f9c77a1cac054c0f9ce3.svg) 。而 ![三、MCMC 采样 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cfd0ff025484f9c77a1cac054c0f9ce3.svg) 恰好满足细致平稳条件，因此它对应的马尔可夫链的平稳分布就是 ![三、MCMC 采样 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 。

3. 在改造 ![三、MCMC 采样 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be77f1a4cb3a358f5664b32a1c68f31b.svg) 的过程中引入的 ![三、MCMC 采样 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78c2121d42c471fdd24619db737357fb.svg) 称作接受率。其物理意义为：在原来的马尔可夫链上，从状态 ![三、MCMC 采样 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 以 ![三、MCMC 采样 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7bd06e55bffa32719bd389fd5cc29829.svg) 的概率跳转到状态 ![三、MCMC 采样 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c38684bb6cad4ba739a4bae3ca0619f.svg) 的时候，以 ![三、MCMC 采样 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78c2121d42c471fdd24619db737357fb.svg) 的概率接受这个转移。

   - 如果接受率 ![三、MCMC 采样 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78c2121d42c471fdd24619db737357fb.svg) 太小，则改造马尔可夫链过程中非常容易原地踏步，拒绝大量的跳转。这样使得马尔可夫链遍历所有的状态空间需要花费太长的时间，收敛到平稳分布 ![三、MCMC 采样 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 的速度太慢。

   - 根据推导 ![三、MCMC 采样 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/95f3edac10508c397e6c81729cf3191b.svg) ，如果将系数从 1 提高到 ![三、MCMC 采样 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/292a3602265f7bf63c8f9b024d139a72.svg) ，则有：

     ![三、MCMC 采样 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b7d2ffbd06173524c7170f2349e2fbb6.svg)

     于是： ![三、MCMC 采样 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/abac5c183b0c4fbc6b22bc51b90c2b02.svg) 。因此，即使提高了接受率，细致平稳条件仍然成立。

4. 将 ![三、MCMC 采样 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1b86ca6775bb24b934031fea87fb07a8.svg) 同比例放大，取：![三、MCMC 采样 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1882bef0e4c5ced6ac2c3451815a462f.svg) 。

   - 当 ![三、MCMC 采样 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/02fff0820403ad99cd3229ae08dd41f7.svg) 时： ![三、MCMC 采样 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3302ca5ccdc6ce217e17be82285ae2c.svg)，此时满足细致平稳条件。
   - 当 ![三、MCMC 采样 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1e2b4afdb8e2f666623942004dbca240.svg) 时： ![三、MCMC 采样 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/355b62ad465a9938afff31187b431906.svg)，此时满足细致平稳条件。
   - 当 ![三、MCMC 采样 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/062cf679b18b8527e7d7a8b597820337.svg) 时： ![三、MCMC 采样 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9e6787751ce8f60f582e73bb61b9e28d.svg)，此时满足细致平稳条件。

5. `MH` 算法：

   - 输入：

     - 先验转移概率矩阵 ![三、MCMC 采样 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be77f1a4cb3a358f5664b32a1c68f31b.svg)
     - 目标分布 ![三、MCMC 采样 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg)

   - 输出： 采样出的一个状态序列 ![三、MCMC 采样 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/521ad560949f9b5f23dff81521c7c7b2.svg)

   - 算法：

     - 初始化 ![三、MCMC 采样 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/772667393aa88b9a70e943ca5bb3bb0b.svg)

     - 对 ![三、MCMC 采样 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7c30f13750139769dccf32d2232c75dd.svg) 执行迭代。迭代步骤如下：

       - 根据 ![三、MCMC 采样 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/16fbe96c7e35175dd1f15691e8001d8b.svg) 采样出候选样本 ![三、MCMC 采样 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a99537927ba4c4ab87cd9d3533f26f4.svg) ，其中 ![三、MCMC 采样 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9290ce896c096a78d5ab48e02a8950cf.svg) 为转移概率函数。

       - 计算 ![三、MCMC 采样 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/50f10a0ef56aa73824665983f4abab1f.svg) ：

         ![三、MCMC 采样 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4b91350503593897e585c53e6f23b011.svg)

       - 根据均匀分布从 ![三、MCMC 采样 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f87cdbc9b9ace278d14378ea8988344c.svg) 内采样出阈值 ![三、MCMC 采样 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b9b20c381a1979ee2518b054d25f8a2b.svg)，如果 ![三、MCMC 采样 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/35f3889df3dfaca7e8cd539f06ce5e86.svg) ，则接受 ![三、MCMC 采样 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/87ca37f8923a11c1a15f9ffd409522d0.svg)， 即 ![三、MCMC 采样 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7efd7efec746504c7a3b0ddcf2ab17fd.svg) 。否则拒绝 ![三、MCMC 采样 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/87ca37f8923a11c1a15f9ffd409522d0.svg) ， 即 ![三、MCMC 采样 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/af516b3bd9118ab301f5db23ad31fc59.svg) 。

     - 返回采样得到的序列 ![三、MCMC 采样 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/521ad560949f9b5f23dff81521c7c7b2.svg)

   > 注意：返回的序列中，只有充分大的 ![三、MCMC 采样 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 之后的序列 ![三、MCMC 采样 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d693f1dcf7aa7c95a54df1e74e9ab486.svg) 才是服从 ![三、MCMC 采样 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb982fc2f2284edfc1ef638836cc2a1f.svg) 分布的采样序列。

## 3.2 Gibbs 算法

1. `MH`算法不仅可以应用于一维空间的采样，也适合高维空间的采样。

   对于高维的情况，由于接受率 ![三、MCMC 采样 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f97c78bc56af5fb148861bec6a1b78f9.svg) 的存在（通常 ![三、MCMC 采样 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9b3bb562d12b0e2d1e2223359fdebbe6.svg)），`MH`算法的效率通常不够高，此时一般使用 `Gibbs` 采样算法。

2. 考虑二维的情形：假设有概率分布 ![三、MCMC 采样 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/68563ea9f46468b614a18e2f04205b2e.svg) ，考察状态空间上 ![三、MCMC 采样 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4694daf03a4da5d21ae34d2b48f67d66.svg) 坐标相同的两个点 ![三、MCMC 采样 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f1952662c50ff188db3de62ef0857fcd.svg) ，可以证明有：

   ![三、MCMC 采样 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/533dfec6101bac76f7624dc5699ffaad.svg)

   于是 ![三、MCMC 采样 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f0f51920ff4a431433685811eb14a635.svg) 。则在 ![三、MCMC 采样 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6e2f90c65ed393899b13b0b4996d1f08.svg) 这条平行于 ![三、MCMC 采样 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/80f6114cfae9472d4a1bd5758aa0927b.svg) 轴的直线上，如果使用条件分布 ![三、MCMC 采样 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b3515a4bb53d5931d5aeda237148b5a6.svg) 作为直线上任意两点之间的转移概率，则这两点之间的转移满足细致平稳条件。

   同理：考察 ![三、MCMC 采样 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/80f6114cfae9472d4a1bd5758aa0927b.svg) 坐标相同的两个点 ![三、MCMC 采样 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be0746db36714017a1acade5823f999c.svg) ， 有 ![三、MCMC 采样 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c18fa937c627d73bb3488b4096292dc1.svg) 。在 ![三、MCMC 采样 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9d4e93781913a13b324cf3499921f471.svg) 这条平行于 ![三、MCMC 采样 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4694daf03a4da5d21ae34d2b48f67d66.svg) 轴的直线上，如果使用条件分布 ![三、MCMC 采样 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/24003691f64f4b18fa23dd9e5a7c2d87.svg) 作为直线上任意两点之间的转移概率，则这两点之间的转移满足细致平稳条件。

   可以构造状态空间上任意两点之间的转移概率矩阵 ![三、MCMC 采样 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be77f1a4cb3a358f5664b32a1c68f31b.svg)： 对于任意两点 ![三、MCMC 采样 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/76412e18bad10591298b37ae55e626ff.svg)， 令从 ![三、MCMC 采样 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/77f44fbef7a79938cd8aa705ef65a8b3.svg) 转移到 ![三、MCMC 采样 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f6e4c28657a009a9df9ee2e0dbaf1610.svg) 的概率为 ![三、MCMC 采样 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67a5590c499810886c6143fff337c22b.svg)：

   - 如果 ![三、MCMC 采样 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/289ab08ea52ae9d0d9e3e7afac581aed.svg) ，则 ![三、MCMC 采样 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b3b2a6436547bc5eeb6dec043200c08d.svg) 。
   - 如果 ![三、MCMC 采样 - 图99](https://static.bookstack.cn/projects/huaxiaozhuan-ai/44d269c23c02489c01ba9b35f53995d6.svg) ，则 ![三、MCMC 采样 - 图100](https://static.bookstack.cn/projects/huaxiaozhuan-ai/71bef18b20d92d6286ddba1e4794a28a.svg) 。
   - 否则 ![三、MCMC 采样 - 图101](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3b2c4595a9e2ea3b9c681733a6114e0c.svg) 。

   采用该转移矩阵 ![三、MCMC 采样 - 图102](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be77f1a4cb3a358f5664b32a1c68f31b.svg) ，可以证明：对于状态空间中任意两点 ![三、MCMC 采样 - 图103](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bb9c4d11cac213397fd476f67e00c484.svg)，都满足细致平稳条件：

   ![三、MCMC 采样 - 图104](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1cfc5483468ba824ea88a52fda00ee74.svg)

   于是这个二维状态空间上的马尔可夫链将收敛到平稳分布 ![三、MCMC 采样 - 图105](https://static.bookstack.cn/projects/huaxiaozhuan-ai/68563ea9f46468b614a18e2f04205b2e.svg) ，这就是吉布斯采样的原理。

3. `Gibbs` 算法：

   - 输入：目标分布 ![三、MCMC 采样 - 图106](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1f2f975e206c51b6517be55e2a9b6870.svg) ，其中 ![三、MCMC 采样 - 图107](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dd855f92b018a1e6adec6b03c143a35f.svg)

   - 输出： 采样出的一个状态序列 ![三、MCMC 采样 - 图108](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f67ce75c727782cc6dd764ccf098fa0e.svg)

   - 算法步骤：

     - 初始化：随机初始化 ![三、MCMC 采样 - 图109](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7ba3713e9494ea3e5b2eede827597a2f.svg) 。

     - 执行迭代，迭代步骤如下：

       - 随机或者以一定次序遍历索引 ![三、MCMC 采样 - 图110](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6d8eadcf447e3735ca7ab18bcebdebd5.svg) 。遍历过程为（设当前索引为 ![三、MCMC 采样 - 图111](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) ）：

         - 将 ![三、MCMC 采样 - 图112](https://static.bookstack.cn/projects/huaxiaozhuan-ai/edf0833050dfc6c976a2bedeb2c332ef.svg) 保持不变，计算条件概率： ![三、MCMC 采样 - 图113](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4a6840bbea9540dda0d1ad0132909f7f.svg) 。

           > 该条件概率就是状态转移概率 ![三、MCMC 采样 - 图114](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67a5590c499810886c6143fff337c22b.svg)

         - 根据条件概率 ![三、MCMC 采样 - 图115](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4a6840bbea9540dda0d1ad0132909f7f.svg) 对分量 ![三、MCMC 采样 - 图116](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a1acf7c44680b51ed12b2169d6768e51.svg) 进行采样，假设采样结果为 ![三、MCMC 采样 - 图117](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cc5fcd549ed60029670c897bee154d39.svg) ，则获得新样本 ![三、MCMC 采样 - 图118](https://static.bookstack.cn/projects/huaxiaozhuan-ai/54aecd29d54c5dcc2ccdd6efb1e63ada.svg) 。

         - 令 ![三、MCMC 采样 - 图119](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4913ed05907f07aa2a3c621bd06e249e.svg)，继续遍历。

     - 最终返回一个状态序列 ![三、MCMC 采样 - 图120](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f67ce75c727782cc6dd764ccf098fa0e.svg) 。

4. 吉布斯采样`Gibbs sampling` 有时被视作`MH`算法的特例，它也使用马尔可夫链获取样本。