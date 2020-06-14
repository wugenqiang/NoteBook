# 第 1 讲 元素和极限

## 1.1 实数的定义

如何进行实数定义，要引入一个概念：`戴德金分划`

首先，什么是分划呢？

![image-20200612221729457](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612221749.png)



戴德金分划：

![image-20200612222235258](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612222236.png)

![image-20200612225044963](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612225045.png)



实数的定义：

![image-20200612224704994](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612224707.png)



①② 为有理分划，③ 为无理分划

我们希望实数具有的性质是：

* （1）稠密性（不可有其他分法）
* （2）有序性（可以比大小）

![image-20200612225718814](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612225720.png)

![image-20200612225814914](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612225816.png)

引理一：**单调有界序列存在极限**

## 1.2 实数的元素个数

势：集合元素的个数

![image-20200612230628942](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612230630.png)

> 自然数个数和整数个数`等势`

![image-20200612231025368](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200612231026.png)



> 不能通过包含关系来判断是否等势

**希尔伯特旅馆**

![image-20200613084000036](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613084001.png)

【证明】整数个数与有理数个数相同

寻找一一对应的关系：$\dfrac{q}{p}$

![image-20200613084956933](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613084958.png)

使用到公式：|p| + |q| = k，k = 1，2，3，4...

![image-20200613085205666](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613085206.png)

> **可列 / 可数**

## 1.3 自然数个数少于实数个数

【证明】自然数个数少于实数个数

反证法：

![image-20200613090334237](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613090335.png)

（1）先将 R 与 （0, 1）实数对应

第一种对应关系方案：

![image-20200613090140061](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613090142.png)

第二种对应关系方案：

![image-20200613090309774](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613090311.png)

（2）再将 N 与 （0, 1）实数对应

![image-20200613091720585](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613091721.png)

!> 存在逻辑错误，找出即说明反命题错误

![image-20200613091146559](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613091147.png)

![image-20200613091448640](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613091449.png)

![image-20200613091833692](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613091834.png)

> 可数与不可数

![image-20200613091936235](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613091938.png)当然也存在下面情况，或者更多：

![image-20200613092104359](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613092105.png)

举例：

![image-20200613092120417](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613092121.png)

## 1.4 无穷小的比较

![image-20200613092825080](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613092826.png)

【证明】求证：${\lim \limits_{n \to \infty} \dfrac{n^{a_2}}{a^n_3} = 0}$

![image-20200613093913221](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613093914.png)

![image-20200613094131284](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613094132.png)

![image-20200613094411618](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613094412.png)

所以：${\lim \limits_{n \to \infty} \dfrac{n^{a_2}}{a^n_3} = 0}$ 得证。

【证明】求证：${a^n_3}<n!\quad(a_3>1)$

![image-20200613095543898](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613095545.png)

> 引入概念：Stirling 近似

$$
n!\approx\sqrt{2{\pi}n}(\dfrac{n}{e})^n
$$

!> 注：当 $n\approx10$ 时，误差小于 $\dfrac{1}{10^6}$

![image-20200613201145696](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201146.png)

## 1.5 级数的收敛

复习级数的收敛：

![image-20200613200058290](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613200059.png)

【证明】当 a > 1 时，$\dfrac{1}{n^a}$ 收敛。

![image-20200613200924478](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613200925.png)

![image-20200613201103844](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201104.png)

> 级数收敛的分界线

![image-20200613201450947](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201452.png)

![image-20200613201524778](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201525.png)

## 1.6 极限的定义

![image-20200613201838443](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201839.png)

序列极限 / 函数极限

![image-20200613201955520](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613201956.png)

**想要任意近，只要足够近！**



![image-20200613202611829](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613202613.png)

![image-20200613202727551](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613202728.png)

## 1.7 极限的四则运算

【证明】${\lim \limits_{x \to 3} x^2 = 9}$

![image-20200613203815380](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613203816.png)

![image-20200613204133180](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613204134.png)

![image-20200613204236217](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613204237.png)

## 1.8 极限的复合

![image-20200613204626100](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613204627.png)

![image-20200613204905956](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613204907.png)

![image-20200613204953725](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613204955.png)

## 1.9 连续性

![image-20200613205250591](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613205251.png)

【证明】

![image-20200613205527263](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200613205528.png)