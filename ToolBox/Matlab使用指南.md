# Matlab 使用指南

MATLAB 是一种高级语言和交互式环境，全世界数以百万计的工程师和科学家都在使用它。它能够探索和可视化想法，并在各个领域进行协作，包括信号和图像处理，通信，管理系统和金融工程等等。

**提示：MATLAB 可多版本共存，安装包文件不要放在中文命名文件夹内！**

## 一、功能概述

- 执行各种复杂的数学计算和繁重的工作
- 用于管理代码，文件和数据的开发环境
- 探索实现此解决方案的方法
- 各种数学函数，用于线性代数，统计，傅立叶分析，优化，滤波，数值积分…
- 绘制二维和三维图形函数以将数据可视化
- 使用 C ++，C 或 Java 编程语言设计和构建用户界面
- 能够测试和测量确切的功能和图形
- 通信信号处理，图像和视频的可能性

- 电信，控制，模糊，估计，统计，数据收集，模拟系统，

## 二、安装要求

- 操作系统 64 位：

  Windows 10 

  Windows 7 Service Pack 1 

  Windows Server 2016 

  Windows Server 2019

- CPU：

  最低：任何 Intel 或 AMD x64 处理器

  推荐任何具有四个逻辑核心和 AVX2 指令集

  支持的 Intel 或 AMD x64 处理器

- 磁盘：

  最小：仅 2 GB的 HDD 空间仅用于 MATLAB，典型安装为 4-6 GB

  推荐：建议使用 SSD 完整安装所有 MathWorks 产品可能会占用 31GB 的磁盘空间

- 内存：

  最低：4 GB

  推荐：8 GB

- GPU：

  不需要特定的图形卡。

  建议使用硬件加速的图形卡，该图形卡支持OpenGL 3.3和1GB GPU内存。

  使用 Parallel Computing Toolbox 进行 GPU 加速需要 CUDA GPU

  对于 Polyspace，建议每个内核 4 GB

- 注意：

  从R2020a 开始支持

  Windows Server 2019-从 R2020a 开始不支持 Windows Server 2012 和 Windows Server 2012 R2。对于 Polyspace，建议每个内核4 GB



## 三、软件安装

前言：这里之所以要安装最新的 2020 版本，是因为 matlab 中的硬件支持工具是随着版本变化而变化的，所以要升级 matlab 版本

这里使用的是 MATLAB R2020a v9.8.0 中文版 64位

软件下载链接（天翼云盘）：
[https://cloud.189.cn/t/U3MjimIFbYzu](https://cloud.189.cn/t/U3MjimIFbYzu)

在文件替换那一步容易出现问题，仔细查看安装教程。

### 3.1 下载解压后打开 R2020a 文件夹

重要提示：安装包不要放在中文命名的文件夹下！

![image-20200703112533270](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703112554.png)

### 3.2 运行 setup

右键以管理员身份运行 setup

![image-20200703112747567](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703112748.png)

### 3.3 右上角下拉高级选项

**选择我有文件安装密钥**

![image-20200703112910191](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703112911.png)

### 3.4 勾选接受，点击下一步

![image-20200703113004691](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113005.png)

### 3.5 输入密钥

```
09806-07443-53955-64350-21751-41297
```

![image-20200703113131342](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113132.png)

### 3.6 点击浏览

![image-20200703113228070](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113229.png)



### 3.7 选择 crack 文件下的 license_standalone.lic

![image-20200703113415773](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113416.png)

点击下一步

![image-20200703113449347](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113450.png)

### 3.8 修改安装位置，点击下一步（30GB空间）

![image-20200703113634549](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113635.png)



### 3.9 选择产品点击下一步

小编默认安装全部，小伙伴可根据需求安装

![image-20200703113739997](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113741.png)

### 3.10 勾选添加快捷方式，点击下一步

![image-20200703113811025](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113811.png)

### 3.11 开始安装

点击开始安装

![image-20200703113848833](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703113850.png)

开始安装，耐心等待，四十分钟左右...

![image-20200703114355274](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703114356.png)



安装完成，点击关闭

![image-20200703153449013](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703153450.png)



### 3.12 打开 crack 文件夹

复制其下的 R2020a 里的 bin 文件夹至安装目录进行替换

![image-20200703153733097](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703153734.png)

### 3.13 发送快捷方式

此步骤自行查看桌面是否有快捷方式，如没有执行如下操作。再次打开软件安装目录，打开 bin 文件夹，右键发送快捷方式至桌面

![image-20200703153943106](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703153944.png)

### 3.14 打开软件

![image-20200703154330909](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703154332.png)

主页面：

![image-20200703154549110](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703154550.png)