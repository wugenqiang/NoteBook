# 第 4 章 特殊函数

1. 这里给出机器学习中用到的一些特殊函数。

## 4.1 sigmoid 函数

1. `sigmoid`函数：

   ![四、特殊函数 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/67a90605b45d6512746ae5dcac1469cd.svg)

   - 该函数可以用于生成二项分布的 ![四、特殊函数 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/09aaf655c086c8052eba46e2761e85b9.svg) 参数。
   - 当 ![四、特殊函数 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1f4ce5e673e20376e8cfdd9a655b3ba5.svg) 很大或者很小时，该函数处于饱和状态。此时函数的曲线非常平坦，并且自变量的一个较大的变化只能带来函数值的一个微小的变化，即：导数很小。

   ![四、特殊函数 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a85115921000df335b1c11520f7bc88b.png)

## 4.2 softplus 函数

1. `softplus`函数：![四、特殊函数 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4c57eca3703bf19296a645e8aee513c2.svg) 。

   - 该函数可以生成正态分布的 ![四、特殊函数 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/393b4a4c1ba7c45d33e410fde7ab485c.svg) 参数。
   - 它之所以称作`softplus`，因为它是下面函数的一个光滑逼近：![四、特殊函数 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4de6427220e5140bfb3c109eabb16c0e.svg) 。

   ![四、特殊函数 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64d02de4c335a247933117898687825f.png)

2. 如果定义两个函数：

   ![四、特殊函数 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d6077976a147b100e2a8718150a3b708.svg)

   则它们分布获取了 ![四、特殊函数 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6d87805c257af651af944a47d8f4b877.svg) 的正部分和负部分。

   根据定义有：![四、特殊函数 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/33bea2c2a4ed147831dcafc734b97a40.svg) 。而 ![四、特殊函数 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/57400c5a5915aca70084c0dbf36b719e.svg) 逼近的是 ![四、特殊函数 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/503bc3e40974329e82b08326a2058d60.svg)， ![四、特殊函数 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5cce548115e302ad8c650c702d8681ae.svg) 逼近的是 ![四、特殊函数 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/978222f44f8a1479fb82ee168743db6a.svg)，于是有：

   ![四、特殊函数 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/24c84df38d035c7bc18e44c67493a97f.svg)

3. `sigmoid`和`softplus`函数的性质：

   ![四、特殊函数 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3dedec0b2d4febe3fa58018d76d15f20.svg)

   其中 ![四、特殊函数 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f3c220e94659a7289d59a4f25131c96c.svg) 为反函数。

   ![四、特殊函数 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/124f6c3a12d96ec10d08519a03a7f8d2.svg) 也称作`logit`函数。

   ![四、特殊函数 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/61317fac44fbab9c612a941e71c33c40.png)

## 4.3 伽马函数

1. 伽马函数定义为：

   ![四、特殊函数 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/537e15434ba8f8c9a795ca77793ae284.svg)

   ![四、特殊函数 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e1ab1d7e8bd216c48ba5f6b7cd6ae69b.jpeg)

   性质为：

   - 对于正整数 ![四、特殊函数 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4cecfcf39d53138c459300dff2fd50a3.svg) 有： ![四、特殊函数 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/92e17208cda4f0d1b744321799de6198.svg) 。

   - ![四、特殊函数 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc4b7c8dd85abb9c91ffec2e5b2c720b.svg) ，因此伽马函数是阶乘在实数域上的扩展。

   - 与贝塔函数的关系：

     ![四、特殊函数 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/35d1db7e64659e1cb95f01a79efe0f81.svg)

   - 对于 ![四、特殊函数 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/057589178c2dd9dae925e5f26d7f0814.svg) 有：

     ![四、特殊函数 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3ef42f40290a417d9d91fd0b46720507.svg)

     则可以推导出重要公式： ![四、特殊函数 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d7715a4a2bc75239da66f6877f88799e.svg) 。

   - 对于 ![四、特殊函数 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/30865ea5b39d3a8b4ebf726c0864619a.svg)，伽马函数是严格凹函数。

2. 当 ![四、特殊函数 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1f4ce5e673e20376e8cfdd9a655b3ba5.svg) 足够大时，可以用`Stirling` 公式来计算`Gamma`函数值：![四、特殊函数 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3796dccc4f92767e1f99a36ad3295183.svg) 。

## 4.4 贝塔函数

1. 对于任意实数 ![四、特殊函数 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ef607216201ede75baf4bd46cd773506.svg) ，定义贝塔函数：

   ![四、特殊函数 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b1e20a285748db4d257a185003b992da.svg)

   其它形式的定义：

   ![四、特殊函数 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c1111193863571f8444d7ef803570bfd.svg)

2. 性质：

   - 连续性：贝塔函数在定义域 ![四、特殊函数 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3836eaa781dbbd70948e9c3426d7a2fd.svg) 内连续。

   - 对称性：![四、特殊函数 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ca42b0f3bddb48d3ed7a482d07c47591.svg) 。

   - 递个公式：

     ![四、特殊函数 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/26e1a94a6f55683857a0c3c1ff632815.svg)

   - 当 ![四、特殊函数 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e3c3d295e2251fe9b88d209752186423.svg) 较大时，有近似公式：

     ![四、特殊函数 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6c42d45dbe5cf9788233d4d6431b8199.svg)

   - 与伽马函数关系：

     - 对于任意正实数 ![四、特殊函数 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e3c3d295e2251fe9b88d209752186423.svg) ，有：

       ![四、特殊函数 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6e92538ef9020305733ac725e0403ee9.svg)

     - ![四、特殊函数 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bcb4fc3e8f06ba2f06a881c365940830.svg) 。