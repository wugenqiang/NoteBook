# 第二章 支持向量机

> 没有免费午餐定理告诉我们，没有普适的、放之四海而皆准的算法，但是人们在长期的研究和实践中，能总结出能适应大多数应用场景、相对好的算法。

下面从最著名的机器学习算法之一：支持向量机，开始学习。

支持向量机，由俄罗斯统计学家、数学家 `Vladimir Vapnik` 在 1995 年发表和创造的。在 20 世纪 70 年代，他就已经完成了支持向量机的主要理论框架。

![image-20200622180024570](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622180025.png)

在介绍支持向量机之前，先介绍两个基础概念：

* （1）线性可分：Linear Separable

  * 举例一：特征空间为二维

    ![image-20200622180507116](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622180508.png)

  * 举例二：特征空间为三维

    ![image-20200622180905622](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622180906.png)

* （2）线性不可分：Nonlinear Separable 

  * 举例一：特征空间为二维

    ![image-20200622180531609](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622180532.png)

  * 举例二：特征空间为三维

    ![image-20200622180924800](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622180925.png)



!> 当特征空间维度 $\geq$ 四维时，将会变为**超平面**（`Hyperplane`）划分。由于人眼对空间的感知仅仅局限于三维，所以我们无法直观的画出一张图，在四维及四维以上的情况下说明线性可分和线性不可分。此时我们必须要借助`数学`对线性可分和线性不可分给出一个精确的定义。

特征空间是二维的情况下，线性可分：

![image-20200622182027191](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622182028.png)

用数学严格定义训练样本以及他们的标签。

假设：我们有 N 个训练样本和他们的标签：

![image-20200622182417848](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622182418.png)



## 2.1 线性可分定义

> 下面用数学严格定义线性可分：

线性可分的严格定义：

![image-20200623164126751](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623164137.png)

![image-20200623164201315](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623164202.png)

用`向量形式`来定义线性可分：

![image-20200623164404442](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623164405.png)

线性可分定义的**最简化形式**：

![image-20200623164712169](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623164713.png)

> ✏️ 思考题：

（1）给出实际生活中，**训练样本集**是线性可分和线性不可分的例子？



## 2.2 问题描述

 `Vladimir Vapnik`  提出的支持向量机算法分成两个步骤：

* 第一步：解决线性可分问题
* 第二步：再将线性可分问题中获得的结论推广到线性不可分情况

**如何解决线性可分问题**

 `Vladimir Vapnik`  提出问题：在这无数多个分开各个类别的超平面中，到底哪一个最好呢？

二维特征空间中的`二分类`问题

![image-20200623170226284](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623170227.png)

哪一条是最好的呢？大部分人会认为第 2 条线最好，实际上是对训练样本先验分布有一定假设，这个假设是什么呢？例如：假设训练样本的位置在特征空间上有测量误差。

![image-20200623170545869](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623170547.png)

相比较于 1 和 3 号线，2 号线更能抵御训练样本位置的误差。

那么，有人会问，2 号线是如何画出来的呢？**基于最优化理论**，将寻找 2 号线的过程，变成一个最优化问题。

![image-20200623171011487](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623171012.png)

![image-20200623171030142](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623171031.png)

注：这条要找的线，在上下两条平行线的正中间！

所以，在线性可分情况下，支持向量机寻找的最优分类直线应满足以下条件：

* （1）该直线分开了两个类
* （2）该直线最大化**间隔**（`margin`）
* （3）该直线处于间隔的中间，到所有支持向量距离相等

!> 注：上述的讨论，是基于二维特征空间的结果，但是在高维空间中，以上结论却是一致的！

> ✏️ 思考题：

证明：在线性可分条件下，有且只有唯一一条直线，满足上面三个条件。

## 2.3 优化问题

**最优分类超平面应该满足：**

* （1）该超平面分开了两类
* （2）该超平面有最大化间隔
* （3）该超平面处于间隔的中间，到所有支持向量距离相等

![image-20200703225104307](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703225105.png)

假定训练样本集是线性可分的，支持向量机需要寻找的是最大化间隔（Margin）的超平面。

![image-20200703230203084](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230204.png)

![image-20200703225403742](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703225404.png)

![image-20200703230105928](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230106.png)

注意：

* 事实一：

![image-20200703230307554](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230308.png)

* 事实二：

![image-20200703230417455](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230418.png)

**说明：**在二维的情况下，点到超平面的距离公式：

![image-20200703230623502](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230624.png)

🍨 支持向量机优化问题推导中最难理解的部分：

用 α 去缩放 ω b

![image-20200703230935337](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703230936.png)

（ω, b） 表示的超平面和（αω, αb）表示的超平面是同一个平面，因此可以用参数 α 去缩放（ω, b） ，使满足上述条件。

根据**事实二**，支持向量 $X_0$ 到超平面的距离将会变为：

