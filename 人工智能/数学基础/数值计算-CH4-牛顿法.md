# 第 4 章 牛顿法

1. 梯度下降法有个缺陷：它未能利用海森矩阵的信息。

   - 当海森矩阵的条件数较大时，不同方向的梯度的变化差异很大。

     - 在某些方向上，梯度变化很快；在有些方向上，梯度变化很慢。

     - 梯度下降法未能利用海森矩阵，也就不知道应该优先搜索导数长期为负或者长期为正的方向。

       本质上应该沿着负梯度方向搜索。但是沿着该方向的一段区间内，如果导数一直为正或者一直为负，则可以直接跨过该区间。前提是：必须保证该区间内，该方向导数不会发生正负改变。

   - 当海森矩阵的条件数较大时，也难以选择合适的步长。

     - 步长必须足够小，从而能够适应较强曲率的地方（对应着较大的二阶导数，即该区域比较陡峭）。
     - 但是如果步长太小，对于曲率较小的地方（对应着较小的二阶导数，即该区域比较平缓）则推进太慢。

2. 下图是利用梯度下降法寻找函数最小值的路径。该函数是二次函数，海森矩阵条件数为 5，表明最大曲率是最小曲率的5倍。红线为梯度下降的搜索路径。

   > 它没有用最速下降法，而是用到线性搜索。如果是最速下降法，则相邻两次搜索的方向正交。

   ![g_descent.PNG](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cdb31d0d27ab9fcf520d6d9dcaba2ac0.png)

3. 牛顿法结合了海森矩阵。

   考虑泰勒展开式：![四、牛顿法 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e0f214e1719cedd46f1c98d19979e4b4.svg) 。其中 ![四、牛顿法 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f8ed3e46c2e89b33f6518cdbe2590277.svg) 为 ![四、牛顿法 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1580c5c168f64b97c723c82574db5164.svg) 处的梯度； ![四、牛顿法 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/57067a4153cc098522a3ef9adae370f0.svg) 为 ![四、牛顿法 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1580c5c168f64b97c723c82574db5164.svg) 处的海森矩阵。

   如果 ![四、牛顿法 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2d3fc8817fdbb2cc3e44ded6b347e47c.svg) 为极值点，则有： ![四、牛顿法 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9f4f9d9194a1776a5594c8b328407d5.svg)，则有：![四、牛顿法 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8449a1c8bc2b0c9b0d5ef2d773716aa3.svg) 。

   - 当 ![四、牛顿法 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60b1a651b9564561edd4d4a2aa5d86d0.svg) 是个正定的二次型，则牛顿法直接一次就能到达最小值点。
   - 当 ![四、牛顿法 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60b1a651b9564561edd4d4a2aa5d86d0.svg) 不是正定的二次型，则可以在局部近似为正定的二次型，那么则采用多次牛顿法即可到达最小值点。

