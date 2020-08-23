## 1. Go 语言介绍

### 1.1 Go 语言的发展

Go 语言又称 Golang，起源于 2007 年，来自于谷歌内部的一个项目，于 2009 年正式对外发布。创始团队有三人，都是计算机界的大佬：

- Robert Griesemer：参与开发 Java HotSpot 虚拟机
- Rob Pike：Go 语言项目总负责人，贝尔实验室 Unix 团队成员，参与的项目包括 Plan 9，Inferno 操作系统和 Limbo 编程语言
- Ken Thompson：C 语言、Unix 和 Plan 9 的创始人之一

Go 语言是开源的，通过开源社区的力量得到了快速发展，越来越多的开发者开始使用 Go 语言。自 Go 语言发布以来，超过 200 名非谷歌员工贡献者对 Go 语言核心部分提交了超过 1000 个修改建议。在过去的 18 个月里，又有 150 开发者贡献了新的核心代码。

根据 TIOBE 2020 年 8 月份的编程语言排行榜，Go 语言位列第 11 位。

![TIOBE 2020 年 8 月份的编程语言排行榜](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/21/20200821170507.png)

国内也有很多大厂在用 Go 语言，包括腾讯、阿里、百度、B 站、知乎等，我们可以看到 Go 语言的潜力还是非常大 的。

### 1.2 Go 语言的特点

Go 语言的主要特点有：

> Go 是一门系统编程语言，由于它高性能，高并发，高开发效率的特性，特别适合开发 Web 服务器，存储集群和高性能分布式系统。

- 语法简洁

  Go 语言被誉为 **21 世纪的 C 语言**，可想而知，Go 语言的语法和 C 语言类似，都是 C 系的语言。但它又和 C 语言不一样，它结合了其他动态语言的特性，语法和结构上较 C 更加简练。

  Go 没有类和继承的概念，通过 interface 接口来实现多态，在语言体系复杂度上较 C / C++ 低了不少。

  Go 将 `++` 和 `--` 从运算符降级为语句，保留了指针，但默认阻止指针运算，一定程度上降低了出错的可能性。

  Go 仍采用花括号来区分代码块，但强制第一个花括号不能换行，第二个花括号必须换行；Go 语言中编写 `if` 和 `for` 等条件和控制语句时，可以省略括号；Go 语言单行语句末尾无需加分号；这些硬性编码要求虽然牺牲了一些自由度，但增强了代码的规范性。

- 静态语言

  Go 是一门静态强类型语言，和 python 、javascript 等动态语言不同，每个变量声明时必须指定类型，声明后就无法更改其类型。

  Go 和 C / C ++ 一样，需要经过编译才能运行，编译期间能帮我们发现更多的错误。

- 性能良好

  Go 语言性能良好，和 Java 是一个梯队的，比 python、php 等动态语言好很多。

  C++ 虽然性能优异，但编译速度较慢，Go 语言从设计之初，就考虑到了这个问题，因此 Go 语言的编译速度很快，常规项目编译只需数秒。

- 垃圾回收

  Go 和 Java 一样，自带垃圾回收，用户不需要手动释放指针，只需把重心关注在业务层面上即可。虽然 Go 的垃圾回收器现在还不完美，但每一个大版本的发布， Go 语言团队都在不断地改进垃圾回收算法。期待未来 Go 语言的垃圾回收能更上一层楼。

- 并发模型

  并发是 21 世纪编程的流行词，也是难题。而 Go 语言天生支持并发，Go 通过  `Goroutine` 类协程的方式来处理并发单元，同时通过 `channel` 来实现各个 `Goroutine` 之间的通信，将并发单元间的数据耦合拆解开来。在语法上无需关注回调和执行切换，让并发编程更加简单高效。

  并发是 Go 重要特性之一，弥补了现有编程语言并发方面的不足，也符合未来计算机向多处理器和多核心发展的趋势。

- 交叉编译

  Go 支持交叉编译，也就是跨平台编译，我们可以在 Windows上编译出能在 Linux 上运行的可执行文件。

  Go 在编译时会把所有运行时、依赖库打包到可执行文件内部，只需一个可执行文件即可部署，降低了代码泄露风险，简化了部署操作。

归纳起来就是**快速编译，高效执行，易于开发**。

### 1.3 Go 语言的不足

- 不支持函数重载和操作符重载
- 不支持隐式转换
- 非面向对象设计，不支持类和继承
- 不支持动态加载代码
- 不支持动态链接库
- 缺少系统的异常处理机制，通过 `recover` 和 `panic` 来代替异常机制
- 不支持静态变量

## 2. 安装 Go 语言

### 2.1 Windows 下安装 Go 语言

- 到  [Go 安装包下载](https://studygolang.com/dl) 下载 Windows 版本对应的安装包。

![image-20200822155047544](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822155209.png)

- 下载好之后，点击安装包安装。

  ![image-20200822161448729](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161451.png)

  ![image-20200822161517999](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161520.png)

  ![image-20200822161552262](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161554.png)

  ![image-20200822161623803](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161625.png)

  ![image-20200822161705703](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161710.png)

  ![image-20200822161846263](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822161847.png)

- 安装完成后，按住 Windows + R 键，输入 cmd ，点击确定进入 cmd 界面。

  ![image-20200822162037480](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822162039.png)

- 在 cmd 界面输入 `go version`，若能成功显示 go 的版本号，则表明安装成功。

  ![image-20200822162212336](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822162213.png)

### 2.1 Linux 下安装 Go 语言

- 打开终端，在终端输入 `wget -c https://studygolang.com/dl/golang/go1.15.linux-amd64.tar.gz`，下载 Go 语言安装包。

  ![image-20200822162740856](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822162743.png)

- 将安装包解压到 `/usr/local` ：

  ```shell
  sudo tar -zxvf go1.15.linux-amd64.tar.gz -C /usr/local
  ```

- 用 `vim` 打开 `~/.bashrc` 配置文件：

  ```shell
  vim ~/.bashrc
  ```

- 在配置文件中写入 Go 环境变量：

  将光标移动到文件末尾，然后按下 i 键，进入 INSERT 模式。

  ![image-20200822164708262](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822164709.png)

  写入 Go 环境变量相关内容，`GOROOT` 表示 Go 的安装路径，`PATH` 用于保存环境变量：

  ```shell
  export GOROOT=/usr/local/go
  export PATH=$PATH:$GOROOT/bin
  ```

  接下来保存文件，先按 Esc 键退出 INSERT 模式，然后输入 `:wq` ，最后按 Enter 按键即保存成功。

  ![image-20200822165238575](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822165240.png)

- 在终端输入 `source ~/.bashrc` ，使得环境变量生效。

  ![image-20200822165407845](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822165409.png)

- 检查环境变量是否生效，在终端输入 `go version`，若出现版本号表明安装成功。

  ![image-20200822170118205](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/8/22/20200822170119.png)