![image-20200703231513223](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703231514.png)

因此，最大化支持向量到超平面的距离，等价于最小化 $\| ω \|$

所以，我们把优化问题的目标函数定为：

最小化：$\dfrac{1}{2}\|ω\|^2 \qquad$ 最小化：$\|ω\|$

两者是完全一样的，因为后续的求导会更方便！

**限制条件：**

* （1）支持向量到超平面的距离为：$\dfrac{1}{2}\|\epsilon \|$

* （2）在非支持向量上 $|ω^T+b|>1$

综合两者，限制条件可表述为：$y_i({ω^T}x_i+b)\geq 1 \quad i = 1 \sim N$ 其中 $y_i$ 的作用是协调超平面的左右，让一边 $（ω^Tx+b）>1$，而让另一边 $（ω^Tx+b）< 1$

!> 值得注意的是，上面的 `1` 可以改为任意正数，例如：

![image-20200703233511706](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703233512.png)

但是代表的是同一个平面！

> 🔊 总结一下：

线性可分情况下，支持向量机寻找最佳超平面的优化问题可以表示为：

![image-20200703225403742](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703225404.png)

$（x_i, y_i）,i=1 \sim N $ 是已知的，$（ω, b）$ 是待求的。

👕 我们可以看到，这是**凸优化**（`CONVEX OPTIMIZATION`）中的二次规划问题。

**二次规划的定义：**

* （1）目标函数（`Objective Function`）是二次项
* （2）限制条件是一次项

【说明】目标函数：$\dfrac{1}{2}\|ω\|^2 \qquad$ 限制条件：$y_i({ω^T}x_i+b)\geq 1 \quad i = 1 \sim N$

![image-20200703234922103](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703234923.png)

这样的凸优化问题，要么无解，要么只有唯一的最小值。

🧪 在最优化的理论当中，如果一个问题是**凸优化问题**，我们就把它当成是一个已经解决的问题，因为`凸优化问题只有唯一一个全局极值`，我们可以利用梯度下降的算法，能够很方便的求出它的解。

👓 举例（凸优化问题）：

![image-20200703235527358](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703235528.png)

![image-20200703235729120](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703235730.png)

> 用凸优化解出的支持向量机最佳分类超平面的例子：

![image-20200703235919951](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703235920.png)

## 2.4 线性不可分情况

在线性不可分的情况下，以上的最优化问题是**无解**的！

![image-20200717210923297](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717210924.png)

通过放松限制条件，使得最优化问题有解！

> 放松限制条件的基本思路是：对每个训练样本及标签 $(X_i,Y_i)$，我们需要设置一个松弛变量 ${\delta}_i$ (slack variable)

限制条件改写为：$y_i({ω^T}x_i+b)\geq 1 - {\delta}_i  \quad i = 1 \sim N$

🎉 经改造后的支持向量机优化版本：

![image-20200717212130407](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717212131.png)

`比例因子 C`起到了平衡 ω 和 ${\delta}_i$ 两项的作用，平衡两项的比例因子 C 是人为设定的，我们把人为实现设定的参数叫做**算法的超参数（Hyper Parameter）**，我们会在实际的应用当中不断的变化 C 的值，同时对于每个 C，我们要不断测试算法的识别率！然后选取使得识别率达到最高的超参数 C 的值。

![image-20200717213538973](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717213540.png)

!> 这是凸优化问题，都可以被高效的求解！

👒 支持向量机是超参数很少的算法模型。

👒 超参数很多的算法模型举例：人工神经网络、卷积神经网络等等。

（**举例**）在线性不可分情况下应用支持向量机：

![image-20200717214041673](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717214042.png)

使得超平面和线性可分情况保持基本一致。

分类面的展示：

![image-20200717214317035](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717214318.png)

未达到求解目的！分错了将近一半的训练样本，和瞎猜没有区别！那么，问题出在哪里呢？

* 问题出在我们假设分开两类的函数是线性的！但是，线性模型的表现力是不够的！
* 所以要扩大可选的函数范围！使它超越线性，以应对复杂的线性不可分情况！

下面来详细说说：支持向量机是如何扩大可选函数范围，提高非线性可分的处理能力！

## 2.5 低维到高维的映射

人工神经网络、决策树，采用的是直接产生更多可选函数的方式，例如：在人工神经网络中，通过多层非线性函数的组合，能够产生类似于椭圆这样的曲线，从而分开下图中 ○ 和 × ：

![image-20200717215433900](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717215434.png)

但是支持向量机不是直接产生这样的函数，而是通过将特征空间由低维映射到高维，然后在高维的特征空间中依然用**线性超平面**对数据进行分类！

![image-20200717215802526](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717215803.png)

> 考查如图的异或问题：

![image-20200717220337424](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200717220338.png)

> 这是一个在低维的特征空间中线性不可分，在映射到高维的特征空间后线性可分的例子

