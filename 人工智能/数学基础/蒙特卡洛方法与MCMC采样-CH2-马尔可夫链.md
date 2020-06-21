# 第 2 章 马尔可夫链

1. 马尔可夫链是满足马尔可夫性质的随机过程。

   马尔可夫链 ![二、马尔可夫链 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/638e2aaa145916d7398e2ba684a40799.svg) 描述了一个状态序列，其中每个状态值取决于前一个状态。![二、马尔可夫链 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f110f5291a9677fd08f71950297dc55a.svg) 为随机变量，称为时刻 ![二、马尔可夫链 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2735987dd443c370c5ff55050d09be7c.svg) 的状态，其取值范围称作状态空间。

   马尔可夫链的数学定义为： ![二、马尔可夫链 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f397f40fd1b5518af0f78c08d47bc4ea.svg) 。

## 2.1 马尔可夫链示例

1. 社会学家把人按照经济状况分成三类：下层、中层、上层。用状态 `1,2,3` 代表着三个阶层。社会学家发现：决定一个人的收入阶层的最重要因素就是其父母的收入阶层。

   - 如果一个人的收入属于下层，则他的孩子属于下层的概率是 0.65，属于中层的概率是 0.28，属于上层的概率是 0.07 。
   - 如果一个人的收入属于中层，则他的孩子属于下层的概率是 0.15，属于中层的概率是 0.67，属于上层的概率是 0.18 。
   - 如果一个人的收入属于上层，则他的孩子属于下层的概率是 0.12，属于中层的概率是 0.36，属于上层的概率是 0.52 。

   从父代到子代，收入阶层的变化的转移概率如下：

   |           | 子代阶层1 | 子代阶层2 | 子代阶层3 |
   | :-------- | :-------- | :-------- | :-------- |
   | 父代阶层1 | 0.65      | 0.28      | 0.07      |
   | 父代阶层2 | 0.15      | 0.67      | 0.18      |
   | 父代阶层3 | 0.12      | 0.36      | 0.52      |

