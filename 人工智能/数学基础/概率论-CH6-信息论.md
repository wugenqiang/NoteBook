## 第 6 章 信息论

1. 信息论背后的原理是：从不太可能发生的事件中能学到更多的有用信息。

   - 发生可能性较大的事件包含较少的信息。
   - 发生可能性较小的事件包含较多的信息。
   - 独立事件包含额外的信息 。

2. 对于事件 ![七、信息论 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125726.svg)，定义自信息`self-information`为：![七、信息论 - 图2](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144728.svg) 。

   自信息仅仅处理单个输出，但是如果计算自信息的期望，它就是熵：

   ![七、信息论 - 图3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144731.svg)

   记作 ![七、信息论 - 图4](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144734.svg)。

   - 熵刻画了按照真实分布 ![七、信息论 - 图5](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144737.svg) 来识别一个样本所需要的编码长度的期望（即平均编码长度）。

     如：含有4个字母 `(A,B,C,D)` 的样本集中，真实分布 ![七、信息论 - 图6](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144742.svg)，则只需要1位编码即可识别样本。

   - 对于离散型随机变量 ![七、信息论 - 图7](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144746.svg)，假设其取值集合大小为 ![七、信息论 - 图8](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144750.svg)，则可以证明： ![七、信息论 - 图9](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144753.svg) 。

3. 对于随机变量 ![七、信息论 - 图10](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144756.svg) 和 ![七、信息论 - 图11](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144800.svg)，条件熵 ![七、信息论 - 图12](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144803.svg) 表示：已知随机变量 ![七、信息论 - 图13](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144806.svg) 的条件下，随机变量 ![七、信息论 - 图14](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144810.svg) 的不确定性。

   它定义为：![七、信息论 - 图15](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144814.svg) 给定条件下 ![七、信息论 - 图16](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144817.svg) 的条件概率分布的熵对 ![七、信息论 - 图17](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144821.svg) 的期望：

   ![七、信息论 - 图18](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144824.svg)

   - 对于离散型随机变量，有：

     ![七、信息论 - 图19](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144827.svg)

   - 对于连续型随机变量，有：

     ![七、信息论 - 图20](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144830.svg)

4. 根据定义可以证明：![七、信息论 - 图21](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144834.svg) 。

   即：描述 ![七、信息论 - 图22](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144838.svg) 和 ![七、信息论 - 图23](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144841.svg) 所需要的信息是：描述 ![七、信息论 - 图24](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144844.svg) 所需要的信息加上给定 ![七、信息论 - 图25](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144847.svg) 条件下描述 ![七、信息论 - 图26](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144851.svg) 所需的额外信息。

5. `KL`散度（也称作相对熵）：对于给定的随机变量 ![七、信息论 - 图27](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144854.svg)，它的两个概率分布函数 ![七、信息论 - 图28](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144858.svg) 和 ![七、信息论 - 图29](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144901.svg) 的区别可以用 `KL`散度来度量：

   ![七、信息论 - 图30](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144905.svg)

   - `KL`散度非负：当它为 0 时，当且仅当 `P`和`Q`是同一个分布（对于离散型随机变量），或者两个分布几乎处处相等（对于连续型随机变量）。

   - `KL`散度不对称：![七、信息论 - 图31](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144911.svg) 。

     直观上看对于 ![七、信息论 - 图32](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144914.svg) ，当 ![七、信息论 - 图33](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144917.svg) 较大的地方， ![七、信息论 - 图34](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144921.svg) 也应该较大，这样才能使得 ![七、信息论 - 图35](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144925.svg) 较小。

     对于 ![七、信息论 - 图36](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144928.svg) 较小的地方， ![七、信息论 - 图37](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144931.svg) 就没有什么限制就能够使得 ![七、信息论 - 图38](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144934.svg) 较小。这就是`KL`散度不满足对称性的原因。

6. 交叉熵`cross-entropy`：![七、信息论 - 图39](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144939.svg)。

   - 交叉熵刻画了使用错误分布![七、信息论 - 图40](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144944.svg) 来表示真实分布 ![七、信息论 - 图41](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144947.svg) 中的样本的平均编码长度。
   - ![七、信息论 - 图42](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144950.svg) 刻画了错误分布![七、信息论 - 图43](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144953.svg) 编码真实分布 ![七、信息论 - 图44](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619144956.svg) 带来的平均编码长度的增量。

7. 示例：假设真实分布 ![七、信息论 - 图45](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145001.svg) 为混合高斯分布，它由两个高斯分布的分量组成。如果希望用普通的高斯分布 ![七、信息论 - 图46](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145007.svg) 来近似 ![七、信息论 - 图47](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145013.svg) ，则有两种方案：

   ![七、信息论 - 图48](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145020.svg)

   ![七、信息论 - 图49](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145024.jpeg)

   - 如果选择 ![七、信息论 - 图50](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145245.svg)，则：

     - 当 ![七、信息论 - 图51](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145249.svg) 较大的时候 ![七、信息论 - 图52](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145251.svg) 也必须较大 。如果 ![七、信息论 - 图53](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145254.svg) 较大时 ![七、信息论 - 图54](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145256.svg) 较小，则 ![七、信息论 - 图55](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145300.svg) 较大。
     - 当 ![七、信息论 - 图56](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145304.svg) 较小的时候 ![七、信息论 - 图57](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145307.svg) 可以较大，也可以较小。

     因此 ![七、信息论 - 图58](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145310.svg) 会贴近 ![七、信息论 - 图59](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145314.svg) 的峰值。由于 ![七、信息论 - 图60](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145317.svg) 的峰值有两个，因此 ![七、信息论 - 图61](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145322.svg) 无法偏向任意一个峰值，最终结果就是 ![七、信息论 - 图62](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145326.svg) 的峰值在 ![七、信息论 - 图63](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145329.svg) 的两个峰值之间。

     ![七、信息论 - 图64](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145333.png)

   - 如果选择 ![七、信息论 - 图65](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145338.svg) ，则：

     - 当 ![七、信息论 - 图66](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145341.svg) 较小的时候， ![七、信息论 - 图67](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145344.svg) 必须较小。如果![七、信息论 - 图68](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145346.svg) 较小的时 ![七、信息论 - 图69](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145348.svg) 较大，则 ![七、信息论 - 图70](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145351.svg) 较大。
     - 当 ![七、信息论 - 图71](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145354.svg) 较大的时候，![七、信息论 - 图72](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145357.svg) 可以较大，也可以较小。

     因此 ![七、信息论 - 图73](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145400.svg) 会贴近 ![七、信息论 - 图74](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145403.svg) 的谷值。最终结果就是 ![七、信息论 - 图75](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145406.svg) 会贴合 ![七、信息论 - 图76](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145409.svg) 峰值的任何一个。

     ![七、信息论 - 图77](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145415.png)

   - 绝大多数场合使用 ![七、信息论 - 图78](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145424.svg) ，原因是：当用分布 ![七、信息论 - 图79](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145430.svg) 拟合 ![七、信息论 - 图80](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619145433.svg) 时我们希望对于常见的事件，二者概率相差不大。