4. 一维情况下，梯度下降法和牛顿法的原理展示：

   ![newton](https://static.bookstack.cn/projects/huaxiaozhuan-ai/85be33ecba9f5eb637bd37c4d86398d2.jpeg)

   - 梯度下降法：下一次迭代的点 ![四、牛顿法 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/188d71323c919c2b273084c517218f3a.svg)。

     对于一维的情况，可以固定 ![四、牛顿法 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8ebc0f7156d02a58234de09a1f2b3b7c.svg) 。由于随着迭代的推进，![四、牛顿法 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f79de0e5ceff9c75215dae7bfe2bfa42.svg) 绝对值是减小的（直到0），因此越靠近极值点，![四、牛顿法 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6a17bf7621a752872e635643df475f42.svg) 越小。

   - 牛顿法：目标是 ![四、牛顿法 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1088fb0f330b54d8c7f4333833e0b53c.svg)。

     在一维情况下就是求解 ![四、牛顿法 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/44ba9a707f90d6d23d0d671378f0a94c.svg)。牛顿法的方法是：以 ![四、牛顿法 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ca40eef5be3cdc162fda5a4623724df.svg) 做 ![四、牛顿法 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6c740109aafc486dae6ab7024dd35b92.svg) 切线，该切线过点 ![四、牛顿法 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7fd808d37f8256a0a8181801bedabe15.svg)。该切线在 ![四、牛顿法 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a0192ef7e2aa3d3e0e48bdd2906a0f40.svg) 轴上的交点就是： ![四、牛顿法 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7ff12cc5432f16693555c001bb708b48.svg) 。

     推广到多维情况下就是：![四、牛顿法 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3e4ac8a2c935d3e82059198e5c3b2274.svg) 。

5. 当位于一个极小值点附近时，牛顿法比梯度下降法能更快地到达极小值点。

   如果在一个鞍点附近，牛顿法效果很差，因为牛顿法会主动跳入鞍点。而梯度下降法此时效果较好（除非负梯度的方向刚好指向了鞍点）。

6. 仅仅利用了梯度的优化算法（如梯度下降法）称作一阶优化算法，同时利用了海森矩阵的优化算法（如牛顿法）称作二阶优化算法。

7. 牛顿法算法：

   - 输入：
     - 目标函数 ![四、牛顿法 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg)
     - 梯度 ![四、牛顿法 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3449263623ad5692edc80706175f5da.svg)
     - 海森矩阵 ![四、牛顿法 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/403a595090b916c507057ccaecf5ba14.svg)
     - 精度要求 ![四、牛顿法 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/050d005f9436c23262d6c9f27620e71f.svg)
   - 输出： ![四、牛顿法 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/20a5de94ddb5187eecfad8d7d2f3b39f.svg) 的极小值点 ![四、牛顿法 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/357c2bc6fc0b242315f49ef85b5af80e.svg)
   - 算法步骤：
     - 选取初始值 ![四、牛顿法 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bfcb8ca9b89f46d88ff3f578ff54681a.svg), 置 ![四、牛顿法 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c8d979a4455d4486c53896f78b27aa8.svg) 。
     - 迭代，停止条件为：梯度收敛。迭代步骤为：
       - 计算 ![四、牛顿法 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1159a2396353dab70d4ca5fbc20186b2.svg) 。
       - 若 ![四、牛顿法 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/021c99f3846a5db31cb7f2ffe12663e2.svg)， 则停止计算，得到近似解 ![四、牛顿法 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f524dcd6c503f416e32cb9764c353a42.svg) 。
       - 若 ![四、牛顿法 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d5ffcaada57bed21313f90be3165f696.svg)， 则：
         - 计算 ![四、牛顿法 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/701231108c9d0fbe2f563715658168ea.svg)，并求 ![四、牛顿法 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7903df66d510fc7bdb89d8cdffc1407c.svg)，使得：![四、牛顿法 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/911446f5814f8b40fc9673546e32560b.svg) 。
         - 置 ![四、牛顿法 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d6a8d09fb9aae2ed95290948fa4fb923.svg) 。
         - 置 ![四、牛顿法 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/02fe1f48ca7175d0446ebbae4ebde287.svg) ，继续迭代。

8. 梯度下降法中，每一次 ![四、牛顿法 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 增加的方向一定是梯度相反的方向 ![四、牛顿法 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/99506380316c5bbccfc89d52697e63e1.svg) 。增加的幅度由 ![四、牛顿法 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b943461f7a53c2d93e949393b4027a77.svg) 决定，若跨度过大容易引发震荡。

   而牛顿法中，每一次 ![四、牛顿法 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/86dcd33cfec6b67f675de857c11dea1a.svg) 增加的方向是梯度增速最大的反方向 ![四、牛顿法 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ae6960616eac2440b565fabe2a941a3d.svg)（它通常情况下与梯度不共线）。增加的幅度已经包含在 ![四、牛顿法 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/03e06ab9bf90599c3e32beafa16b0878.svg) 中（也可以乘以学习率作为幅度的系数）。

   ![gradient_descent_newton](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6ae7434c4c639acac86943b94f55dd40.png)

9. 深度学习中的目标函数非常复杂，无法保证可以通过上述优化算法进行优化。因此有时会限定目标函数具有`Lipschitz`连续，或者其导数`Lipschitz`连续。

   - `Lipschitz`连续的定义：对于函数 ![四、牛顿法 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60b1a651b9564561edd4d4a2aa5d86d0.svg)，存在一个`Lipschitz`常数 ![四、牛顿法 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9b59e5e22dc8de1d5b55d7f355ab3bdf.svg)，使得：

   ![四、牛顿法 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/18fb864d3cffd81898bc2847f40d9ba8.svg)

   - `Lipschitz`连续的意义是：输入的一个很小的变化，会引起输出的一个很小的变化。

     > 与之相反的是：输入的一个很小的变化，会引起输出的一个很大的变化

10. 凸优化在某些特殊的领域取得了巨大的成功。但是在深度学习中，大多数优化问题都难以用凸优化来描述。

    凸优化的重要性在深度学习中大大降低。凸优化仅仅作为一些深度学习算法的子程序。