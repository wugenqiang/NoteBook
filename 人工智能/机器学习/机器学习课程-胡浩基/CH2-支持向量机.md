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



