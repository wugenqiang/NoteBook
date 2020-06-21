# 第 5 章 拟牛顿法

## 5.1 原理

1. 在牛顿法的迭代中，需要计算海森矩阵的逆矩阵 ![五、拟牛顿法 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f23f0a32528f5879a77d903bb2308103.svg)，这一计算比较复杂。

   可以考虑用一个 ![五、拟牛顿法 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9f272918b0861230b374fdb073e149bb.svg) 阶矩阵 ![五、拟牛顿法 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c3aed0ee00ef5ae52da0b660e031e742.svg) 来近似代替 ![五、拟牛顿法 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c4db4b855fcb07616191e6c4d73312f.svg)。

2. 先看海森矩阵满足的条件：![五、拟牛顿法 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/028270db1288e6860c704efe53a32182.svg) 。

   - 令 ![五、拟牛顿法 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67d73b94fa75e79cfd410637a5601467.svg) 。则有：![五、拟牛顿法 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/026f95c88544db2b243b4d03fa095f28.svg)，或者 ![五、拟牛顿法 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ce5182d2502527e020503ab3d42d879f.svg)。

     这称为拟牛顿条件。

   - 根据牛顿法的迭代： ![五、拟牛顿法 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3e4ac8a2c935d3e82059198e5c3b2274.svg)，将 ![五、拟牛顿法 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 在 ![五、拟牛顿法 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/17beb32c83647f0abab41f0d9d158e5c.svg) 的一阶泰勒展开：

     ![五、拟牛顿法 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/577fa7958be3531aabfb66f502ec3473.svg)

     当 ![五、拟牛顿法 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c7782320b53915298a9048b5129f3ba7.svg) 是正定矩阵时，总有 ![五、拟牛顿法 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3621964e2eeeb7d5f932c7e9796a7618.svg)，因此每次都是沿着函数递减的方向迭代。

3. 如果选择 ![五、拟牛顿法 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 作为 ![五、拟牛顿法 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ef1510488e061857a09cd19890b06224.svg) 的近似时，![五、拟牛顿法 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 同样要满足两个条件：

   - ![五、拟牛顿法 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 必须是正定的。

   - ![五、拟牛顿法 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 满足拟牛顿条件：![五、拟牛顿法 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f4cf37e7bc6af3dfc3bed50a3b07b1e9.svg) 。

     因为 ![五、拟牛顿法 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/43a2bb2b1ac5c63d99dbcd800669ce44.svg) 是给定的初始化条件，所以下标从 ![五、拟牛顿法 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e34f758af9775d2588fd19f3777a06b3.svg) 开始。

   按照拟牛顿条件，在每次迭代中可以选择更新矩阵 ![五、拟牛顿法 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/968c219d6fca60056c86afb3a85fc024.svg) 。

4. 正定矩阵定义：设 ![五、拟牛顿法 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 是 ![五、拟牛顿法 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d46fec978a19f859b1569b2446f0c35.svg) 阶方阵，如果对任何非零向量![五、拟牛顿法 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) ，都有 ![五、拟牛顿法 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/39a5fc49bc4d5d67e00acf213af2745a.svg)，就称 ![五、拟牛顿法 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg)正定矩阵。

   - 正定矩阵判定：
     - 判定定理1：对称阵 ![五、拟牛顿法 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为正定的充分必要条件是：![五、拟牛顿法 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 的特征值全为正。
     - 判定定理2：对称阵 ![五、拟牛顿法 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为正定的充分必要条件是：![五、拟牛顿法 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 的各阶顺序主子式都为正。
     - 判定定理3：任意阵 ![五、拟牛顿法 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为正定的充分必要条件是：![五、拟牛顿法 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 合同于单位阵。
   - 正定矩阵的性质：
     - 正定矩阵一定是非奇异的。奇异矩阵的定义：若 ![五、拟牛顿法 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d46fec978a19f859b1569b2446f0c35.svg) 阶矩阵 ![五、拟牛顿法 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为奇异阵，则其的行列式为零，即 ![五、拟牛顿法 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/491af7930d8edd6fd22c92b2b97d65b7.svg)。
     - 正定矩阵的任一主子矩阵也是正定矩阵。
     - 若 ![五、拟牛顿法 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为![五、拟牛顿法 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d46fec978a19f859b1569b2446f0c35.svg) 阶对称正定矩阵，则存在唯一的主对角线元素都是正数的下三角阵 ![五、拟牛顿法 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/223fe439d461c38a1061e45316137d90.svg)，使得 ![五、拟牛顿法 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ed7a8f06bd0239869312a63cffe0344d.svg)，此分解式称为 正定矩阵的乔列斯基（`Cholesky`）分解。
     - 若 ![五、拟牛顿法 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为 ![五、拟牛顿法 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d46fec978a19f859b1569b2446f0c35.svg) 阶正定矩阵，则 ![五、拟牛顿法 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7f192304d6e5b32d5049d3559af0140c.svg) 为 ![五、拟牛顿法 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7d46fec978a19f859b1569b2446f0c35.svg) 阶可逆矩阵。
   - 正定矩阵在某个合同变换下可化为标准型， 即对角矩阵。
   - 所有特征值大于零的对称矩阵也是正定矩阵。

5. 合同矩阵：两个实对称矩阵 ![五、拟牛顿法 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df2c1b3de5e4d6e405c423b6d5571b21.svg) 和 ![五、拟牛顿法 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c8943fb1f28ff5743466c6f6d15d91a.svg) 是合同的，当且仅当存在一个可逆矩阵 ![五、拟牛顿法 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bb6b659694450ca004ccb674046a3fda.svg) ，使得 ![五、拟牛顿法 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e95d6566bd0b4ab2e4b0b05172d73d4c.svg)

   - ![五、拟牛顿法 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df2c1b3de5e4d6e405c423b6d5571b21.svg) 的合同变换：对某个可逆矩阵 ![五、拟牛顿法 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bb6b659694450ca004ccb674046a3fda.svg)，对 ![五、拟牛顿法 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df2c1b3de5e4d6e405c423b6d5571b21.svg) 执行 ![五、拟牛顿法 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3493919a769d761e90ad72c40a88396b.svg)。

## 5.2 DFP 算法

1. `DFP`算法( `Davidon-Fletcher-Powell`) 选择 ![五、拟牛顿法 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/456644634e803999a9a9aab04bc67514.svg) 的方法是：

   假设每一步迭代中 ![五、拟牛顿法 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/456644634e803999a9a9aab04bc67514.svg) 是由 ![五、拟牛顿法 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 加上两个附加项构成：![五、拟牛顿法 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/199915d60508d66f709117709cad4499.svg)，其中 ![五、拟牛顿法 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ee9f88c821fc59396437a020a4f5c3a9.svg) 是待定矩阵。此时有：![五、拟牛顿法 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5440b757d72a8bd29689bd62321b4051.svg)。

   为了满足拟牛顿条件，可以取：![五、拟牛顿法 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/262b68f7abefc3643f687986990105eb.svg)。

   这样的![五、拟牛顿法 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ee9f88c821fc59396437a020a4f5c3a9.svg) 不止一个。例如取 ：

   ![五、拟牛顿法 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/33e013efc3817197f817ab83724dba06.svg)

   则迭代公式为：

   ![五、拟牛顿法 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/02cbd79793e4aac3c3972027aa9fe9f2.svg)

   可以证明：如果初始矩阵 ![五、拟牛顿法 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/43a2bb2b1ac5c63d99dbcd800669ce44.svg) 是正定的，则迭代过程中每个矩阵 ![五、拟牛顿法 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 都是正定的。

2. `DFP`算法：

   - 输入：
     - 目标函数 ![五、拟牛顿法 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg)
     - 梯度 ![五、拟牛顿法 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3449263623ad5692edc80706175f5da.svg)
     - 精度要求 ![五、拟牛顿法 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/050d005f9436c23262d6c9f27620e71f.svg)
   - 输出： ![五、拟牛顿法 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 的极小值点 ![五、拟牛顿法 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/357c2bc6fc0b242315f49ef85b5af80e.svg)
   - 算法步骤：
     - 选取初始值 ![五、拟牛顿法 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfcb8ca9b89f46d88ff3f578ff54681a.svg), 取 ![五、拟牛顿法 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/43a2bb2b1ac5c63d99dbcd800669ce44.svg) 为正定对称矩阵，置 ![五、拟牛顿法 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c8d979a4455d4486c53896f78b27aa8.svg) 。
     - 迭代，停止条件为：梯度收敛。迭代步骤为：
       - 计算 ![五、拟牛顿法 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1159a2396353dab70d4ca5fbc20186b2.svg) 。
       - 若 ![五、拟牛顿法 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/021c99f3846a5db31cb7f2ffe12663e2.svg)， 则停止计算，得到近似解 ![五、拟牛顿法 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f524dcd6c503f416e32cb9764c353a42.svg)。
       - 若 ![五、拟牛顿法 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d5ffcaada57bed21313f90be3165f696.svg)， 则：
         - 计算 ![五、拟牛顿法 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3991cb846b069ac08c70e280df0a4969.svg) 。
         - 一维搜索：求 ![五、拟牛顿法 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b943461f7a53c2d93e949393b4027a77.svg)： ![五、拟牛顿法 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9260bf980195d869aedbb00d781a2116.svg) 。
         - 设置 ![五、拟牛顿法 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78f286371aa0185897f425349c6c25fa.svg) 。
         - 计算 ![五、拟牛顿法 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b3e37076e3478890f9589da19d5f498b.svg)。若 ![五、拟牛顿法 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e530bf9dd9060f828e5d7036f0fff43f.svg)， 则停止计算，得到近似解 ![五、拟牛顿法 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f524dcd6c503f416e32cb9764c353a42.svg) 。
         - 否则计算 ![五、拟牛顿法 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/456644634e803999a9a9aab04bc67514.svg)，置 ![五、拟牛顿法 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/02fe1f48ca7175d0446ebbae4ebde287.svg)，继续迭代。

3. `DFP`算法中，每一次 ![五、拟牛顿法 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 增加的方向是 ![五、拟牛顿法 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f93a31ad7c1685d7b2af0d494b77be40.svg) 的方向。增加的幅度由 ![五、拟牛顿法 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b943461f7a53c2d93e949393b4027a77.svg) 决定，若跨度过大容易引发震荡。

   ![gradient_descent_newton_dfp](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1a801fca61c6bd1418b13311d37b004e.png)

## 5.2 BFGS 算法

1. `BFGS`是最流行的拟牛顿算法。 `DFP`算法中，用 ![五、拟牛顿法 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5fdb93ada21717d18009f379bbccd63b.svg) 逼近 ![五、拟牛顿法 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f23f0a32528f5879a77d903bb2308103.svg)。换个角度看，可以用矩阵 ![五、拟牛顿法 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/beef5366abaa82a319ab6a9da88772b5.svg) 逼近海森矩阵 ![五、拟牛顿法 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/57067a4153cc098522a3ef9adae370f0.svg)。此时对应的拟牛顿条件为： ![五、拟牛顿法 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6db35a26e7ffd333dc9d140f7587f77a.svg)。

   > 因为 ![五、拟牛顿法 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c96014fcd37798463fcce62e0a215f47.svg) 是给定的初始化条件，所以下标从 ![五、拟牛顿法 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e34f758af9775d2588fd19f3777a06b3.svg) 开始。

2. 令： ![五、拟牛顿法 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b06cb0cf1992ee5c67ae6df6b8535d19.svg)，有： ![五、拟牛顿法 - 图99](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b852370b9fa0a2d5afb0d4dfd6ca7faf.svg) 。

   可以取 ![五、拟牛顿法 - 图100](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8581192721033a643a3be5ba92f25551.svg) 。寻找合适的 ![五、拟牛顿法 - 图101](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ee9f88c821fc59396437a020a4f5c3a9.svg) ，可以得到 `BFGS` 算法矩阵的 ![五、拟牛顿法 - 图102](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e209f528b44cf5b6efac91a5705a34fd.svg) 的迭代公式：

   ![五、拟牛顿法 - 图103](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60157a127e6464661e3b7e3071bc6578.svg)

   可以证明，若 ![五、拟牛顿法 - 图104](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c96014fcd37798463fcce62e0a215f47.svg) 是正定的，则迭代过程中每个矩阵 ![五、拟牛顿法 - 图105](https://static.bookstack.cn/projects/huaxiaozhuan-ai/beef5366abaa82a319ab6a9da88772b5.svg) 都是正定的。

3. `BFGS`算法：

   - 输入：

     - 目标函数 ![五、拟牛顿法 - 图106](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg)
     - 梯度 ![五、拟牛顿法 - 图107](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3449263623ad5692edc80706175f5da.svg)
     - 精度要求 ![五、拟牛顿法 - 图108](https://static.bookstack.cn/projects/huaxiaozhuan-ai/750d915d44091aa15b1e626053cf7de1.svg)

   - 输出： ![五、拟牛顿法 - 图109](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 的极小值点 ![五、拟牛顿法 - 图110](https://static.bookstack.cn/projects/huaxiaozhuan-ai/357c2bc6fc0b242315f49ef85b5af80e.svg)

   - 算法步骤：

     - 选取初始值 ![五、拟牛顿法 - 图111](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfcb8ca9b89f46d88ff3f578ff54681a.svg), 取 ![五、拟牛顿法 - 图112](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c96014fcd37798463fcce62e0a215f47.svg) 为正定对称矩阵，置 ![五、拟牛顿法 - 图113](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c8d979a4455d4486c53896f78b27aa8.svg) 。

     - 迭代，停止条件为：梯度收敛。迭代步骤为：

       - 计算 ![五、拟牛顿法 - 图114](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1159a2396353dab70d4ca5fbc20186b2.svg) 。

       - 若 ![五、拟牛顿法 - 图115](https://static.bookstack.cn/projects/huaxiaozhuan-ai/021c99f3846a5db31cb7f2ffe12663e2.svg)， 则停止计算，得到近似解 ![五、拟牛顿法 - 图116](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f524dcd6c503f416e32cb9764c353a42.svg) 。

       - 若 ![五、拟牛顿法 - 图117](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d5ffcaada57bed21313f90be3165f696.svg)， 则:

         - 由 ![五、拟牛顿法 - 图118](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dd410764c6c44285908136d5c7948914.svg) 求出 ![五、拟牛顿法 - 图119](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7903df66d510fc7bdb89d8cdffc1407c.svg) 。

           > 这里表面上看需要对矩阵求逆。但是实际上 ![五、拟牛顿法 - 图120](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5f7e4a5ddf87f6807b93bf8bed5ad934.svg) 有迭代公式。根据`Sherman-Morrison` 公式以及 ![五、拟牛顿法 - 图121](https://static.bookstack.cn/projects/huaxiaozhuan-ai/beef5366abaa82a319ab6a9da88772b5.svg) 的迭代公式，可以得到 ![五、拟牛顿法 - 图122](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5f7e4a5ddf87f6807b93bf8bed5ad934.svg) 的迭代公式。

         - 一维搜索：求 ![五、拟牛顿法 - 图123](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b943461f7a53c2d93e949393b4027a77.svg)： ![五、拟牛顿法 - 图124](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9260bf980195d869aedbb00d781a2116.svg) 。

         - 设置 ![五、拟牛顿法 - 图125](https://static.bookstack.cn/projects/huaxiaozhuan-ai/78f286371aa0185897f425349c6c25fa.svg) 。

         - 计算 ![五、拟牛顿法 - 图126](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b3e37076e3478890f9589da19d5f498b.svg)。若 ![五、拟牛顿法 - 图127](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e530bf9dd9060f828e5d7036f0fff43f.svg) ， 则停止计算，得到近似解 ![五、拟牛顿法 - 图128](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f524dcd6c503f416e32cb9764c353a42.svg) 。

         - 否则计算 ![五、拟牛顿法 - 图129](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e209f528b44cf5b6efac91a5705a34fd.svg) ，置 ![五、拟牛顿法 - 图130](https://static.bookstack.cn/projects/huaxiaozhuan-ai/02fe1f48ca7175d0446ebbae4ebde287.svg) ，继续迭代。

4. `BFPS` 算法中，每一次 ![五、拟牛顿法 - 图131](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 增加的方向是 ![五、拟牛顿法 - 图132](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a46d50d1a0d89f1ca58b9f3b1b8aea1b.svg) 的方向。增加的幅度由 ![五、拟牛顿法 - 图133](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b943461f7a53c2d93e949393b4027a77.svg) 决定，若跨度过大容易引发震荡。

   ![gradient_descent_newton_dfp](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b71556d80cea98c253aa51d078979623.png)

## 5.3 Broyden 类算法

1. 若记 ![五、拟牛顿法 - 图135](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7c5d52cc817fb7bc3d61d8f0803a6447.svg)，则对式子：

   ![五、拟牛顿法 - 图136](https://static.bookstack.cn/projects/huaxiaozhuan-ai/92d28cdd5dd264027fff4a3b8ad80464.svg)

   使用两次`Sherman-Morrison`公式可得：

   ![五、拟牛顿法 - 图137](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2937e062f17cb953a38de20819d29e34.svg)

2. 令 `DFP` 算法获得的 ![五、拟牛顿法 - 图138](https://static.bookstack.cn/projects/huaxiaozhuan-ai/456644634e803999a9a9aab04bc67514.svg) 的迭代公式记作：

   ![五、拟牛顿法 - 图139](https://static.bookstack.cn/projects/huaxiaozhuan-ai/81666ebe1df2aa98fff017f5d9b7f5b3.svg)

   由 `BFGS` 算法获得的 ![五、拟牛顿法 - 图140](https://static.bookstack.cn/projects/huaxiaozhuan-ai/456644634e803999a9a9aab04bc67514.svg) 的迭代公式记作 ：

   ![五、拟牛顿法 - 图141](https://static.bookstack.cn/projects/huaxiaozhuan-ai/70f8ae3c4588590aae8dc5f9db961958.svg)

   他们都满足拟牛顿条件，所以他们的线性组合：![五、拟牛顿法 - 图142](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5f3e85c8642f125173261e72acf0be83.svg) 也满足拟牛顿条件，而且是正定的，其中 ![五、拟牛顿法 - 图143](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bdb829fd5bed8e8fdcdb51f85c367900.svg) 。

   这样获得了一族拟牛顿法，称为 `Broyden` 类算法。

3. `Sherman-Morrison`公式：假设 ![五、拟牛顿法 - 图144](https://static.bookstack.cn/projects/huaxiaozhuan-ai/df2c1b3de5e4d6e405c423b6d5571b21.svg) 是 ![五、拟牛顿法 - 图145](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9f272918b0861230b374fdb073e149bb.svg) 阶可逆矩阵， ![五、拟牛顿法 - 图146](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3bcddd5e8a121f9d232b701075413f14.svg) 是 ![五、拟牛顿法 - 图147](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9f272918b0861230b374fdb073e149bb.svg) 维列向量，且 ![五、拟牛顿法 - 图148](https://static.bookstack.cn/projects/huaxiaozhuan-ai/04179cec2362c116eec1362afb157581.svg) 也是可逆矩阵，则：

   ![五、拟牛顿法 - 图149](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e27bc41a51cbe44df0daccb933ade99e.svg)