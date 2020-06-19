# 第 1 章 基本知识

## 1.1 向量形式

> 本人在实际使用时，所有的向量尽量使用列向量的形式，如下：

$$
\vec{\mathbf{x}}=(x_1,x_2,\ldots,x_n)^T=
\begin{bmatrix}
x_1\\
x_2\\
\vdots\\
x_n
\end{bmatrix}
$$

## 1.2 矩阵表示

> 所有的矩阵 $\mathbf{X} \in \mathbb{R}^{m \times n}$ 都表示为：

$$
\mathbf{X}=\begin{bmatrix}
x_{1,1} & x_{1,2} & \ldots & x_{1,n}\\
x_{2,1} & x_{2,2} & \ldots & x_{2,n}\\
\vdots & \vdots & \ddots & \vdots\\
x_{m,1} & x_{m,2} & \ldots & x_{m,n}
\end{bmatrix}
$$

简写为：$(x_{i,j})_{m \times n}$ 或者 ${\begin{bmatrix}{x_{i,j}}
\end{bmatrix}}_{m \times n}$

## 1.3 矩阵的 F 范式

定义：设矩阵 ![一、基本知识 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111047.svg)，则其`F` 范数为：![一、基本知识 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111053.svg) 。

它是向量的 ![一、基本知识 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111058.svg) 范数的推广。



## 1.4 矩阵的迹

定义：设矩阵 ![一、基本知识 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111357.svg)，则![一、基本知识 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111501.svg)的迹为： ![一、基本知识 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111458.svg)。

迹的性质有：

- ![一、基本知识 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111723.svg) 的`F` 范数等于![一、基本知识 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111725.svg) 的迹的平方根：![一、基本知识 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111728.svg) 。
- ![一、基本知识 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111731.svg) 的迹等于![一、基本知识 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111734.svg) 的迹：![一、基本知识 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111738.svg) 。
- 交换律：假设 ![一、基本知识 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111742.svg)，则有：![一、基本知识 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111746.svg) 。
- 结合律：![一、基本知识 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619111804.svg) 。