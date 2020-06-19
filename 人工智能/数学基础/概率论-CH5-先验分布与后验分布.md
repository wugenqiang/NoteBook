## 第 5 章 先验分布与后验分布

1. 在贝叶斯学派中，`先验分布+数据（似然）= 后验分布` 。

2. 例如：假设需要识别一大箱苹果中的好苹果、坏苹果的概率。

   - 根据你对苹果好、坏的认知，给出先验分布为：50个好苹果和50个坏苹果。

   - 现在你拿出10个苹果，发现有：8个好苹果，2个坏苹果。

     根据数据，你得到后验分布为：58个好苹果，52个坏苹果

   - 再拿出10个苹果，发现有：9个好苹果，1个坏苹果。

     根据数据，你得到后验分布为：67个好苹果，53个坏苹果

   - 这样不断重复下去，不断更新后验分布。当一箱苹果清点完毕，则得到了最终的后验分布。

   在这里：

   - 如果不使用先验分布，仅仅清点这箱苹果中的好坏，则得到的分布只能代表这一箱苹果。
   - 采用了先验分布之后得到的分布，可以认为是所有箱子里的苹果的分布。
   - 当采用先验分布时：给出的好、坏苹果的个数（也就是频数）越大，则先验分布越占主导地位。

3. 假设好苹果的概率为 ![六、先验分布与后验分布 - 图1](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) ，则抽取 ![六、先验分布与后验分布 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2308afe05eb42e18858d2b0de050d3c6.svg) 个苹果中，好苹果个数为 ![六、先验分布与后验分布 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 个的概率为一个二项分布：

   ![六、先验分布与后验分布 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/14179b2ee152051869e00d33776c14bf.svg)

   其中 ![六、先验分布与后验分布 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/12ddf46f8f8a8a91a5d495c4d8ce8278.svg) 为组合数。

4. 现在的问题是：好苹果的概率 ![六、先验分布与后验分布 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 不再固定，而是服从一个分布。

   假设好苹果的概率 ![六、先验分布与后验分布 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 的先验分布为贝塔分布：![六、先验分布与后验分布 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6919d4ea9f7819f06d23db567bec9cbf.svg) 。

   则后验概率为：

   ![六、先验分布与后验分布 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e2ae4a4e525f146f20764f3e7f260116.svg)

   归一化之后，得到后验概率为：

   ![六、先验分布与后验分布 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/00c44bebe76e9912377d5afaf04eeaf8.svg)

5. 好苹果概率 ![六、先验分布与后验分布 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 的先验分布的期望为：![六、先验分布与后验分布 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/789188d7e822276769e9de0b19246bab.svg) 。好苹果概率 ![六、先验分布与后验分布 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 的后验分布的期望为：![六、先验分布与后验分布 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/26691aaa9c2626b3994111bb8b342092.svg) 。

   - 根据上述例子所述：
     - 好苹果的先验概率的期望为 ![六、先验分布与后验分布 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/471343d9d7a5326b190557ca63d5a6a4.svg)
     - 进行第一轮数据校验之后，好苹果的后验概率的期望为 ![六、先验分布与后验分布 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d048daae19e8622cf2624700fbe727f5.svg)
   - 如果将 ![六、先验分布与后验分布 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6342ab7efc9cb37ed61b490d8a735de7.svg) 视为先验的好苹果数量， ![六、先验分布与后验分布 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5aa3899f7de91ca3624748e4e386d75d.svg) 视为先验的坏苹果数量， ![六、先验分布与后验分布 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2308afe05eb42e18858d2b0de050d3c6.svg) 表示箱子中苹果的数量， ![六、先验分布与后验分布 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a9cc833ebec12ed5dbbe63c52310d254.svg) 表示箱子中的好苹果数量（相应的， ![六、先验分布与后验分布 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f939873c5fdc8b1794660cfa2dbb92ad.svg) 就是箱子中坏苹果的数量）。则：好苹果的先验概率分布的期望、后验概率分布的期望符合人们的生活经验。
   - 这里使用先验分布和后验分布的期望，因为 ![六、先验分布与后验分布 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/998cc5265358c68e392cffa54c73f2a8.svg) 是一个随机变量。若想通过一个数值来刻画好苹果的可能性，则用期望较好。

6. 更一般的，如果苹果不仅仅分为好、坏两种，而是分作`尺寸1、尺寸2、...尺寸K`等。则 ![六、先验分布与后验分布 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2308afe05eb42e18858d2b0de050d3c6.svg) 个苹果中，有 ![六、先验分布与后验分布 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/c68ec65357c253df6144575e19fc2895.svg) 个尺寸1的苹果、 ![六、先验分布与后验分布 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3c6686496a223fa756ad09636bcc0499.svg) 个尺寸2的苹果….![六、先验分布与后验分布 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/534c29ab3c44fff321b09444753881a2.svg) 个尺寸 ![六、先验分布与后验分布 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60daa0d3225b87be4b3e26d985d67db9.svg) 的苹果的概率服从多项式分布：

   ![六、先验分布与后验分布 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1846577d449207c930f716478a98722b.svg)

   其中苹果为尺寸1的概率为 ![六、先验分布与后验分布 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8d4c94b715d95b62d2c68163e712e9ba.svg)， 尺寸2的概率为 ![六、先验分布与后验分布 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1116cf3047ce158592904ebf7d2ef8dc.svg) ，… 尺寸 ![六、先验分布与后验分布 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60daa0d3225b87be4b3e26d985d67db9.svg) 的概率为 ![六、先验分布与后验分布 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/1158d17de9641a771021270ad34ad93a.svg) ， ![六、先验分布与后验分布 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e39332763bd24a0b2ce036c1deb778c4.svg)

   - 假设苹果尺寸的先验概率分布为狄利克雷分布：![六、先验分布与后验分布 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d7ca0668ca12126d5c5db5d8b6020007.svg) 。

     苹果尺寸的先验概率分布的期望为：![六、先验分布与后验分布 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/fe84dba8de94cea299df927ad0366692.svg) 。

   - 则苹果尺寸的后验概率分布也为狄里克雷分布：![六、先验分布与后验分布 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f5c74691bae6d724d799886d0fb320db.svg) 。

     苹果尺寸的后验概率分布的期望为：![六、先验分布与后验分布 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/bc3bdc52dbb4ee7616818cc9db5f269a.svg) 。