# 第 2 章 梯度下降法

1. 梯度下降法是求解无约束最优化问题的一种常见方法，优点是实现简单。

2. 对于函数： ![二、梯度下降法 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225213.svg)，假设输入 ![二、梯度下降法 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225218.svg)，则定义梯度：

   ![二、梯度下降法 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225223.svg)

   函数的驻点满足： ![二、梯度下降法 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225228.svg) 。

3. 沿着方向 ![二、梯度下降法 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225242.svg) 的方向导数`directional derivative`定义为：

   ![二、梯度下降法 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225246.svg)

   其中 ![二、梯度下降法 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225258.svg) 为单位向量。

   方向导数就是 ![二、梯度下降法 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225301.svg)。根据链式法则，它也等于 ![二、梯度下降法 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225304.svg) 。

1. 为了最小化 ![二、梯度下降法 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225308.svg)，则寻找一个方向：沿着该方向，函数值减少的速度最快（换句话说，就是增加最慢）。即：

   ![二、梯度下降法 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225321.svg)

   假设 ![二、梯度下降法 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225325.svg) 与梯度的夹角为 ![二、梯度下降法 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225328.svg)，则目标函数等于：![二、梯度下降法 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225330.svg) 。

   考虑到 ![二、梯度下降法 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225333.svg)，以及梯度的大小与 ![二、梯度下降法 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225337.svg) 无关，于是上述问题转化为：

   ![二、梯度下降法 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225340.svg)

   于是： ![二、梯度下降法 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225343.svg)，即 ![二、梯度下降法 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225349.svg) 沿着梯度的相反的方向。即：梯度的方向是函数值增加最快的方向，梯度的相反方向是函数值减小的最快的方向。

   因此：可以沿着负梯度的方向来降低 ![二、梯度下降法 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225354.svg) 的值，这就是梯度下降法。

2. 根据梯度下降法，为了寻找 ![二、梯度下降法 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225358.svg) 的最小点，迭代过程为：![二、梯度下降法 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225401.svg) 。其中：![二、梯度下降法 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225406.svg) 为学习率，它是一个正数，决定了迭代的步长。

   迭代结束条件为：梯度向量 ![二、梯度下降法 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225410.svg) 的每个成分为零或者非常接近零。

3. 选择学习率有多种方法：

   - 一种方法是：选择 ![二、梯度下降法 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225416.svg) 为一个小的、正的常数。

   - 另一种方法是：给定多个 ![二、梯度下降法 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225424.svg)，然后选择使得 ![二、梯度下降法 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225427.svg) 最小的那个值作为本次迭代的学习率（即：选择一个使得目标函数下降最大的学习率）。

     这种做法叫做线性搜索`line search` 。

   - 第三种方法是：求得使 ![二、梯度下降法 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225432.svg) 取极小值的 ![二、梯度下降法 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225436.svg)，即求解最优化问题：

     ![二、梯度下降法 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225438.svg)

     这种方法也称作最速下降法。

     - 在最速下降法中，假设相邻的三个迭代点分别为： ![二、梯度下降法 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225442.svg)，可以证明： ![二、梯度下降法 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225445.svg)。即相邻的两次搜索的方向是正交的！

       证明：

       ![二、梯度下降法 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225449.svg)

       根据最优化问题，有：

       ![二、梯度下降法 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225452.svg)

       将 ![二、梯度下降法 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225457.svg) 代入，有：

       ![二、梯度下降法 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225503.svg)

       为求 ![二、梯度下降法 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225506.svg) 极小值，则求解： ![二、梯度下降法 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225509.svg) 。

       根据链式法则：

       ![二、梯度下降法 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225513.svg)

       即：![二、梯度下降法 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225516.svg) 。则有：![二、梯度下降法 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225522.svg) 。

     - 此时迭代的路线是锯齿形的，因此收敛速度较慢。

4. 某些情况下如果梯度向量 ![二、梯度下降法 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225526.svg) 的形式比较简单，则可以直接求解方程：![二、梯度下降法 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225530.svg) 。

   此时不用任何迭代，直接获得解析解。

5. 梯度下降算法：

   - 输入：

     - 目标函数 ![二、梯度下降法 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225533.svg)
     - 梯度函数 ![二、梯度下降法 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225536.svg)
     - 计算精度 ![二、梯度下降法 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225539.svg)

   - 输出： ![二、梯度下降法 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225543.svg) 的极小点 ![二、梯度下降法 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225545.svg)

   - 算法步骤：

     - 选取初始值 ![二、梯度下降法 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225550.svg)，置 ![二、梯度下降法 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225553.svg) 。

     - 迭代，停止条件为：梯度收敛或者目标函数收敛。迭代步骤为：

       - 计算目标函数 ![二、梯度下降法 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225600.svg)，计算梯度 ![二、梯度下降法 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225604.svg) 。

       - 若梯度 ![二、梯度下降法 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225607.svg)，则停止迭代，![二、梯度下降法 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225610.svg) 。

       - 若梯度 ![二、梯度下降法 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225613.svg)，则令 ![二、梯度下降法 - 图56](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225616.svg)，求 ![二、梯度下降法 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225621.svg) ： ![二、梯度下降法 - 图58](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225624.svg) 。

         > 通常这也是个最小化问题。但是可以给定一系列的![二、梯度下降法 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225628.svg)的值，如：`[10,1,0.1,0.01,0.001,0.0001]` 。然后从中挑选使得目标函数最小的那个。

       - 令 ![二、梯度下降法 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225631.svg)，计算 ![二、梯度下降法 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225637.svg) 。

         - 若 ![二、梯度下降法 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225639.svg)或者 ![二、梯度下降法 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225643.svg) 时，停止迭代，此时 ![二、梯度下降法 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225647.svg) 。
         - 否则，令 ![二、梯度下降法 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225652.svg) ，计算梯度 ![二、梯度下降法 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225650.svg) 继续迭代。

     ![gradient_descent](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619225656.png)

6. 当目标函数是凸函数时，梯度下降法的解是全局最优的。通常情况下，梯度下降法的解不保证是全局最优的。

7. 梯度下降法的收敛速度未必是最快的。