# 第 6 章 约束优化

1. 在有的最优化问题中，希望输入 ![六、 约束优化 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 位于特定的集合 ![六、 约束优化 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 中，这称作约束优化问题。

   集合![六、 约束优化 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 内的点 ![六、 约束优化 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 称作可行解。集合 ![六、 约束优化 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 也称作可行域。

2. 约束优化的一个简单方法是：对梯度下降法进行修改，每次迭代后，将得到的新的 ![六、 约束优化 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 映射到集合 ![六、 约束优化 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 中。

   如果使用线性搜索：则每次只搜索那些使得新的 ![六、 约束优化 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 位于集合 ![六、 约束优化 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 中的那些 ![六、 约束优化 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df1802176e78bd9cca91b6437e22d0bd.svg) 。

   - 另一个做法：将线性搜索得到的新的 ![六、 约束优化 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 映射到集合 ![六、 约束优化 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bba7ad7a7aebbce57c57d8290ef9fed9.svg) 中。
   - 或者：在线性搜索之前，将梯度投影到可行域的切空间内。

3. 在约束最优化问题中，常常利用拉格朗日对偶性将原始问题转换为对偶问题，通过求解对偶问题而得到原始问题的解。

4. 约束最优化问题的原始问题：假设 ![六、 约束优化 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3cb5bcc195b5e4ed18ebe7e8c1a63057.svg) 是定义在 ![六、 约束优化 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df57402caa4fa4d775c867799226ef80.svg) 上的连续可微函数。考虑约束最优化问题：

   ![六、 约束优化 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/94a83adeda08e13d7260a544869e9d30.svg)

   可行域由等式和不等式确定：![六、 约束优化 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/280c20448d273cb0af12d73368e25b78.svg) 。

## 6.1 原始问题

1. 引入拉格朗日函数：

   ![六、 约束优化 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a71b34692f23b8e52e10a0c3d30de3b5.svg)

   这里 ![六、 约束优化 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/87390ab46b92ff4b2b7b05744004b55f.svg) 是拉格朗日乘子， ![六、 约束优化 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/63fe685201d42df6b1b597662bebb728.svg) 。

   ![六、 约束优化 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bf05e91f929fcd631742d3997a266414.svg) 是 ![六、 约束优化 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/af66ba659ce47666c6cc4f556b97eac9.svg) 的多元非线性函数。

2. 定义函数：

   ![六、 约束优化 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/54e8e73dc8a330a21b90258ac1ec2113.svg)

   其中下标 ![六、 约束优化 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86565c3da9e10ea73043b77145e067ef.svg) 表示原始问题。则有：

   ![六、 约束优化 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e6f1ff10634f5a5a59576430dcebc556.svg)

   - 若 ![六、 约束优化 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 满足原问题的约束，则很容易证明 ![六、 约束优化 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/378a4b608c307c76a5082db8fe733f64.svg) ，等号在 ![六、 约束优化 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b46d9589ffdd0acf2b601b40ddd7fbb6.svg) 时取到。
   - 若 ![六、 约束优化 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 不满足原问题的约束：
     - 若不满足 ![六、 约束优化 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9e1b3aa81a5fdcdf540d1cbddbfa870e.svg) ：设违反的为 ![六、 约束优化 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9820b4c3c0cd3b0540b4a35d7e5c9278.svg)，则令 ![六、 约束优化 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64cfc652f2edb96e67909ca42611c90c.svg)，有：![六、 约束优化 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3d1b27dadf6de129509767cf42428287.svg) 。
     - 若不满足 ![六、 约束优化 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/70c67f84478850252cb4f771db32b8cc.svg) ： 设违反的为 ![六、 约束优化 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ffb42c7f6c5797267845457efcdace7e.svg)，则令 ![六、 约束优化 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/19f0fbde0152f5411f36250213a0ff9d.svg)，有：![六、 约束优化 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7b2cc960fff11d5f5ff9b9a4b608f3db.svg) 。

3. 考虑极小化问题：

   ![六、 约束优化 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/80f39352c17f877e5704124cf700427c.svg)

   则该问题是与原始最优化问题是等价的，即他们有相同的问题。

   - ![六、 约束优化 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9afc9baa97ef4616592a9080f0902f62.svg) 称为广义拉格朗日函数的极大极小问题。
   - 为了方便讨论，定义原始问题的最优值为：![六、 约束优化 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f4c79bbf5d68f1ede96100f5edb8a626.svg) 。

## 6.2 对偶问题

1. 定义 ![六、 约束优化 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/15ee0b3ff367439314c5f05ed5c5126f.svg)，考虑极大化 ![六、 约束优化 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ce5c037af3b953009efc418313a6e062.svg)，即：

   ![六、 约束优化 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2af22bb898a1bb800bcf2768154a0fc0.svg)

   问题 ![六、 约束优化 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a2e694edc489f338968328b436da8aa4.svg) 称为广义拉格朗日函数的极大极小问题。它可以表示为约束最优化问题：

   ![六、 约束优化 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/42338373cb89cb286cea444c96764ede.svg)

   称为原始问题的对偶问题。

   为了方便讨论，定义对偶问题的最优值为：![六、 约束优化 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ac6ad7b257528a8d71fdb10de05e724a.svg) 。

2. 定理一：若原问题和对偶问题具有最优值，则：

   ![六、 约束优化 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0a4f59107392bba5f86e7efef7e664d9.svg)

   - 推论一：设 ![六、 约束优化 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d54cb1ab33438091ecdf015dfdd4ce9d.svg) 为原始问题的可行解，且 ![六、 约束优化 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c18fa74acc14cfdae781cb3eb1dfd5a2.svg) 的值为 ![六、 约束优化 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c14bcbcf3be588f39f6968166432cfbf.svg) ； ![六、 约束优化 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f1caa326a9838059ce4c8dff741f292e.svg) 为对偶问题的可行解， ![六、 约束优化 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bda73e2b7d9577582f76cba5caaabbdd.svg) 值为 ![六、 约束优化 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ee7ea8f8694b741ea138100970da1455.svg)。

     如果有 ![六、 约束优化 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/55e6a4a6adca0303d82754581ed7d529.svg)，则 ![六、 约束优化 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/56f1640d09535784cc681ce99ec8467a.svg) 分别为原始问题和对偶问题的最优解。

3. 定理二：假设函数 ![六、 约束优化 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 和 ![六、 约束优化 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3fe96d7ce5cadd47770ceace5ad3c0b.svg) 为凸函数， ![六、 约束优化 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5019a8a2e4154e1d239c4432dc4c34ae.svg) 是仿射函数；并且假设不等式约束 ![六、 约束优化 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3fe96d7ce5cadd47770ceace5ad3c0b.svg) 是严格可行的，即存在![六、 约束优化 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) ，对于所有 ![六、 约束优化 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/03044bce264471863b3681706b09ab8d.svg) 有 ![六、 约束优化 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/18e34f51bf1a25e3d001947335506a5e.svg)。则存在 ![六、 约束优化 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/56f1640d09535784cc681ce99ec8467a.svg) ，使得： ![六、 约束优化 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d54cb1ab33438091ecdf015dfdd4ce9d.svg) 是原始问题 ![六、 约束优化 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fbb6e2f4c1766e3586f6b3821fd37ac0.svg) 的解，![六、 约束优化 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f1caa326a9838059ce4c8dff741f292e.svg) 是对偶问题 ![六、 约束优化 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90e72d83d9b85822de9587d8ac110d60.svg) 的解，并且 ![六、 约束优化 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9186dddc616261ceb7ffcbc320ebaf82.svg) 。

4. 定理三：假设函数 ![六、 约束优化 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 和 ![六、 约束优化 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3fe96d7ce5cadd47770ceace5ad3c0b.svg) 为凸函数， ![六、 约束优化 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5019a8a2e4154e1d239c4432dc4c34ae.svg) 是仿射函数；并且假设不等式约束 ![六、 约束优化 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3fe96d7ce5cadd47770ceace5ad3c0b.svg) 是严格可行的，即存在![六、 约束优化 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) ，对于所有 ![六、 约束优化 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/03044bce264471863b3681706b09ab8d.svg) 有 ![六、 约束优化 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/18e34f51bf1a25e3d001947335506a5e.svg)。则存在 ![六、 约束优化 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/56f1640d09535784cc681ce99ec8467a.svg) ，使得 ![六、 约束优化 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d54cb1ab33438091ecdf015dfdd4ce9d.svg) 是原始问题 ![六、 约束优化 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fbb6e2f4c1766e3586f6b3821fd37ac0.svg) 的解，![六、 约束优化 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f1caa326a9838059ce4c8dff741f292e.svg) 是对偶问题 ![六、 约束优化 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90e72d83d9b85822de9587d8ac110d60.svg) 的解的充要条件是：![六、 约束优化 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/56f1640d09535784cc681ce99ec8467a.svg) 满足下面的 `Karush-kuhn-Tucker(KKT)` 条件：

   ![六、 约束优化 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/958b7df76da491bc8076dfedcb6642fe.svg)

5. 仿射函数：仿射函数即由`1`阶多项式构成的函数。

   一般形式为 ![六、 约束优化 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/88be2fb3a9b6f4a49239ebe969536df5.svg)。这里：![六、 约束优化 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df2c1b3de5e4d6e405c423b6d5571b21.svg) 是一个 ![六、 约束优化 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3ed6c63caa3faeacbfead4750a351395.svg) 矩阵，![六、 约束优化 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 是一个 ![六、 约束优化 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a1cc8499ed2176475ae997495d68a754.svg) 维列向量，![六、 约束优化 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/327151543806511da21e6a26b4cf17f6.svg) 是一个 ![六、 约束优化 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b7cb9d36658b8ba6eecdfadea9653052.svg) 维列向量。

   它实际上反映了一种从 ![六、 约束优化 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a1cc8499ed2176475ae997495d68a754.svg) 维到 ![六、 约束优化 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b7cb9d36658b8ba6eecdfadea9653052.svg) 维的空间线性映射关系。

6. 凸函数：设 ![六、 约束优化 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60b1a651b9564561edd4d4a2aa5d86d0.svg) 为定义在区间 ![六、 约束优化 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67bc409f62594d9e7cd2dc5c894336a6.svg) 上的函数，若对 ![六、 约束优化 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67bc409f62594d9e7cd2dc5c894336a6.svg) 上的任意两点 ![六、 约束优化 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/604007c6db62260914d853958d6aae4a.svg) 和任意的实数 ![六、 约束优化 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/87ab1d96cafbcffb7fc6f00d8bf4d8a7.svg)，总有 ![六、 约束优化 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/450a31a062af14b6b2703808ab5bc40f.svg) ，则 ![六、 约束优化 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60b1a651b9564561edd4d4a2aa5d86d0.svg) 称为 ![六、 约束优化 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67bc409f62594d9e7cd2dc5c894336a6.svg) 上的凸函数 。