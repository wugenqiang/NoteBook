# 第 1 章 概率与分布

## 1.1 条件概率与独立事件

1. 条件概率：已知 ![一、概率与分布 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125743.svg) 事件发生的条件下 ![一、概率与分布 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125750.svg) 发生的概率，记作 ![一、概率与分布 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125755.svg)，它等于事件 ![一、概率与分布 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125801.svg) 的概率相对于事件 ![一、概率与分布 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125814.svg) 的概率，即：![一、概率与分布 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125821.svg) 。其中必须有 ![一、概率与分布 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4c38d9c69fa469e981cdf9cb07fc7217.svg) 。

2. 条件概率分布的链式法则：对于 ![一、概率与分布 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125846.svg) 个随机变量 ![一、概率与分布 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125849.svg)，有：

   ![一、概率与分布 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125905.svg)

3. 两个随机变量 ![一、概率与分布 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125909.svg) 相互独立的数学描述：![一、概率与分布 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125928.svg) 。记作： ![一、概率与分布 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125936.svg) 。

4. 两个随机变量 ![一、概率与分布 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125945.svg) 关于随机变量 ![一、概率与分布 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125949.svg) 条件独立的数学描述：![一、概率与分布 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130001.svg) 。

   记作： ![一、概率与分布 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130018.svg) 。

## 1.2 联合概率分布

1. 定义![一、概率与分布 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130031.svg) 和 ![一、概率与分布 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130034.svg) 的联合分布为：![一、概率与分布 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130038.svg) 。

   - ![一、概率与分布 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130048.svg) 的分布可以从联合分布中得到：

     ![一、概率与分布 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130052.svg)

   - ![一、概率与分布 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130056.svg) 的分布可以从联合分布中得到：

     ![一、概率与分布 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130059.svg)

2. 当 ![一、概率与分布 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130135.svg) 和 ![一、概率与分布 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130120.svg) 都是离散随机变量时， 定义 ![一、概率与分布 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130152.svg) 和 ![一、概率与分布 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130155.svg) 的联合概率质量函数为： ![一、概率与分布 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130159.svg)

   则 ![一、概率与分布 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130202.svg) 和 ![一、概率与分布 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130205.svg) 的概率质量函数分布为：

   ![一、概率与分布 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130210.svg)

3. 当 ![一、概率与分布 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130215.svg) 和 ![一、概率与分布 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130218.svg) 联合地连续时，即存在函数 ![一、概率与分布 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130224.svg) ，使得对于所有的实数集合 ![一、概率与分布 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130228.svg) 和 ![一、概率与分布 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130231.svg) 满足：

   ![一、概率与分布 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130237.svg)

   则函数 ![一、概率与分布 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130241.svg) 称为 ![一、概率与分布 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130244.svg) 和 ![一、概率与分布 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130246.svg) 的概率密度函数。

   - 联合分布为：![一、概率与分布 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5bba137f9106c5a2787d258c677094a3.svg) 。

   - ![一、概率与分布 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![一、概率与分布 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的分布函数以及概率密度函数分别为：

     ![一、概率与分布 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619130327.svg)