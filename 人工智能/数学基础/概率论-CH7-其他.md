# 第 7 章 其它

## 7.1 概率分布表示

假设随机变量 ![八、其它 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124557.svg) 满足 ![八、其它 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124601.svg)，且函数 ![八、其它 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124607.svg) 满足：处处连续、可导、且存在反函数。 则有：

![八、其它 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124624.svg)

或者等价地（其中 ![八、其它 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124713.svg) 为反函数）：

![八、其它 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124726.svg)

- 如果扩展到高维空间，则有：

  ![八、其它 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124738.svg)

- 并不是 ![八、其它 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124749.svg)，这是因为 ![八、其它 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124752.svg) 引起了空间扭曲，从而导致 ![八、其它 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124758.svg) 。

  根据 ![八、其它 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619124807.svg) ，求解该方程，即得到上述解。

## 7.2 机器学习中不确定性的来源

机器学习中不确定性有三个来源：

- 模型本身固有的随机性。如：量子力学中的粒子动力学方程。

- 不完全的观测。即使是确定性系统，当无法观测所有驱动变量时，结果也是随机的。

- 不完全建模。有时必须放弃一些观测信息。

  如机器人建模中：虽然可以精确观察机器人周围每个对象的位置，但在预测这些对象将来的位置时，对空间进行了离散化。则位置预测将带有不确定性。