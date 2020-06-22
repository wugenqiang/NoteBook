# 第一章 引言

## 1.1 机器学习定义

> 英语释义：Machine Learning

### ①  第一个定义

学习之前，我们要了解一个人物： `ARTHUR SAMUEL` ：机器学习领域的先驱之一，他编写了世界上第一个棋类游戏的人工智能程序。

1959 年 `ARTHUR SAMUEL` 给出的定义：

![image-20200621182212199](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621182214.png)

但是，有人不禁会问，什么是**显著式编程**呢？通俗的来讲，有人为参与的编程就是显著式编程。

让计算机自己总结规律的编程方法，就叫做**非显著式编程**。

 `ARTHUR SAMUEL` 所定义的机器学习，是专指这种非显著式编程的方式。

!> 显著式编程有很大的`劣势`：

* 要机器人把它所处的环境调查得一清二楚。

![image-20200621185631253](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621185632.png)

**以取咖啡为例，非显著式编程下机器人怎么做：**

![image-20200621184657839](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621184658.png)

规定：

![image-20200621184748677](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621184749.png)

![image-20200621184819179](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621184820.png)

当我们规定了`行为`和`收益函数`后，让计算机自己去找**最大化收益函数**的行为。

* 一开始，计算机采用**随机化**的行为；
* 只要我们的程序编的足够好，计算机是可能找到一个**最大化收益函数**的行为模式的。

!> 非显著式编程的`优势`：

![image-20200621185728913](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621185730.png)



### ② 第二个定义

1998 年 `Tom Mitshell` 写了下面这本书，该书被公认为是第一本成熟的教科书。

![image-20200621190516829](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621190517.png)

该书中给出了机器学习的第二个定义：

![image-20200621190826259](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621190827.png)

![image-20200621190858616](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621190859.png)

**以识别菊花和玫瑰为例：**

![image-20200621190956600](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621190958.png)

我们要了解一个专有名词：识别率：`Recognition Rate`

![image-20200621191324477](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621191325.png)

!> 把识别的正确率简称为**识别率**，将识别率作为性能指标。

![image-20200621191722775](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621191723.png)

> 这种算法的特点是：

![image-20200621191839280](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621191840.png)

这里我们要注意一下，**显著式编程**是无法达到这一目的的。因为显著式编程在一开始就定死了程序的输入和输出。

**以机器人冲咖啡为例：**

![image-20200621193023794](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621193025.png)

> 总结

`TOM MITSHELL` 的定义比 `ARTHUR SAMUEL` 的定义**更加数学化**。

![image-20200621193322329](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621193323.png)

> ✏️ 思考题：

![image-20200621193519301](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621193520.png)



## 1.2 机器学习的分类

首先我们来考虑一个问题，在上面这道思考题中，如何对这四个任务进行分类呢？

这四个任务可以分为两类，（1）（4）和（2）（3）这两类。

划分的标准是什么呢？答案是**经验 E**

在（2）（3）中，所有的经验 E 都是由人工采集并输入进计算机的。我们称之为`监督学习`（Supervised Learning）

例如（2）中：

![image-20200621194459607](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621194500.png)

例如（3）中：

![image-20200621194613804](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621194614.png)

我们把告诉计算机每一个训练样本是什么的过程，称为**为训练数据打标签**（`Labeling for training data`）

所以，![image-20200621195252874](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621195254.png)

值得一提的是，为数据打标签需要繁琐的人工。例如**现代的人脸识别系统**。需要数千万张带有标签的人脸图片，要耗费非常庞大的工作量和时间。

而在（1）（4）中，经验 E 是由`计算机与环境互动`获得的。

计算机产生行为，同时获得这个行为的结果，我们的程序只需要定义这些行为的**收益函数**（Reward function），对行为进行奖励或者惩罚。

例如计算机下棋这个任务中，下赢了就奖励，输了就惩罚。在自动驾驶的任务中，顺利到达目的地就奖励，中途出了事故就惩罚。

同时，我们要设计一定的算法，让计算机自动的改变自己的行为模式去**最大化收益函数**，完成机器学习的过程，我们将这一类学习任务称为**强化学习**（Reinforcement Learning）。

![image-20200621200933983](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621200935.png)

> 总结：按照机器学习的`任务性质`的不同，机器学习算法可以分为`监督学习`和`强化学习`两类。

监督学习和强化学习结合使用的典型例子：`ALPHAGO`

