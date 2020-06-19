# 第 1 章 数值稳定性

1. 在计算机中执行数学运算需要使用有限的比特位来表达`实数`，这会`引入近似误差`。

   近似误差可以在多步数值运算中传递、积累，从而导致理论上成功的算法失败。因此数值算法设计时要考虑将累计误差最小化。

2. 当从头开始实现一个数值算法时，需要考虑数值稳定性。当使用现有的数值计算库（如`tensorflow` ）时，不需要考虑数值稳定性。

## 1.1 上溢出、下溢出

1. 一种严重的误差是下溢出`underflow`：当接近零的数字四舍五入为零时，发生下溢出。

   许多函数在参数为零和参数为一个非常小的正数时，行为是不同的。如：对数函数要求自变量大于零，除法中要求除数非零。

2. 一种严重的误差是上溢出`overflow`：当数值非常大，超过了计算机的表示范围时，发生上溢出。

3. 一个数值稳定性的例子是`softmax`函数。

   设 ![一、数值稳定性 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224309.svg)，则`softmax`函数定义为：

   ![一、数值稳定性 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224315.svg)

   当所有的 ![一、数值稳定性 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224318.svg) 都等于常数 ![一、数值稳定性 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224322.svg) 时，`softmax`函数的每个分量的理论值都为 ![一、数值稳定性 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224326.svg) 。

   - 考虑 ![一、数值稳定性 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224329.svg) 是一个非常大的负数（比如趋近负无穷），此时 ![一、数值稳定性 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224333.svg) 下溢出。此时 ![一、数值稳定性 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224336.svg) 分母为零，结果未定义。
   - 考虑 ![一、数值稳定性 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224342.svg) 是一个非常大的正数（比如趋近正无穷），此时 ![一、数值稳定性 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224346.svg) 上溢出。 ![一、数值稳定性 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224349.svg) 的结果未定义。

4. 为了解决`softmax`函数的数值稳定性问题，令 ![一、数值稳定性 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224353.svg)，则有 ![一、数值稳定性 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224356.svg) 的第 ![一、数值稳定性 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224359.svg) 个分量为：

   ![一、数值稳定性 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224403.svg)

   - 当 ![一、数值稳定性 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224409.svg) 的分量较小时， ![一、数值稳定性 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224412.svg) 的分量至少有一个为零，从而导致 ![一、数值稳定性 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224415.svg) 的分母至少有一项为 1，从而解决了下溢出的问题。
   - 当 ![一、数值稳定性 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224420.svg) 的分量较大时，![一、数值稳定性 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224423.svg) 相当于分子分母同时除以一个非常大的数 ![一、数值稳定性 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224427.svg) ，从而解决了上溢出。

5. 当 ![一、数值稳定性 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224431.svg) 的分量 ![一、数值稳定性 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224434.svg) 较小时， ![一、数值稳定性 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224437.svg) 的计算结果可能为 0 。此时 ![一、数值稳定性 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224440.svg) 趋向于负无穷，因此存在数值稳定性问题。

   - 通常需要设计专门的函数来计算 ![一、数值稳定性 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224445.svg) ，而不是将 ![一、数值稳定性 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224449.svg) 的结果传递给 ![一、数值稳定性 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224451.svg) 函数。
   - ![一、数值稳定性 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224455.svg) 函数应用非常广泛。通常将 ![一、数值稳定性 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224459.svg) 函数的输出作为模型的输出。由于一般使用样本的交叉熵作为目标函数，因此需要用到 ![一、数值稳定性 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224504.svg) 输出的对数。

6. `softmax` 名字的来源是`hardmax`。

   - `hardmax` 把一个向量 ![一、数值稳定性 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224512.svg) 映射成向量 ![一、数值稳定性 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224516.svg) 。即：![一、数值稳定性 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224518.svg) 最大元素的位置填充`1`，其它位置填充`0`。
   - `softmax` 会在这些位置填充`0.0~1.0` 之间的值（如：某个概率值）。

## 1.2 Conditioning

1. `Conditioning`刻画了一个函数的如下特性：当函数的输入发生了微小的变化时，函数的输出的变化有多大。

   对于`Conditioning`较大的函数，在数值计算中可能有问题。因为函数输入的舍入误差可能导致函数输出的较大变化。

2. 对于方阵 ![一、数值稳定性 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224525.svg) ，其条件数`condition number`为：

   ![一、数值稳定性 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224528.svg)

   其中 ![一、数值稳定性 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224532.svg) 为 ![一、数值稳定性 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224535.svg) 的特征值。

   - 方阵的条件数就是最大的特征值除以最小的特征值。
   - 当方阵的条件数很大时，矩阵的求逆将对误差特别敏感（即： ![一、数值稳定性 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619224539.svg) 的一个很小的扰动，将导致其逆矩阵一个非常明显的变化）。
   - 条件数是矩阵本身的特性，它会放大那些包含矩阵求逆运算过程中的误差。