# 第 1 章 蒙特卡洛方法

1. 蒙特卡洛方法`Monte Carlo` 可以通过采用随机投点法来求解不规则图形的面积。

   求解结果并不是一个精确值，而是一个近似值。当投点的数量越来越大时，该近似值也越接近真实值。

2. 蒙特卡洛方法也可以用于根据概率分布来随机采样的任务。

## 1.1 布丰投针问题

1. 布丰投针问题是1777年法国科学家布丰提出的一种计算圆周率的方法：随机投针法。其步骤为：

   - 首先取一张白纸，在上面绘制许多条间距为 ![一、蒙特卡洛方法 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/96b9b6b97bba67dd7d77373351fbccc6.svg) 的平行线。

   - 取一根长度为 ![一、蒙特卡洛方法 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/18a085454e4e76d678c5d0e646aaefed.svg) 的针，随机地向纸上投掷 ![一、蒙特卡洛方法 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5a2e98373b3730e19f9172f7df390432.svg) 次，观测针与直线相交的次数，记做 ![一、蒙特卡洛方法 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a5641e35a69f1b4bdce5839a03637f11.svg) 。

   - 计算针与直线相交的概率 ![一、蒙特卡洛方法 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5ad3dfb4f1622b7f7628e5542fa8b6ba.svg) 。可以证明这个概率 ![一、蒙特卡洛方法 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bb519b6b8e8eae1a37adc6e902fdc240.svg) 。因此有：

     ![一、蒙特卡洛方法 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fbbf35a0368ca1e99f07973c9368cfbf.svg)

2. 由于向纸上投针是完全随机的，因此用二维随机变量 ![一、蒙特卡洛方法 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d501efae07c9b05a3595044741b93d00.svg) 来确定针在纸上的具体位置。其中：

   - ![一、蒙特卡洛方法 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64869188e3bcd72f23d4e019e2e95779.svg) 表示针的中点到平行线的距离，它是 ![一、蒙特卡洛方法 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a641abbb4fad23b86f5b24fb7eb60214.svg) 之间的均匀分布。
   - ![一、蒙特卡洛方法 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f9a58d23ffae63244f8d54c83a581cd4.svg) 表示针与平行线的夹角，它是 ![一、蒙特卡洛方法 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1a0fd42eb0bf5ab970399586737c2e7e.svg) 之间的均匀分布。

   ![一、蒙特卡洛方法 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c3594fe5dae9498ea48ebb2e2758666f.png)

   当 ![一、蒙特卡洛方法 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1e8433c11bd809bd1e4117d72bdf6901.svg) 时，针与直线相交。

   由于 ![一、蒙特卡洛方法 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0c2080241d455a53c3ac458f4dba1216.svg) 相互独立，因此有概率密度函数：

   ![一、蒙特卡洛方法 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/21e77660c660ae2d8a3fcd06b2961f38.svg)

   因此，针与直线相交的概率为：

   ![一、蒙特卡洛方法 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/319f1c060ee95d6bd08d164ffcca1ab1.svg)

   根据 ![一、蒙特卡洛方法 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/71c3c9444753dda03f897766366bdc32.svg) 即可得证。

3. 布丰投针问题中，蒙特卡洛方法是利用随机投点法来求解面积 ![一、蒙特卡洛方法 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9d63750e0343fe0c424f51afd7503e6f.svg) 。因为曲线的积分就是面积，这里的曲线就是概率密度函数 ![一、蒙特卡洛方法 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bf066c4d1e38b7d74f07a35eece7f2b8.svg) 。

## 1.2 蒙特卡洛积分

1. 对于函数 ![一、蒙特卡洛方法 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg)，其在区间 ![一、蒙特卡洛方法 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/307de0b6552a633e6df095d20f1dd275.svg) 上的积分 ![一、蒙特卡洛方法 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/81b440234586170c77d3b21122fa290f.svg) 可以采用两种方法来求解：投点法、期望法。