![image-20200621214137944](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621214139.png)

对于`监督学习`，根据数据标签的存在与否，分为三类：

* （1）传统的监督学习（Traditional Supervised Learning）
* （2）非监督学习（Unsupervised Learning）
* （3）半监督学习（Semi-Supervised Learning）

> （1）传统的监督学习（Traditional Supervised Learning）

* 特点：每一个`训练数据`都有对应的`标签`
* 会学习到的算法：
  * 支持向量机（Support Vector Machine）
  * 人工神经网络（Neural Networks）
  * 深度神经网络（Deep Neural Networks）

> （2）非监督学习（Unsupervised Learning）

* 特点：所有`训练数据`都没有对应的`标签`
* 会学习到的算法：
  * 聚类（Clustering）
  * EM 算法（Expectation-Maximization algorithm）
  * 主成分分析（Principle Component Analysis）

举例：

![image-20200621215324036](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621215325.png)

![image-20200621215453678](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621215454.png)

> （3）半监督学习（Semi-Supervised Learning）

* 特点：`训练数据`中一部分`有标签`，一部分`没有标签`

![image-20200621220851038](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621220852.png)

举例：

![image-20200621220910384](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621220911.png)

![image-20200621220938698](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621220940.png)

> 分类问题：人脸识别的任务

![image-20200621221221150](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621221222.png)

> 回归问题：预测房价的走势

![image-20200621221321683](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621221322.png)

![image-20200621221347702](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621221348.png)

!> `分类`和`回归`问题的界限，其实是`非常模糊`的，连续与离散可以相互转换。

![image-20200621221544363](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621221545.png)

## 1.3 机器学习算法的过程

举例：

![image-20200621221919270](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621221920.png)

当我们拿到数据之后，构建机器学习算法的第一步是`观察数据，总结规律`。

如上图，可能被观察到的区别：

* （1）平均来说，白细胞面积比红细胞大
* （2）白细胞没有红细胞圆
* （3）白细胞内部纹理比红细胞粗糙

> 提取纹理特征

机器学习的第一步是：特征提取（Feature Extraction）

`特征提取`的含义：是指通过`训练样本`获得的，对机器学习任务有帮助的`多维度数据`。

在举例的实验中提取特征为：细胞的面积、圆形度、表面粗糙程度。

（1）提取细胞的面积特征的`方法`：

![image-20200621223233867](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621223235.png)

!> 机器学习的重点，不是研究如何提取特征，而是假设在已经提取好特征的前提下，如何构造算法获得更好的性能！

![image-20200621223549986](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621223551.png)

!> 不同的媒质不同的任务，提取特征的方式千变万化！假设已经获得特征的前提下，研究合理的算法，学习系统获得较好的性能！

在提取特征这一步做完之后，下一步是对特征进行取舍，我们称之为`特征选择`（Feature Selection）

![image-20200621224053606](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621224055.png)

![image-20200621224515636](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621224516.png)

根据上图的区分度情况来看，选择`面积`和`周长`作为区分白细胞和红细胞的特征，来构建机器学习系统。

![image-20200621224627626](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621224628.png)

如何基于这两个特征构建算法呢？（⭐）

在这个示例中，采用支持向量机（Support Vector Machine）算法，使用到了支持向量机的三种内核：

* 线性内核
* 多项式核
* 高斯径向基函数核

![image-20200621225340284](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621225341.png)

> 学习一下：维度和标准

* 维度：特征空间是二维的，人眼对于超过三维的世界缺乏想象力
* 标准：对某一些区域的划分是不一样的，所以我们不能得出一个绝对意义上的好和坏的标准

如何针对不同应用场景选择合适的机器学习算法？构造新的机器学习算法来解决目前无法解决的应用场景，以后慢慢学习。



> 训练库准确率的比较：

![image-20200621230343688](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621230344.png)

> 测试结果图像：

![image-20200621230409831](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200621230411.png)

> 总结：

* 机器学习算法的流程：（1）特征提取和特征选择（2）不同的算法对特征空间做不同的划分（3）获得不同的结果

## 1.4 没有免费午餐定理

1995 年，`D.H. Wolpert` 等人提出**没有免费午餐定理**（`No Free Lunch Theorem`）：任何一个预测函数，如果在一些训练样本上表现好，那么必然在另一些训练样本上表现不好，如果不对数据在特征空间的先验分布有一定假设，那么表现好与表现不好的情况一样多。

