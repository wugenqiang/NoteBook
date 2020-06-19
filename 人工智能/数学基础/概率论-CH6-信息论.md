## 第 6 章 信息论

1. 信息论背后的原理是：从不太可能发生的事件中能学到更多的有用信息。

   - 发生可能性较大的事件包含较少的信息。
   - 发生可能性较小的事件包含较多的信息。
   - 独立事件包含额外的信息 。

2. 对于事件 ![七、信息论 - 图1](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200619125726.svg)，定义自信息`self-information`为：![七、信息论 - 图2](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0765b89cb443c6da2b05bfd48a4d5f90.svg) 。

   自信息仅仅处理单个输出，但是如果计算自信息的期望，它就是熵：

   ![七、信息论 - 图3](https://static.bookstack.cn/projects/huaxiaozhuan-ai/34c4e6e4d52b583ad3ae85903e593636.svg)

   记作 ![七、信息论 - 图4](https://static.bookstack.cn/projects/huaxiaozhuan-ai/acaea2c76adb8ce561aafad89201fbce.svg)。

   - 熵刻画了按照真实分布 ![七、信息论 - 图5](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) 来识别一个样本所需要的编码长度的期望（即平均编码长度）。

     如：含有4个字母 `(A,B,C,D)` 的样本集中，真实分布 ![七、信息论 - 图6](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0fa77e94bdb1be4c9b6e087a1fafd707.svg)，则只需要1位编码即可识别样本。

   - 对于离散型随机变量 ![七、信息论 - 图7](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg)，假设其取值集合大小为 ![七、信息论 - 图8](https://static.bookstack.cn/projects/huaxiaozhuan-ai/60daa0d3225b87be4b3e26d985d67db9.svg)，则可以证明： ![七、信息论 - 图9](https://static.bookstack.cn/projects/huaxiaozhuan-ai/73da28f120ed1934f2dd8baf50bf05cc.svg) 。

3. 对于随机变量 ![七、信息论 - 图10](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 和 ![七、信息论 - 图11](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg)，条件熵 ![七、信息论 - 图12](https://static.bookstack.cn/projects/huaxiaozhuan-ai/dafdcb5043f0bde07d9f6cd30d6357fb.svg) 表示：已知随机变量 ![七、信息论 - 图13](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的条件下，随机变量 ![七、信息论 - 图14](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的不确定性。

   它定义为：![七、信息论 - 图15](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 给定条件下 ![七、信息论 - 图16](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 的条件概率分布的熵对 ![七、信息论 - 图17](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 的期望：

   ![七、信息论 - 图18](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6c97873c31e765b397e54ca30ffb950f.svg)

   - 对于离散型随机变量，有：

     ![七、信息论 - 图19](https://static.bookstack.cn/projects/huaxiaozhuan-ai/273786a21ea1b9bd4319c7c30d9cb886.svg)

   - 对于连续型随机变量，有：

     ![七、信息论 - 图20](https://static.bookstack.cn/projects/huaxiaozhuan-ai/91abbdf196c8e70d73ef22793cd51a3d.svg)

4. 根据定义可以证明：![七、信息论 - 图21](https://static.bookstack.cn/projects/huaxiaozhuan-ai/feb68a2a70a56937cb24c6825fd4bac4.svg) 。

   即：描述 ![七、信息论 - 图22](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 和 ![七、信息论 - 图23](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 所需要的信息是：描述 ![七、信息论 - 图24](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 所需要的信息加上给定 ![七、信息论 - 图25](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg) 条件下描述 ![七、信息论 - 图26](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8c5c77d5bc29f14b899b04a83df49d34.svg) 所需的额外信息。

5. `KL`散度（也称作相对熵）：对于给定的随机变量 ![七、信息论 - 图27](https://static.bookstack.cn/projects/huaxiaozhuan-ai/8a2fadda07ccf6725f0c653b7e713016.svg)，它的两个概率分布函数 ![七、信息论 - 图28](https://static.bookstack.cn/projects/huaxiaozhuan-ai/5989f68c56769a531d6da7948618b745.svg) 和 ![七、信息论 - 图29](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ccdb8c0aed10de0aad1264f065a65008.svg) 的区别可以用 `KL`散度来度量：

   ![七、信息论 - 图30](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3f99467a6c8c50ca211d450a2dee3b6b.svg)

   - `KL`散度非负：当它为 0 时，当且仅当 `P`和`Q`是同一个分布（对于离散型随机变量），或者两个分布几乎处处相等（对于连续型随机变量）。

   - `KL`散度不对称：![七、信息论 - 图31](https://static.bookstack.cn/projects/huaxiaozhuan-ai/a5182200ae890116432b2c8f0bd8ddbe.svg) 。

     直观上看对于 ![七、信息论 - 图32](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e60a549af1d464b7831ceab285588c0e.svg) ，当 ![七、信息论 - 图33](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较大的地方， ![七、信息论 - 图34](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 也应该较大，这样才能使得 ![七、信息论 - 图35](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ab2ef24bec3b8bfa3b3000749dd26039.svg) 较小。

     对于 ![七、信息论 - 图36](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较小的地方， ![七、信息论 - 图37](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 就没有什么限制就能够使得 ![七、信息论 - 图38](https://static.bookstack.cn/projects/huaxiaozhuan-ai/ab2ef24bec3b8bfa3b3000749dd26039.svg) 较小。这就是`KL`散度不满足对称性的原因。

6. 交叉熵`cross-entropy`：![七、信息论 - 图39](https://static.bookstack.cn/projects/huaxiaozhuan-ai/f21c4c07367997a2f613d6bd0dd0400a.svg)。

   - 交叉熵刻画了使用错误分布![七、信息论 - 图40](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ffb9d09d6c69d2a0630242a4e8f2746.svg) 来表示真实分布 ![七、信息论 - 图41](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) 中的样本的平均编码长度。
   - ![七、信息论 - 图42](https://static.bookstack.cn/projects/huaxiaozhuan-ai/0ab31ebe09d558908c6126520e024abd.svg) 刻画了错误分布![七、信息论 - 图43](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ffb9d09d6c69d2a0630242a4e8f2746.svg) 编码真实分布 ![七、信息论 - 图44](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) 带来的平均编码长度的增量。

7. 示例：假设真实分布 ![七、信息论 - 图45](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) 为混合高斯分布，它由两个高斯分布的分量组成。如果希望用普通的高斯分布 ![七、信息论 - 图46](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ffb9d09d6c69d2a0630242a4e8f2746.svg) 来近似 ![七、信息论 - 图47](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) ，则有两种方案：

   ![七、信息论 - 图48](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d3eb9ea97f4d3fd428d739398617975e.svg)

   ![七、信息论 - 图49](https://static.bookstack.cn/projects/huaxiaozhuan-ai/d68b632a3d8e25fce98b387399d6e923.jpeg)

   - 如果选择 ![七、信息论 - 图50](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3604a17b1310b016fff502072004e86d.svg)，则：

     - 当 ![七、信息论 - 图51](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较大的时候 ![七、信息论 - 图52](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 也必须较大 。如果 ![七、信息论 - 图53](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较大时 ![七、信息论 - 图54](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 较小，则 ![七、信息论 - 图55](https://static.bookstack.cn/projects/huaxiaozhuan-ai/7aa58ddb8c4387920fdb19e2cb3d3315.svg) 较大。
     - 当 ![七、信息论 - 图56](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较小的时候 ![七、信息论 - 图57](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 可以较大，也可以较小。

     因此 ![七、信息论 - 图58](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3604a17b1310b016fff502072004e86d.svg) 会贴近 ![七、信息论 - 图59](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 的峰值。由于 ![七、信息论 - 图60](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 的峰值有两个，因此 ![七、信息论 - 图61](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3604a17b1310b016fff502072004e86d.svg) 无法偏向任意一个峰值，最终结果就是 ![七、信息论 - 图62](https://static.bookstack.cn/projects/huaxiaozhuan-ai/3604a17b1310b016fff502072004e86d.svg) 的峰值在 ![七、信息论 - 图63](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 的两个峰值之间。

     ![七、信息论 - 图64](https://static.bookstack.cn/projects/huaxiaozhuan-ai/2c30431ab0d463ee8b682598d6e8ac09.png)

   - 如果选择 ![七、信息论 - 图65](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9502b5b757e467da4af6c55e26d03bd3.svg) ，则：

     - 当 ![七、信息论 - 图66](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较小的时候， ![七、信息论 - 图67](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 必须较小。如果![七、信息论 - 图68](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较小的时 ![七、信息论 - 图69](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 较大，则 ![七、信息论 - 图70](https://static.bookstack.cn/projects/huaxiaozhuan-ai/4773962c8de22fcf63e2e566d8d422f1.svg) 较大。
     - 当 ![七、信息论 - 图71](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 较大的时候，![七、信息论 - 图72](https://static.bookstack.cn/projects/huaxiaozhuan-ai/90803f0386d33e0475f23ef8e9886434.svg) 可以较大，也可以较小。

     因此 ![七、信息论 - 图73](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9502b5b757e467da4af6c55e26d03bd3.svg) 会贴近 ![七、信息论 - 图74](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 的谷值。最终结果就是 ![七、信息论 - 图75](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9502b5b757e467da4af6c55e26d03bd3.svg) 会贴合 ![七、信息论 - 图76](https://static.bookstack.cn/projects/huaxiaozhuan-ai/e48b881502b4f7464d301a3122bcdaf2.svg) 峰值的任何一个。

     ![七、信息论 - 图77](https://static.bookstack.cn/projects/huaxiaozhuan-ai/52b104fafb40bb65542d13478e4838eb.png)

   - 绝大多数场合使用 ![七、信息论 - 图78](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9b6a566fba6d37a97d01a04e2c22c886.svg) ，原因是：当用分布 ![七、信息论 - 图79](https://static.bookstack.cn/projects/huaxiaozhuan-ai/9ffb9d09d6c69d2a0630242a4e8f2746.svg) 拟合 ![七、信息论 - 图80](https://static.bookstack.cn/projects/huaxiaozhuan-ai/6163006160acd2828e986de02b180936.svg) 时我们希望对于常见的事件，二者概率相差不大。