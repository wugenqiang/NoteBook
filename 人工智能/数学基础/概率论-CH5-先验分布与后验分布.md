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

3. 假设好苹果的概率为 ![六、先验分布与后验分布 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144446.svg) ，则抽取 ![六、先验分布与后验分布 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144449.svg) 个苹果中，好苹果个数为 ![六、先验分布与后验分布 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144452.svg) 个的概率为一个二项分布：

   ![六、先验分布与后验分布 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144456.svg)

   其中 ![六、先验分布与后验分布 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144459.svg) 为组合数。

4. 现在的问题是：好苹果的概率 ![六、先验分布与后验分布 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144503.svg) 不再固定，而是服从一个分布。

   假设好苹果的概率 ![六、先验分布与后验分布 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144507.svg) 的先验分布为贝塔分布：![六、先验分布与后验分布 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144510.svg) 。

   则后验概率为：

   ![六、先验分布与后验分布 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144514.svg)

   归一化之后，得到后验概率为：

   ![六、先验分布与后验分布 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144521.svg)

5. 好苹果概率 ![六、先验分布与后验分布 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144527.svg) 的先验分布的期望为：![六、先验分布与后验分布 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144524.svg) 。好苹果概率 ![六、先验分布与后验分布 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144530.svg) 的后验分布的期望为：![六、先验分布与后验分布 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144534.svg) 。

   - 根据上述例子所述：
     - 好苹果的先验概率的期望为 ![六、先验分布与后验分布 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144537.svg)
     - 进行第一轮数据校验之后，好苹果的后验概率的期望为 ![六、先验分布与后验分布 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144541.svg)
   - 如果将 ![六、先验分布与后验分布 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144545.svg) 视为先验的好苹果数量， ![六、先验分布与后验分布 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144548.svg) 视为先验的坏苹果数量， ![六、先验分布与后验分布 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144551.svg) 表示箱子中苹果的数量， ![六、先验分布与后验分布 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144555.svg) 表示箱子中的好苹果数量（相应的， ![六、先验分布与后验分布 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144558.svg) 就是箱子中坏苹果的数量）。则：好苹果的先验概率分布的期望、后验概率分布的期望符合人们的生活经验。
   - 这里使用先验分布和后验分布的期望，因为 ![六、先验分布与后验分布 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144607.svg) 是一个随机变量。若想通过一个数值来刻画好苹果的可能性，则用期望较好。

6. 更一般的，如果苹果不仅仅分为好、坏两种，而是分作`尺寸1、尺寸2、...尺寸K`等。则 ![六、先验分布与后验分布 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144613.svg) 个苹果中，有 ![六、先验分布与后验分布 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144618.svg) 个尺寸1的苹果、 ![六、先验分布与后验分布 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144625.svg) 个尺寸2的苹果….![六、先验分布与后验分布 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/534c29ab3c44fff321b09444753881a2.svg) 个尺寸 ![六、先验分布与后验分布 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144629.svg) 的苹果的概率服从多项式分布：

   ![六、先验分布与后验分布 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144633.svg)

   其中苹果为尺寸1的概率为 ![六、先验分布与后验分布 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144637.svg)， 尺寸2的概率为 ![六、先验分布与后验分布 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144640.svg) ，… 尺寸 ![六、先验分布与后验分布 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144643.svg) 的概率为 ![六、先验分布与后验分布 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144647.svg) ， ![六、先验分布与后验分布 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144651.svg)

   - 假设苹果尺寸的先验概率分布为狄利克雷分布：![六、先验分布与后验分布 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144655.svg) 。

     苹果尺寸的先验概率分布的期望为：![六、先验分布与后验分布 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144659.svg) 。

   - 则苹果尺寸的后验概率分布也为狄里克雷分布：![六、先验分布与后验分布 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144702.svg) 。

     苹果尺寸的后验概率分布的期望为：![六、先验分布与后验分布 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144706.svg) 。