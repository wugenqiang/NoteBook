## 第 4 章 常见概率分布

### 4.1 均匀分布

1. 离散随机变量的均匀分布：假设 ![五、常见概率分布 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 有 ![五、常见概率分布 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 个取值： ![五、常见概率分布 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dbdf174d27150b843611d4dfd09bcf88.svg)，则均匀分布的概率密度函数(`probability mass function:PMF`)为：

   ![五、常见概率分布 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a390d13e318f8f6557f8545d3c7b2759.svg)

2. 连续随机变量的均匀分布： 假设 ![五、常见概率分布 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 在 `[a,b]`上均匀分布，则其概率密度函数(`probability density function：PDF`)为：

   ![五、常见概率分布 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/376e4ae1c0241cfb414e0adbd978ea61.svg)

   .

### 4.2 伯努利分布

1. 伯努利分布：参数为 ![五、常见概率分布 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/16864a7df32186e205be9aa35a632cc7.svg)。随机变量 ![五、常见概率分布 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7bc368d4ca00752812b97fa9d2249485.svg) 。

   - 概率分布函数为：![五、常见概率分布 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/71d47d849dd42d84849b5508557d6c54.svg) 。
   - 期望： ![五、常见概率分布 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cb975a7f1263e411d87cf41459fd49f0.svg) 。方差： ![五、常见概率分布 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ffe3155938e2c1dbf6dfe5aeb1be4f4d.svg) 。

2. `categorical` 分布：它是二项分布的推广，也称作`multinoulli`分布。假设随机变量 ![五、常见概率分布 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9adcd747e89ec3c30a52366d675279b9.svg)，其概率分布函数为：

   ![五、常见概率分布 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9155311654d29ba71fb0a7f08c74df27.svg)

   其中 ![五、常见概率分布 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/68cc021194ce081ebc62f50790ecfd35.svg) 为参数，它满足 ![五、常见概率分布 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a2a863d3ab51dd40f6d1c16519c15bce.svg)，且 ![五、常见概率分布 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9452ede2727e3823d31ffcf0eef590a7.svg) 。

### 4.3 二项分布

1. 假设试验只有两种结果：成功的概率为 ![五、常见概率分布 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d68b0656c8ffb615220848e3582d56e2.svg)，失败的概率为 ![五、常见概率分布 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cfe84d4f5ff90332fb4899bfceaf55bb.svg)。 则二项分布描述了：独立重复地进行 ![五、常见概率分布 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 次试验中，成功 ![五、常见概率分布 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c53d188b991fcfbf557889d6013dd7c.svg) 次的概率。

   - 概率质量函数：

     ![五、常见概率分布 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5896562c94ebf5512d690286f6087f17.svg)

   - 期望： ![五、常见概率分布 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5231441c7d06a9f0de270facf866c0fd.svg)。 方差： ![五、常见概率分布 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d73e4ffe674803ce091a09730670f41d.svg) 。

### 4.4 高斯分布

1. 正态分布是很多应用中的合理选择。如果某个随机变量取值范围是实数，且对它的概率分布一无所知，通常会假设它服从正态分布。有两个原因支持这一选择：
   - 建模的任务的真实分布通常都确实接近正态分布。中心极限定理表明，多个独立随机变量的和近似正态分布。
   - 在具有相同方差的所有可能的概率分布中，正态分布的熵最大（即不确定性最大）。

#### 4.4.1 一维正态分布

1. 正态分布的概率密度函数为 :

   ![五、常见概率分布 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/45f4017a0b94906a09f0c5bcb33f9ac6.svg)

   其中 ![五、常见概率分布 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e634cdc056817a69aad1d8182cd755d9.svg) 为常数。

   - 若随机变量 ![五、常见概率分布 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的概率密度函数如上所述，则称 ![五、常见概率分布 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 服从参数为 ![五、常见概率分布 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9a1aa6b81f257ee1524bc502828cf212.svg) 的正态分布或者高斯分布，记作 ![五、常见概率分布 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/335ae325c063d21ff3885c0120b6d8d2.svg)。
   - 特别的，当 ![五、常见概率分布 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1e3f62828cf6852df76a8f1572fb2451.svg) 时，称为标准正态分布，其概率密度函数记作 ![五、常见概率分布 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/523f2b7336fe604fa3a1fc369f9f1752.svg)，分布函数记作 ![五、常见概率分布 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fb0075065e67968cadf99fd3b156cd40.svg) 。
   - 为了计算方便，有时也记作：![五、常见概率分布 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eb3b52cd75572460e3aedaae7c38a62f.svg) ，其中 ![五、常见概率分布 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f120f754708174fec09acc0bba2ac795.svg) 。

2. 正态分布的概率密度函数性质：

   - 曲线关于 ![五、常见概率分布 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32241212997ea62710ef4c188260c884.svg) 对称。
   - 曲线在 ![五、常见概率分布 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/32241212997ea62710ef4c188260c884.svg) 时取最大值。
   - 曲线在 ![五、常见概率分布 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8d274f80887061e61722c786822fbd1e.svg) 处有拐点。
   - 参数 ![五、常见概率分布 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e8422a0fdbff493a2c97af4b55b4b140.svg) 决定曲线的位置； ![五、常见概率分布 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c349a11cd5cbdafb3a05c930a18bba4.svg) 决定图形的胖瘦。

   ![五、常见概率分布 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b5355a5cf35621ffd1b409a4ce21d6e2.png)

3. 若 ![五、常见概率分布 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/335ae325c063d21ff3885c0120b6d8d2.svg) 则：

   - ![五、常见概率分布 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a071117a2d27234866ee6376ceafd7e6.svg)
   - 期望：![五、常见概率分布 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f3ea95886a7b2b16eaafe4a13740a603.svg) 。方差：![五、常见概率分布 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ee968be46cd2c685651d0ddef34ec2e.svg) 。

4. 有限个相互独立的正态随机变量的线性组合仍然服从正态分布：若随机变量 ![五、常见概率分布 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3386dfd2ac39f964d0a7e8e4f8e58831.svg) 且它们相互独立，则它们的线性组合：![五、常见概率分布 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/948757ca9b5900c90aea6aa33279193d.svg) 仍然服从正态分布（其中![五、常见概率分布 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/37106ee6f9cb0057bd09b6c86c33c2b1.svg) 不全是为 0 的常数），且：![五、常见概率分布 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/52c3578522f92cc978be184f6d014035.svg) 。

#### 4.4.2 多维正态分布

1. 二维正态随机变量 ![五、常见概率分布 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/498e3e86088660b9111d006e7b4cf96a.svg) 的概率密度为：

   ![五、常见概率分布 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/737f28ec82762440dd5e964676a5a86a.svg)

   根据定义，可以计算出:

   ![五、常见概率分布 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/feea4581e4d3ce33fafefc824ed3c6e0.svg)

2. 引入矩阵：

   ![五、常见概率分布 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1cea69948ebcfd7c9decc606f2a42187.svg)

   ![五、常见概率分布 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c6e38912b5391454b87eacfc5d64248d.svg) 为 ![五、常见概率分布 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/498e3e86088660b9111d006e7b4cf96a.svg) 的协方差矩阵。其行列式为 ![五、常见概率分布 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/26e54a44a28c8d85f88e1c79c91d4aeb.svg)，其逆矩阵为：

   ![五、常见概率分布 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6d52a77eee3b74d5b4f5d136dd47737b.svg)

   于是 ![五、常见概率分布 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/498e3e86088660b9111d006e7b4cf96a.svg) 的概率密度函数可以写作 ![五、常见概率分布 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b64dbd08ff704993bcd25a833d40fcc6.svg) 表示矩阵的转置：

   ![五、常见概率分布 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5912cebc9e7b3f422f7d4843459add11.svg)

   其中：

   - 均值 ![五、常见概率分布 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b2028a9e42dd525b729be1dae48dec1e.svg) 决定了曲面的位置（本例中均值都为0）。

   - 标准差 ![五、常见概率分布 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f8971f0a0d82d2105a4f8858d3645359.svg) 决定了曲面的陡峭程度（本例中方差都为1）。

   - ![五、常见概率分布 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/168ff532676a0141acb1d60d14a3ee88.svg) 决定了协方差矩阵的形状，从而决定了曲面的形状。

     - ![五、常见概率分布 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/93c95c535c1f9ea6768aad9facc303de.svg) 时，协方差矩阵对角线非零，其他位置均为零。此时表示随机变量之间不相关。

       此时的联合分布概率函数形状如下图所示，曲面在 ![五、常见概率分布 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b27d4634e075698595985549f18d3e4f.svg) 平面的截面是个圆形：

       ![五、常见概率分布 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2a4b3f766c6410abcf17f467cfd8c5a2.png)

     - ![五、常见概率分布 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4ecf3832e72eb3e6100ee8194e2de00b.svg) 时，协方差矩阵对角线非零，其他位置非零。此时表示随机变量之间相关。

       此时的联合分布概率函数形状如下图所示，曲面在 ![五、常见概率分布 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b27d4634e075698595985549f18d3e4f.svg) 平面的截面是个椭圆，相当于圆形沿着直线 ![五、常见概率分布 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/40e9f27f79baaf4023c9caae7c3e2cc9.svg) 方向压缩 ：

       ![五、常见概率分布 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ea876805287323c9090824120fb38800.png)

   - ![五、常见概率分布 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfa16d0c603d73041ef3c6ef931f7a13.svg) 时，协方差矩阵对角线非零，其他位置非零。

     此时表示随机变量之间完全相关。此时的联合分布概率函数形状为：曲面在 ![五、常见概率分布 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b27d4634e075698595985549f18d3e4f.svg) 平面的截面是直线 ![五、常见概率分布 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/40e9f27f79baaf4023c9caae7c3e2cc9.svg) ，相当于圆形沿着直线 ![五、常见概率分布 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/40e9f27f79baaf4023c9caae7c3e2cc9.svg) 方向压缩成一条直线 。

     由于 ![五、常见概率分布 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfa16d0c603d73041ef3c6ef931f7a13.svg)会导致除数为 0，因此这里给出 ![五、常见概率分布 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/291a6ff45917e1f125e62d1d75e981b5.svg)：

     ![五、常见概率分布 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/58cde6d31652e64e3c398f1123954fe8.png)

3. 多维正态随机变量 ![五、常见概率分布 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) ，引入列矩阵：

   ![五、常见概率分布 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b8e4d80cdf032f9b3232a77e8737e63c.svg)

   ![五、常见概率分布 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c6e38912b5391454b87eacfc5d64248d.svg) 为 ![五、常见概率分布 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 的协方差矩阵。则：

   ![五、常见概率分布 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/89e793c332fb67aeba97b948cff996e1.svg)

   记做 ：![五、常见概率分布 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/77b7a82f42213575bf3fa375bb71ff7f.svg) 。

4. ![五、常见概率分布 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态变量具有下列四条性质：

   - ![五、常见概率分布 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态变量的每一个分量都是正态变量；反之，若 ![五、常见概率分布 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 都是正态变量，且相互独立，则 ![五、常见概率分布 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 是 ![五、常见概率分布 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态变量。

   - ![五、常见概率分布 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维随机变量 ![五、常见概率分布 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 服从 ![五、常见概率分布 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态分布的充要条件是： ![五、常见概率分布 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 的任意线性组合： ![五、常见概率分布 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/569121eaa7ec0f4f2082361189d5c382.svg) 服从一维正态分布，其中 ![五、常见概率分布 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/42f63df241573ca9605989d15fed8857.svg) 不全为 0 。

   - 若 ![五、常见概率分布 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 服从 ![五、常见概率分布 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态分布，设 ![五、常见概率分布 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/05fccd94cec506d9e8e077d1ff19b1ba.svg) 是 ![五、常见概率分布 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5ba8fef422cd240ed72d98b719cb7f10.svg) 的线性函数，则 ![五、常见概率分布 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2da2984075b1ae69dd3fd409b8e54875.svg) 也服从多维正态分布。

     这一性质称为正态变量的线性变换不变性。

   - 设 ![五、常见概率分布 - 图99](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b48676b9b1bdf1059f6c58647af40dd6.svg) 服从 ![五、常见概率分布 - 图100](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc301bfa9476044d8d8e001213e6df01.svg) 维正态分布，则 ![五、常见概率分布 - 图101](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 相互独立 ![五、常见概率分布 - 图102](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f71880c1394384b9d5626aa68b733315.svg) ![五、常见概率分布 - 图103](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 两两不相关。

### 4.5 拉普拉斯分布

1. 拉普拉斯分布：

   - 概率密度函数：![五、常见概率分布 - 图104](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8eb73b49aabaf50a367097a31313c9fb.svg) 。
   - 期望： ![五、常见概率分布 - 图105](https://static.bookstack.cn/projects/huaxiaozhuan-ai/71c630ea7d97f2f8a58ee36c7028d31a.svg) 。方差： ![五、常见概率分布 - 图106](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ea5f56a4506443386babc30f57c782d1.svg) 。

   ![五、常见概率分布 - 图107](https://static.bookstack.cn/projects/huaxiaozhuan-ai/08aa3b02b128875af17aa676dba827cd.png)

### 4.6 泊松分布

1. 假设已知事件在单位时间（或者单位面积）内发生的**平均**次数为 ![五、常见概率分布 - 图108](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f98f8846676aca268090efa759f3d317.svg) ，则泊松分布描述了：事件在单位时间（或者单位面积）内发生的具体次数为 ![五、常见概率分布 - 图109](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 的概率。

   - 概率质量函数：![五、常见概率分布 - 图110](https://static.bookstack.cn/projects/huaxiaozhuan-ai/777b50ad8cd27057b3b2d9872e39f3e7.svg) 。
   - 期望： ![五、常见概率分布 - 图111](https://static.bookstack.cn/projects/huaxiaozhuan-ai/59ab87b15e5cb67d3530bf53500c25b1.svg)。 方差： ![五、常见概率分布 - 图112](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c385f1531d25e9a8b8371248d818a12.svg) 。

   ![五、常见概率分布 - 图113](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1c0e6808a268f4cb60125c6255c10801.jpeg)

2. 用均匀分布模拟泊松分布：

   ```
   def make_poisson(lmd,tm):    '''    用均匀分布模拟泊松分布。 lmd为 lambda 参数； tm 为时间    '''    t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻    count,tm_edges=np.histogram(t,bins=tm,range=(0,tm))#获取每个单位时间内，事件发生的次数    max_k= lmd *2 # 要统计的最大次数    dist,count_edges=np.histogram(count,bins=max_k,range=(0,max_k),density=True)    x=count_edges[:-1]    return x,dist,stats.poisson.pmf(x,lmd)
   ```

   该函数：

   - 首先随机性给出了 `lmd*tm`个事件发生的时间（时间位于区间`[0,tm]`）内。
   - 然后统计每个单位时间区间内，事件发生的次数。
   - 然后统计这些次数出现的频率。
   - 最后将这个频率与理论上的泊松分布的概率质量函数比较。

### 4.7 指数分布

1. 若事件服从泊松分布，则该事件前后两次发生的时间间隔服从指数分布。由于时间间隔是个浮点数，因此指数分布是连续分布。

   - 概率密度函数：（ ![五、常见概率分布 - 图114](https://static.bookstack.cn/projects/huaxiaozhuan-ai/70ac46d54c6464b9d7216d3043995379.svg) 为时间间隔）

     ![五、常见概率分布 - 图115](https://static.bookstack.cn/projects/huaxiaozhuan-ai/acb64818e6db432a1228e6f7b2329712.svg)

   - 期望： ![五、常见概率分布 - 图116](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9af2789b7c8c4c32cec4bd905b3bcd55.svg)。方差：![五、常见概率分布 - 图117](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3d8458788a446c1d1f4803782e91e4dc.svg) 。

   ![五、常见概率分布 - 图118](https://static.bookstack.cn/projects/huaxiaozhuan-ai/639227fa300476af98a5b50e21bf2e4a.jpeg)

2. 用均匀分布模拟指数分布：

   ```
   def make_expon(lmd,tm):    '''    用均匀分布模拟指数分布。 lmd为 lambda 参数； tm 为时间     '''    t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻    sorted_t=np.sort(t) #时刻升序排列    delt_t=sorted_t[1:]-sorted_t[:-1] #间隔序列    dist,edges=np.histogram(delt_t,bins="auto",density=True)    x=edges[:-1]    return x,dist,stats.expon.pdf(x,loc=0,scale=1/lmd) #scale 为 1/lambda
   ```

### 4.8 伽马分布

1. 若事件服从泊松分布，则事件第 ![五、常见概率分布 - 图119](https://static.bookstack.cn/projects/huaxiaozhuan-ai/feaf6507e4d58d379d202553fb66a033.svg) 次发生和第 ![五、常见概率分布 - 图120](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cd2a09dda759692ca87b79b5687f0601.svg) 次发生的时间间隔为伽玛分布。由于时间间隔是个浮点数，因此指数分布是连续分布。

   - 概率密度函数：![五、常见概率分布 - 图121](https://static.bookstack.cn/projects/huaxiaozhuan-ai/79b391722e9cd499f2d0b47e5625e33f.svg)， ![五、常见概率分布 - 图122](https://static.bookstack.cn/projects/huaxiaozhuan-ai/70ac46d54c6464b9d7216d3043995379.svg) 为时间间隔 。
   - 期望： ![五、常见概率分布 - 图123](https://static.bookstack.cn/projects/huaxiaozhuan-ai/aca46d83f0442fcc3d96c8641d5fdef5.svg) 。方差：![五、常见概率分布 - 图124](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a5cdbe549ab74f32646d0740df43e20.svg) 。

2. 上面的定义中 ![五、常见概率分布 - 图125](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 必须是整数。事实上，若随机变量 ![五、常见概率分布 - 图126](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 服从伽马分布，则其概率密度函数为：

   ![五、常见概率分布 - 图127](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0d1dd481cefebabb2a23bb60f30ae82a.svg)

   记做 ![五、常见概率分布 - 图128](https://static.bookstack.cn/projects/huaxiaozhuan-ai/83bbd84d36d41b7101e2541a9e5e26d3.svg) 。其中 ![五、常见概率分布 - 图129](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6342ab7efc9cb37ed61b490d8a735de7.svg) 称作形状参数，![五、常见概率分布 - 图130](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5aa3899f7de91ca3624748e4e386d75d.svg) 称作尺度参数。

   - 期望 ![五、常见概率分布 - 图131](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8b194f25a38a585da757a841b9eb10cc.svg)，方差![五、常见概率分布 - 图132](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3e09bd382a18a5511cef39ee6eba2e81.svg) 。
   - 当 ![五、常见概率分布 - 图133](https://static.bookstack.cn/projects/huaxiaozhuan-ai/243287e10a29055d6b38935e8548ec6e.svg) 时，![五、常见概率分布 - 图134](https://static.bookstack.cn/projects/huaxiaozhuan-ai/81d76db418833c4c782a4910de619ea4.svg) 为递减函数。
   - 当 ![五、常见概率分布 - 图135](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fcc46a76fc9f4bc1c684e80b33d30c6b.svg) 时，![五、常见概率分布 - 图136](https://static.bookstack.cn/projects/huaxiaozhuan-ai/81d76db418833c4c782a4910de619ea4.svg) 为单峰函数。

   ![五、常见概率分布 - 图137](https://static.bookstack.cn/projects/huaxiaozhuan-ai/51fe27e4862c5a6b216dfa1257a8a450.jpeg)

3. 性质：

   - 当 ![五、常见概率分布 - 图138](https://static.bookstack.cn/projects/huaxiaozhuan-ai/950bbfecc544be4e0580d3aaa076485c.svg) 时， 为 `Erlang`分布。
   - 当 ![五、常见概率分布 - 图139](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eeb4830251aa758a251d736088b0dc7f.svg) 时，就是参数为 ![五、常见概率分布 - 图140](https://static.bookstack.cn/projects/huaxiaozhuan-ai/abaa991af51d80a929cac439355bd3f5.svg) 的指数分布。
   - 当 ![五、常见概率分布 - 图141](https://static.bookstack.cn/projects/huaxiaozhuan-ai/89398e066762afc055a30cdca175d079.svg) 时，就是常用的卡方分布。

4. 伽马分布的可加性：设随机变量 ![五、常见概率分布 - 图142](https://static.bookstack.cn/projects/huaxiaozhuan-ai/760928c067b8d8d65069d695d5f142d0.svg) 相互独立并且都服从伽马分布： ![五、常见概率分布 - 图143](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dab92880743148cff4b09c9189637c6b.svg)，则：

   ![五、常见概率分布 - 图144](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7c7246d9cd019249bde333673a8d8e8b.svg)

5. 用均匀分布模拟伽玛分布：

   ```
   def make_gamma(lmd,tm,k):    '''    用均匀分布模拟伽玛分布。 lmd为 lambda 参数； tm 为时间；k 为 k 参数    '''    t=np.random.uniform(0,tm,size=lmd*tm) # 获取 lmd*tm 个事件发生的时刻    sorted_t=np.sort(t) #时刻升序排列    delt_t=sorted_t[k:]-sorted_t[:-k] #间隔序列    dist,edges=np.histogram(delt_t,bins="auto",density=True)    x=edges[:-1]    return x,dist,stats.gamma.pdf(x,loc=0,scale=1/lmd,a=k) #scale 为 1/lambda,a 为 k
   ```

### 4.9 贝塔分布

1. 贝塔分布是定义在 ![五、常见概率分布 - 图145](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ad2e7410315783641f58dbf3aba025c0.svg) 之间的连续概率分布。

   如果随机变量 ![五、常见概率分布 - 图146](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 服从贝塔分布，则其概率密度函数为：

   ![五、常见概率分布 - 图147](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f92ce5e3205cfd95f55c6b0de802226d.svg)

   记做 ![五、常见概率分布 - 图148](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0cbe9c7c793ad67a3e2674354c211a61.svg) 。

   - 众数为： ![五、常见概率分布 - 图149](https://static.bookstack.cn/projects/huaxiaozhuan-ai/93c2ca16d04effe0ece2a070120a5cb4.svg) 。
   - 期望为： ![五、常见概率分布 - 图150](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f4cd9195b05249c291d98e0d2d974606.svg) ，方差为： ![五、常见概率分布 - 图151](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6d3efd48561215962f4c8a02bde92a3c.svg)。

   ![五、常见概率分布 - 图152](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4da3f6017d6a0614f72c0e7f5b6e2b75.jpeg)

### 4.10 狄拉克分布

1. 狄拉克分布：假设所有的概率都集中在一点 ![五、常见概率分布 - 图153](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e8422a0fdbff493a2c97af4b55b4b140.svg) 上，则对应的概率密度函数为：![五、常见概率分布 - 图154](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f26c6bd9c7df7d964af11955d0d2d88.svg) 。

   其中 ![五、常见概率分布 - 图155](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d1686fb8243a4daf67093750372687b.svg) 为狄拉克函数，其性质为：

   ![五、常见概率分布 - 图156](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3cc14bbb99280719d565092fd0c593cb.svg)

2. 狄拉克分布的一个典型用途就是定义连续型随机变量的经验分布函数。假设数据集中有样本 ![五、常见概率分布 - 图157](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2b8da694b5697bd4e12c9efc2ad9aebb.svg)，则定义经验分布函数：

   ![五、常见概率分布 - 图158](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6c9f40b87e95784648ba644bfe22bab4.svg)

   它就是对每个样本赋予了一个概率质量 ![五、常见概率分布 - 图159](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2ba9c5ad83f20191cdfaf9ecb95df6fe.svg)。

3. 对于离散型随机变量的经验分布，则经验分布函数就是`multinoulli`分布，它简单地等于训练集中的经验频率。

4. 经验分布的两个作用：

   - 通过查看训练集样本的经验分布，从而指定该训练集的样本采样的分布（保证采样之后的分布不失真）。
   - 经验分布就是使得训练数据的可能性最大化的概率密度函数。

### 4.11 多项式分布与狄里克雷分布

1. 多项式分布的质量密度函数：

   ![五、常见概率分布 - 图160](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0e843e9ecf6cec8bdc1f7570b076e8d4.svg)

   它是 ![五、常见概率分布 - 图161](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5358e372a888735087fb286974f3d7a8.svg) 的多项式展开的形式。

2. 狄利克雷分布的概率密度函数：

   ![五、常见概率分布 - 图162](https://static.bookstack.cn/projects/huaxiaozhuan-ai/efd56404d88740f53ba6bff1441bbeca.svg)

3. 可以看到，多项式分布与狄里克雷分布的概率密度函数非常相似，区别仅仅在于前面的归一化项：

   - 多项式分布是针对离散型随机变量，通过求和获取概率。
   - 狄里克雷分布时针对连续型随机变量，通过求积分来获取概率。

### 4.12 混合概率分布

1. 混合概率分布：它组合了其他几个分量的分布来组成。

   - 在每次生成样本中，首先通过`multinoulli`分布来决定选用哪个分量，然后由该分量的分布函数来生成样本。

   - 其概率分布函数为：

     ![五、常见概率分布 - 图163](https://static.bookstack.cn/projects/huaxiaozhuan-ai/db8e82720253b7172227d0c30cfb4300.svg)

     其中 ![五、常见概率分布 - 图164](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a8be5f1137637361da935f7a4d4ee234.svg) 为一个`multinoulli`分布，![五、常见概率分布 - 图165](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7a2ba7ad60768cb1060b1eb20f670d4a.svg) 的取值范围就是各分量的编号。

2. 前面介绍的连续型随机变量的经验分布函数就是一个混合概率分布的例子，此时 ![五、常见概率分布 - 图166](https://static.bookstack.cn/projects/huaxiaozhuan-ai/26c3af7eb0be39cb50e53c3ee64b6d7e.svg) 。

3. 混合概率分布可以通过简单的概率分布创建更复杂的概率分布。一个常见的例子是混合高斯模型，其中 ![五、常见概率分布 - 图167](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6c5dae938b2db67f495ebd1b27526389.svg) 为高斯模型。每个分量都有对应的参数 ![五、常见概率分布 - 图168](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ac556a65b5fa136d1cf198f070c1d369.svg) 。

   - 有些混合高斯模型有更强的约束，如 ![五、常见概率分布 - 图169](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3ab604a18bd2dc8845092e7daca37db0.svg)，更进一步还可以要求 ![五、常见概率分布 - 图170](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1b2c2d9cce5cfde3bdfbdbcdc8af05e0.svg) 为一个对角矩阵。
   - 混合高斯模型是一个通用的概率密度函数逼近工具。任何平滑的概率密度函数都可以通过足够多分量的混合高斯模型来逼近。