![image-20200622113022724](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622113023.png)

因此，**没有任何情况下都表现最好的机器学习算法**。

举例：预测另一个存储单元的位置是 `○` 还是 `×`？

![image-20200622103504052](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622103513.png)

这种预测有以下两种情况：

![image-20200622103551875](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622103553.png)

如果不对数据在特征空间的先验分布有一定假设，那么，这两种情况的概率相同。

但是，计算机的存储单元不止两个呀，假设一台计算机有三个存储单元，我们用![image-20200622105820497](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622105821.png)假设存储单元的位置如图所示：

![image-20200622110522255](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622110523.png)

然后预测其余两个位置是 `○` 还是 `×`，有四种可能，如下：

![image-20200622110838705](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622110839.png)

所以，`推理`得到，无论计算机的存储单元有多少，无论我们知道多少个类别，`结果不论对错`的概率都是`一半`，原因是什么？

没错，就是**假设各种情况的先验概率一样**了，假设有问题。

如果计算机的存储空间是 6 × 6 的格子：

![image-20200622111522622](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622111523.png)

我们来预测红框内是 `○` 还是 `×`？根据格子中的图形分布情况，大部分人会做出如下预测：

![image-20200622111739052](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622111740.png)

其实，目前流行的所有的机器学习算法都会和大家做出同样的预测。

**原因如下：**

在设计**机器学习算法**的时候有一个假设：在特征空间上距离接近的样本，他们属于同一个类别的概率会更高。

不禁有人会问：这个假设有道理吗？

首先我们应知道，道理是从以前的事实中来的，人可以通过`类比`推广到对未来的`预测`。

是否会预测出错呢？答案显然是很有可能。

!> 注意点一：机器学习的本质

![image-20200622113128704](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622113129.png)

!> 注意点二：再好的算法也存在**犯错的风险**

## 1.5 编程训练

> 学习完这门课程之后，我们可以做什么？

* （1）人脸识别，使用 Training Dataset：`CASIA WebFace Database Evaluating Dataset`

* （2）人脸性别和年龄估计，使用 Database：`IMDB Database`

* （3）五子棋对战程序

  ![image-20200622114259600](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200622114300.png)

* （4）水果识别

* （5）人脸特征点检测

* （6）语种识别

* （7）视频行为识别

* （8）...

# ✍ Quiz（测验）

## ① 第 1 题

【题目】举出其他监督学习、无监督学习、强化学习的例子

【解答】

* 监督学习：有特征和标签的训练数据，即给定数据，预测标签，例如：人脸识别、指纹识别、天气预测、动作识别、障碍物识别、目标检测等
* 无监督学习： 只有特征，没有标签，即给定数据，寻找隐藏的结构和信息，进行分类，例如：用户归类、在多组图片中判断哪些照片是小狗、社交网络分析、客户分类、性别分类、主成分分析等
* 强化学习： 包括智能体、环境状态、行动和回报函数四个概念，本质上是智能体作出一系列行动，并得到环境的及时反馈，智能体不断调整行动实现最优的决策。换句话说就是不需要给计算机指示，只需要编写一个算法，让计算机通过`自己的学习`和`经验`去获取`最大收益值`从而自行完成某些任务。例如：扫地机器人、无人驾驶、机器翻译、机器人送快递、机器人送外卖、游戏 AI、路径规划、阿法狗下围棋、语音识别等



## ② 第 2 题

【题目】说一下非显著式编程的优势

【解答】

非显著式编程是让计算机自己总结规律的编程方法，让计算机通过数据、经验自动学习。我们规定了行为和收益函数后，计算机会自己去找最大化收益函数。这样可以省去了大量的人力。



## ③ 第 3 题

【题目】既然没有免费午餐定理成立，不管是机器，还是人，为什么都还要学习

【解答】

免费午餐的定理是在对未来发生的某些事情不加以一定的经验的加成，所有情况出现的概率都是一样的，所以，正确与否都是有可能的。机器学习的学习特别像人对于学习的一种追求。我们可能在很多时候会犯错误，我们可能对未知的事物判断错误。但是随着经验和知识储备的积累，对于未知事物的判断会愈加准确。就像永远趋向于某一值的函数一样，我们可能永远无法到达 100%，但是，只要我们持续的努力，我们会离 100% 愈来愈接近。