2. 使用矩阵的表示方式，转移概率矩阵记作：

   ![二、马尔可夫链 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/14801d065b833fd99b3242d499369f54.svg)

   假设当前这一代人在下层、中层、上层的人的比例是概率分布 ![二、马尔可夫链 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a6b78c43b042e93c63cbe7d981fd70f4.svg) ，则：

   - 他们的子女在下层、中层、上层的人的概率分布是 ![二、马尔可夫链 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0bcdc3d418fb9c16ed61f429e6caa021.svg)
   - 他们的孙子代的分布比例将是 ![二、马尔可夫链 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a8fe77e7f80717579d64430589df630b.svg)
   - ….
   - 第 ![二、马尔可夫链 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 代子孙在下层、中层、上层的人的比例是 ![二、马尔可夫链 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a5e6a435dcae01fe3511772f77a22a0.svg)

3. 假设初始概率分布为 ![二、马尔可夫链 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c71dc6394284c750e447420efd3c741.svg) ，给出前 14 代人的分布状况：

   ```
     0 0.72 0.19 0.09  1 0.5073 0.3613 0.1314  2 0.399708 0.431419 0.168873  3 0.34478781 0.46176325 0.19344894  4 0.3165904368 0.4755635827 0.2078459805  5 0.302059838985 0.482097475693 0.215842685322  6 0.294554638933 0.485285430346 0.220159930721  7 0.290672521545 0.486874112293 0.222453366163  8 0.288662659788 0.487677173087 0.223660167125  9 0.28762152488 0.488086910874 0.224291564246  10 0.287082015513 0.488297220381 0.224620764107  11 0.286802384833 0.488405577077 0.22479203809  12 0.286657431274 0.488461538107 0.224881030619  13 0.286582284718 0.488490482311 0.22492723297  14 0.28654332537 0.488505466739 0.224951207891
   ```

   可以看到从第 9 代开始，阶层分布就趋向于稳定不变。

4. 如果换一个初始概率分布为 ![二、马尔可夫链 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9487868724484deb8eef1903965dd49.svg) ，给出前 14 代人的分布状况：

   ```
     0 0.51 0.34 0.15  1 0.4005 0.4246 0.1749  2 0.345003 0.459586 0.195411  3 0.31663917 0.47487142 0.20848941  4 0.3020649027 0.4818790066 0.2160560907  5 0.294550768629 0.48521729983 0.220231931541  6 0.290668426368 0.486853301457 0.222478272175  7 0.288659865019 0.487671049342 0.223669085639  8 0.28761985994 0.488085236095 0.224294903965  9 0.287081082851 0.488296834394 0.224622082755  10 0.286801878943 0.488405532034 0.224792589023  11 0.286657161801 0.488461564615 0.224881273584  12 0.286582142693 0.488490512087 0.224927345221  13 0.28654325099 0.488505487331 0.224951261679  14 0.286523087645 0.488513240994 0.224963671362
   ```

   可以发现到第 8 代又收敛了。

5. 两次不同的初始概率分布，最终都收敛到概率分布 ![二、马尔可夫链 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ba46b0b494d9d3b2f4954d8051db0fdb.svg) 。 这说明收敛的行为和初始概率分布 ![二、马尔可夫链 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4bc14c9fa2c5516bbccd2c6f09474b6.svg) 无关，而是由概率转移矩阵 ![二、马尔可夫链 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7898ba6178e6a0c4a55151b3015356ef.svg) 决定的。

   计算 ![二、马尔可夫链 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/770e80bb7dd1dc420ca5f100458b968c.svg)：

   ```
   0 [[ 0.65  0.28  0.07]     [ 0.15  0.67  0.18]     [ 0.12  0.36  0.52]]  1 [ [ 0.4729  0.3948  0.1323]      [ 0.2196  0.5557  0.2247]      [ 0.1944  0.462   0.3436]]  ...  18 [[ 0.28650397  0.48852059  0.22497545]      [ 0.28650052  0.48852191  0.22497757]      [ 0.28649994  0.48852213  0.22497793]]  19 [[ 0.28650272  0.48852106  0.22497622]      [ 0.28650093  0.48852175  0.22497732]      [ 0.28650063  0.48852187  0.2249775 ]]  20 [[ 0.28650207  0.48852131  0.22497661]      [ 0.28650115  0.48852167  0.22497719]      [ 0.28650099  0.48852173  0.22497728]]  21 [[ 0.28650174  0.48852144  0.22497682]      [ 0.28650126  0.48852163  0.22497712]      [ 0.28650118  0.48852166  0.22497717]]  ...
   ```

   可以看到 ：

   ![二、马尔可夫链 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/84db750fb23b3c2f91746b95a730c1a4.svg)

   发现当 ![二、马尔可夫链 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 足够大的时候， 矩阵 ![二、马尔可夫链 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/770e80bb7dd1dc420ca5f100458b968c.svg) 收敛且每一行都稳定收敛到 ![二、马尔可夫链 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ba46b0b494d9d3b2f4954d8051db0fdb.svg) 。

## 2.2 平稳分布

1. 马尔可夫链定理：如果一个非周期马尔可夫链具有转移概率矩阵 ![二、马尔可夫链 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7898ba6178e6a0c4a55151b3015356ef.svg)，且它的任何两个状态是联通的，则有：

   ![二、马尔可夫链 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2173422a1294291441e169e292566d55.svg)

   其中：

   - ![二、马尔可夫链 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/881517711cd5194b69e9b054baa4ed79.svg) 为所有可能的状态。

   - ![二、马尔可夫链 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f7c61ba6d79aa675c0df711c7bff8838.svg) 是转移概率矩阵 ![二、马尔可夫链 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7898ba6178e6a0c4a55151b3015356ef.svg) 的第 ![二、马尔可夫链 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 行第 ![二、马尔可夫链 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c38684bb6cad4ba739a4bae3ca0619f.svg) 列的元素，表示状态 ![二、马尔可夫链 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 转移到状态 ![二、马尔可夫链 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c38684bb6cad4ba739a4bae3ca0619f.svg) 的概率。

   - 概率分布 ![二、马尔可夫链 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfd436dd20f31109cfc948dc55d2b3ee.svg) 是方程 ![二、马尔可夫链 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2088f08b87f3bbdcc5e3a63b2ce39fac.svg) 的唯一解，其中 ![二、马尔可夫链 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0eb669ecc713c1ecfdf3e9b521e84853.svg) 。

     称概率分布 ![二、马尔可夫链 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/832cc66802c19ea74d61725905fc5e13.svg) 为马尔可夫链的平稳分布。

2. 注意，在马尔可夫链定理中：

   - 马尔可夫链的状态不要求有限，可以是无穷多个。

   - 非周期性在实际任务中都是满足的。

   - 两个状态的连通指的是：状态 ![二、马尔可夫链 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 可以通过有限的 ![二、马尔可夫链 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 步转移到达 ![二、马尔可夫链 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c38684bb6cad4ba739a4bae3ca0619f.svg) (并不要求从状态 ![二、马尔可夫链 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 可以直接一步转移到状态 ![二、马尔可夫链 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5c38684bb6cad4ba739a4bae3ca0619f.svg) ）。

     马尔可夫链的任何两个状态是联通的含义是：存在一个 ![二、马尔可夫链 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) ，使得矩阵 ![二、马尔可夫链 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/770e80bb7dd1dc420ca5f100458b968c.svg) 中的任何一个元素的数值都大于零。

3. 从初始概率分布 ![二、马尔可夫链 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d4bc14c9fa2c5516bbccd2c6f09474b6.svg) 出发，在马尔可夫链上做状态转移，记时刻 ![二、马尔可夫链 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fd3c8130f3e375a09930923dd0cc2860.svg) 的状态 ![二、马尔可夫链 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a43edba156cf9cf373bdaccd8c4a65b5.svg) 服从的概率分布为 ![二、马尔可夫链 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/802af6e6d4846baf31b1d034c0ffa5bb.svg)， 记作 ![二、马尔可夫链 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5654ee0e31202b2419f94848371f8553.svg) ，则有：

   ![二、马尔可夫链 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0fc99f55224579868aa08cd3cd18ef8a.svg)

   假设到达第 ![二、马尔可夫链 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 步时，马尔可夫链收敛，则有：

   ![二、马尔可夫链 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8e3b519d2b35cd9a954d3898c86afb8d.svg)

   所以 ![二、马尔可夫链 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2bb5e1ac9d618b8ff6c3f080b5b671b9.svg) 都是同分布的随机变量（当然它们并不独立）。

   如果从一个具体的初始状态 ![二、马尔可夫链 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/772667393aa88b9a70e943ca5bb3bb0b.svg) 开始，然后沿着马尔可夫链按照概率转移矩阵做调整，则得到一个转移序列 ![二、马尔可夫链 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/042ceb6236970bcc133ae4fc0e794495.svg) 。

   根据马尔可夫链的收敛行为，当 ![二、马尔可夫链 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 较大时， ![二、马尔可夫链 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/23766fb0343f5d94d0bb616e13859531.svg) 将是平稳分布 ![二、马尔可夫链 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/832cc66802c19ea74d61725905fc5e13.svg) 的样本。

4. 定理：如果非周期马尔可夫链的转移矩阵 ![二、马尔可夫链 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7898ba6178e6a0c4a55151b3015356ef.svg) 和某个分布 ![二、马尔可夫链 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/62c57c1be232fe19f5690064dba0236d.svg) 满足：![二、马尔可夫链 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90d10440a4d12a247da52becb88f20e9.svg) ，则 ![二、马尔可夫链 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/62c57c1be232fe19f5690064dba0236d.svg) 是马尔可夫链的平稳分布。

   这被称作马尔可夫链的细致平稳条件`detailed balance condition` ，其证明如下：

   ![二、马尔可夫链 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e8c1499e486f9b1a8cbe50ca569fb725.svg)