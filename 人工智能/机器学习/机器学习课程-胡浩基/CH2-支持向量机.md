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