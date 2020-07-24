# 第 1 章 欢迎来到 Python3 玩转机器学习

## 1.1 什么是机器学习

通俗来说，机器学习就是让机器去学习，设计一个算法，让机器去执行。

最早的机器学习应用：**垃圾邮件分辨**

> 传统的计算机解决问题思路：

* 编写规则，定义“垃圾邮件”，让计算机执行。

  ![流程图](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723093237.png)

* 对于很多问题，规则很难定义。

* 规则在不断变化。

> 图像识别

如何来确认左边是狗，右边是猫呢？如何来定义什么是猫，什么是狗呢？

![image-20200723095640421](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723095642.png)

无法定义规则，所以在图像识别领域，会引入机器学习来区分他们。

> 人脸识别

![image-20200723100016908](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723100018.png)

使用机器学习算法来完成人脸识别的效果特别好！

> 数字识别

![image-20200723100155029](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723100156.png)

> 人类如何学习呢？

人类的学习过程是一种经验学习过程。

![image-20200723100712957](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723100714.png)

> 引入机器学习：

![image-20200723100921699](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723100923.png)

将大量的学习资料喂给机器学习算法后机器学习算法将训练出一个模型，将输入样例输入到模型中得到输出结果。

> 在生活中已经大量的运用了机器学习，举例：

* （1）判断信用卡发放是否有风险？
* （2）在使用 Google 搜索时根据你输入的部分关键字，判断你真正想搜索的内容
* （3）浏览商品时，你最有可能购买的商品？
* （4）你最可能喜欢的音乐，图书，文章？
* （5）语音识别
* （6）人脸识别
* （7）金融预测
* （8）医疗诊断
* （9）市场分析

**可以预见：未来将有更多领域需要运用机器学习**

* （10）无人驾驶
* （11）安全领域
* （12）医疗领域：辅助病情判断、抓药
* （13）金融领域
* （14）市场领域
* （15）自然语言处理：智能翻译
* （16）各种专有领域：矿产勘查，宇宙探索，药物研发，...



## 1.2 课程内容介绍

![image-20200723102651545](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723102652.png)

* 深入理解算法基本原理
* 实际使用算法解决真实场景的问题
* 对不同算法进行对比试验
* 对同一算法的不同参数进行对比试验
* 对部分算法进行底层编写

**同时会介绍如何使用算法：**

* 如何评价算法的好坏
* 如何解决过拟合和欠拟合
* 如何调节算法的参数
* 如何验证算法的正确性



**不仅仅是调库：**

![image-20200723103341849](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723103343.png)

> 这门课程会教会我：

* （1）算法原理的学习
* （2）部分算法底层的编写
* （3）scikit-learn 机器学习库的使用

## 1.3 技术栈的使用

![image-20200723145601550](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723145602.png)

* 语言：Python 3
* 机器学习框架：Scikit-learn
* 辅助这个框架使用：numpy（处理矩阵），matplotlib（进行绘图），...
* 编程环境 IDE：Jupyter Notebook

对于以上的技术栈，其实仅仅需要安装一个集成工具即可：`Anaconda`（已经包含上面所有），来完成系统环境的配置。（[Anaconda 安装指南](Python/Anaconda/Anaconda入门指南)）

> 注：当对算法进行底层实现的时候，推荐使用 Pycharm IDE

## 1.4 课程学习的基础

* 语言：Python 3 基础语法
* 数学：（1）基本高中数学水平；（2）本科高等数学，线性代数，概率论**及格水平**

## 1.5 课程所使用的数据集

* 框架：Scikit-learn

* 使用的数据集：内置数据集或通过 scikit-learn 可以直接下载的数据集，让算法在数据中寻找规律，执行某些智能任务。

  ![image-20200723152927907](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723152929.png)

* 也会使用到 MNIST 数据集

  ![image-20200723153118826](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723153120.png)

## 1.6 这门课不涵盖的内容

这门课程更专注于机器学习的算法学习，但根据使用场景的不同，机器学习从数据准备到实际应用是一个庞大繁琐的过程。

![image-20200723153519414](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200723153520.png)

* 同时也不包括对真实世界的数据进行预处理的过程。
* 不涵盖神经网络和深度学习。
* 只包含经典基础的机器学习算法，不涵盖所有机器学习算法，关注于监督学习。