2. 投点法求积分：对函数 ![一、蒙特卡洛方法 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg)，对其求积分等价于求它的曲线下方的面积。

   此时定义一个常数 ![一、蒙特卡洛方法 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5e20f6cae723f651dc49a304bb164215.svg)，使得 ![一、蒙特卡洛方法 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e577f17ea81b02298f7a432893ea1b1c.svg) ，该常数在区间 ![一、蒙特卡洛方法 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/307de0b6552a633e6df095d20f1dd275.svg) 上的面积就是矩形面积 ![一、蒙特卡洛方法 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5d3df359f6589e4065ce3c0413590ba8.svg) 。

   随机向矩形框中随机的、均匀的投点，设落在函数 ![一、蒙特卡洛方法 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 下方的点为绿色，落在 ![一、蒙特卡洛方法 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 和 ![一、蒙特卡洛方法 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5e20f6cae723f651dc49a304bb164215.svg) 之间的点为红色。则有：**落在 ![一、蒙特卡洛方法 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 下方的点的概率等于 ![一、蒙特卡洛方法 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 的面积比上矩形框的面积** 。

   具体做法是：从 ![一、蒙特卡洛方法 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/307de0b6552a633e6df095d20f1dd275.svg) 之间的均匀分布中采样 ![一、蒙特卡洛方法 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/772667393aa88b9a70e943ca5bb3bb0b.svg) ，从 ![一、蒙特卡洛方法 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/092c822354efe28e6ec0240bb2032668.svg) 之见的均匀分布中采样 ![一、蒙特卡洛方法 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c971b996e1addd871a969001e2e2e55.svg) ， ![一、蒙特卡洛方法 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/66ac93f5be40bb1dab848a7c510ecdda.svg) 构成一个随机点。

   - 若 ![一、蒙特卡洛方法 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/300b14f4855be2aa86248c2c2b4af446.svg)，则说明该随机点在函数 ![一、蒙特卡洛方法 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 下方，染成绿色。
   - 若 ![一、蒙特卡洛方法 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4a10580de8940d8c806f9bb17623d50a.svg)，则说明该随机点在函数 ![一、蒙特卡洛方法 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 上方，染成红色。

   假设绿色点有 ![一、蒙特卡洛方法 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/474c414f221f0ee6755b26aca9c2e0f1.svg) 个，红色点有 ![一、蒙特卡洛方法 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/609c9ee7f9bd791084e1dd41f3b374e4.svg) 个，总的点数为 ![一、蒙特卡洛方法 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7491883a971f3d69103cedf403c413aa.svg) ，因此有：![一、蒙特卡洛方法 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1c0a98d43b0494bbf403504c8f54d016.svg) 。

   ![一、蒙特卡洛方法 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c52e7a656b62f6f328dbd2d9d686f243.png)

3. 期望法求积分：假设需要求解积分 ![一、蒙特卡洛方法 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b333f5f7ef61a3aa3ad0605eb45c4739.svg) ，则任意选择一个概率密度函数 ![一、蒙特卡洛方法 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg)，其中 ![一、蒙特卡洛方法 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 满足条件：

   ![一、蒙特卡洛方法 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3d2711efaf1fb75969415350504fb39.svg)

   令：

   ![一、蒙特卡洛方法 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4da08fade1d789a3a6fda577f72f0fd.svg)

   则有：![一、蒙特卡洛方法 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/406b64055f058e07c81d8dc71ee22233.svg) ，它刚好是一个期望：设随机变量 ![一、蒙特卡洛方法 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64869188e3bcd72f23d4e019e2e95779.svg) 服从分布 ![一、蒙特卡洛方法 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/58006f5bf9c5f5325e21e90e32b6dbb9.svg)，则 ![一、蒙特卡洛方法 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c9a8d343050d966c08b5114f4b4d5bcd.svg) 。

   则期望法求积分的步骤是：

   - 任选一个满足条件的概率分布 ![一、蒙特卡洛方法 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 。
   - 根据 ![一、蒙特卡洛方法 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg)，生成一组服从分布 ![一、蒙特卡洛方法 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 的随机数 ![一、蒙特卡洛方法 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fba38d047bfa22e22a03ba6f002c9d02.svg) 。
   - 计算均值 ![一、蒙特卡洛方法 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5122e4ca1cb67a752838dee6b08dc36b.svg) ，并将 ![一、蒙特卡洛方法 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3aec73f182da3e7c8fdd31c0d3760fa.svg) 作为 ![一、蒙特卡洛方法 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0fb46ea61803d64a9f4484ee7aeb4de0.svg) 的近似。

4. 在期望法求积分中，如果 ![一、蒙特卡洛方法 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a3e382236e8fd5b21feaeb9465988cea.svg) 均为有限值，则 ![一、蒙特卡洛方法 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 可以取均匀分布的概率密度函数：

   ![一、蒙特卡洛方法 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/43ead1be336b4207d58ab546f7eb9cd6.svg)

   此时 ![一、蒙特卡洛方法 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/38deaae4d5777bce7e0c39245e0f7da8.svg)， ![一、蒙特卡洛方法 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f9e2f0b40311e9769faa46d50a6f4102.svg) 。

   其物理意义为：![一、蒙特卡洛方法 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/626b48d9874d48c0f02529abb5c8f614.svg) 为在区间 ![一、蒙特卡洛方法 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/307de0b6552a633e6df095d20f1dd275.svg) 上函数的平均高度，乘以区间宽度 ![一、蒙特卡洛方法 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e4319dbb5153ceb641910dcb22ad49b7.svg) 就是平均面积。

   ![一、蒙特卡洛方法 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1e390c5422b6582cccba430c353adc6f.png)

5. 对于期望 ![一、蒙特卡洛方法 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f5c153c4dbfc27a74adb08bb261df709.svg)，如果 ![一、蒙特卡洛方法 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 或者 ![一、蒙特卡洛方法 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/be30066d0162870219288eea29199d85.svg) 的表达式比较复杂，则也可以转化为另一个期望的计算。

   选择一个比较简单的概率密度函数 ![一、蒙特卡洛方法 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7bc4e5f344bb58eddf46088a242fc295.svg)，根据：

   ![一、蒙特卡洛方法 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e75d3c36d5bbd843b0710bb106521b0d.svg)

   令 ![一、蒙特卡洛方法 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5b03179ea064c895960bda65cbe09e50.svg)，则原始期望转换为求另一个期望 ![一、蒙特卡洛方法 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c2d152508214078b72009ccb032995e.svg) 。此时可以使用期望法求积分的策略计算。

## 1.3 蒙特卡洛采样

1. 采样问题的主要任务是：根据概率分布 ![一、蒙特卡洛方法 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) ，生成一组服从分布 ![一、蒙特卡洛方法 - 图81](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 的随机数 ![一、蒙特卡洛方法 - 图82](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a6da30200c3c97061e301fecdd7136f2.svg) 。

   - 如果 ![一、蒙特卡洛方法 - 图83](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 就是均匀分布，则均匀分布的采样非常简单。

   - 如果 ![一、蒙特卡洛方法 - 图84](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 是非均匀分布，则可以通过均匀分布的采样来实现。其步骤是：

     - 首先根据均匀分布 ![一、蒙特卡洛方法 - 图85](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c19ed7bc9e86b6d27dce2fa2f7f5aff1.svg) 随机生成一个样本 ![一、蒙特卡洛方法 - 图86](https://static.bookstack.cn/projects/huaxiaozhuan-ai/05b91326dcce4ef7ae1dbe8ffa95ded5.svg) 。

     - 设 ![一、蒙特卡洛方法 - 图87](https://static.bookstack.cn/projects/huaxiaozhuan-ai/225516caf64716ee5d5c0787a05645a6.svg) 为概率分布 ![一、蒙特卡洛方法 - 图88](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 的累计分布函数：![一、蒙特卡洛方法 - 图89](https://static.bookstack.cn/projects/huaxiaozhuan-ai/693921a6361c06fb064f8a2c5b257053.svg) 。

       令 ![一、蒙特卡洛方法 - 图90](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cdd16a5b9721b933901b7acd40f586cf.svg) ，计算得到 ![一、蒙特卡洛方法 - 图91](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e2157b83826cf33bded67049cf14905c.svg) ，其中 ![一、蒙特卡洛方法 - 图92](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4d76f69e1379ecdf0c7289634f661729.svg) 为反函数，则 ![一、蒙特卡洛方法 - 图93](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc13fa362c1eda7638706326290a374f.svg) 为对 ![一、蒙特卡洛方法 - 图94](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 的采样。

     ![一、蒙特卡洛方法 - 图95](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6b08f6d59fbb51bb6e3d7567c25453c3.png)

2. 通过均匀分布的采样的原理：假设随机变量 ![一、蒙特卡洛方法 - 图96](https://static.bookstack.cn/projects/huaxiaozhuan-ai/34743308047ddce1ac264fa6d2942904.svg) 满足 ![一、蒙特卡洛方法 - 图97](https://static.bookstack.cn/projects/huaxiaozhuan-ai/48c559fc5f44eec19a2f3911a01f8d0f.svg)，则 ![一、蒙特卡洛方法 - 图98](https://static.bookstack.cn/projects/huaxiaozhuan-ai/64869188e3bcd72f23d4e019e2e95779.svg) 的概率分布为：

   ![一、蒙特卡洛方法 - 图99](https://static.bookstack.cn/projects/huaxiaozhuan-ai/666740323d6dd2592207fc99170dd1f6.svg)

   因为 ![一、蒙特卡洛方法 - 图100](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8f1785c273ae3e5b7b582461a0667267.svg) 是 ![一、蒙特卡洛方法 - 图101](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fc250158f540123e3cc0f408393cbfd7.svg) 上面的均匀分布，因此 ![一、蒙特卡洛方法 - 图102](https://static.bookstack.cn/projects/huaxiaozhuan-ai/14d57535dd86126f2881b80bb7a838c2.svg) ； ![一、蒙特卡洛方法 - 图103](https://static.bookstack.cn/projects/huaxiaozhuan-ai/225516caf64716ee5d5c0787a05645a6.svg) 为概率分布 ![一、蒙特卡洛方法 - 图104](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 的累计分布函数，因此 ![一、蒙特卡洛方法 - 图105](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9dadc50c00eaf20cf394ea42a9d075b8.svg) 。因此上式刚好等于 ![一、蒙特卡洛方法 - 图106](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) ，即：![一、蒙特卡洛方法 - 图107](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc13fa362c1eda7638706326290a374f.svg) 服从概率分布 ![一、蒙特卡洛方法 - 图108](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) 。

   这其中有两个关键计算：

   - 根据 ![一、蒙特卡洛方法 - 图109](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg)，计算累计分布函数 ![一、蒙特卡洛方法 - 图110](https://static.bookstack.cn/projects/huaxiaozhuan-ai/693921a6361c06fb064f8a2c5b257053.svg) 。
   - 根据 ![一、蒙特卡洛方法 - 图111](https://static.bookstack.cn/projects/huaxiaozhuan-ai/eda3542eca5ea23bd3d275fe4f492f09.svg) 计算反函数 ![一、蒙特卡洛方法 - 图112](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9635726643d55ec766475654f84be5ee.svg) 。

   如果累计分布函数无法计算，或者反函数难以求解，则该方法无法进行。

3. 对于复杂的概率分布 ![一、蒙特卡洛方法 - 图113](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60f872d1abdb9a2eb5916cb492bc3dfe.svg) ，难以通过均匀分布来实现采样。此时可以使用`接受-拒绝采样` 策略。

   - 首先选定一个容易采样的概率分布 ![一、蒙特卡洛方法 - 图114](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7bc4e5f344bb58eddf46088a242fc295.svg) ，选择一个常数 ![一、蒙特卡洛方法 - 图115](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cf64c0c1f5987a82e92404e718d70cb8.svg) ，使得在定义域的所有位置都满足 ![一、蒙特卡洛方法 - 图116](https://static.bookstack.cn/projects/huaxiaozhuan-ai/b1d49488cb8688ab6bb5f311c3c565ca.svg) 。

   - 然后根据概率分布 ![一、蒙特卡洛方法 - 图117](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7bc4e5f344bb58eddf46088a242fc295.svg) 随机生成一个样本 ![一、蒙特卡洛方法 - 图118](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc13fa362c1eda7638706326290a374f.svg) 。

   - 计算 ![一、蒙特卡洛方法 - 图119](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8375346da2f182972016d5a5eb694173.svg) ，以概率 ![一、蒙特卡洛方法 - 图120](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ea3b0d2a7bdd8004ee27c67164fc9e63.svg) 接受该样本。

     具体做法是：根据均匀分布 ![一、蒙特卡洛方法 - 图121](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c19ed7bc9e86b6d27dce2fa2f7f5aff1.svg) 随机生成一个点 ![一、蒙特卡洛方法 - 图122](https://static.bookstack.cn/projects/huaxiaozhuan-ai/69564bff5547e52abdc46058d1cafbee.svg) 。如果 ![一、蒙特卡洛方法 - 图123](https://static.bookstack.cn/projects/huaxiaozhuan-ai/212231785fb294dec777e4c13826859c.svg) ，则接受该样本；否则拒绝该样本。

     > 或者换一个做法：根据均匀分布 ![一、蒙特卡洛方法 - 图124](https://static.bookstack.cn/projects/huaxiaozhuan-ai/09340880439be9c5c3d576f93eb06d23.svg) 生成一个随机点，如果该点落在灰色区间（![一、蒙特卡洛方法 - 图125](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0985a5c36e6ced3909f8efecf7ffa074.svg)）则拒绝该样本；如果该点落在白色区间（![一、蒙特卡洛方法 - 图126](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fac0e27c7a2781978c9de5620216ff86.svg)）则接受该样本。

   ![一、蒙特卡洛方法 - 图127](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9bf90795efc813654702526d40586d9f.png)

4. `接受-拒绝采样` 在高维的情况下会出现两个问题：

   - 合适的 ![一、蒙特卡洛方法 - 图128](https://static.bookstack.cn/projects/huaxiaozhuan-ai/de2db42772dfbc6984a70a62e45e1540.svg) 分布比较难以找到。
   - 难以确定一个合理的 ![一、蒙特卡洛方法 - 图129](https://static.bookstack.cn/projects/huaxiaozhuan-ai/cf64c0c1f5987a82e92404e718d70cb8.svg) 值。

   这两个问题会导致拒绝率很高，无效计算太多。