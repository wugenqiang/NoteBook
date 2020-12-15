# Anaconda 入门指南

## 一、下载安装 Anaconda

1、下载地址：[Anaconda](https://www.anaconda.com/products/individual)

![image-20200528104813205](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200528104836.png)

推荐下载 python3 版本, 毕竟未来 python2 是要停止维护的。

![image-20200528105149268](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200528105150.png)

2、安装 Anaconda

按照安装程序提示一步步安装就好了, 安装完成之后会多几个应用：

* **Anaconda Navigtor** ：用于管理工具包和环境的图形用户界面，后续涉及的众多管理命令也可以在 Navigator 中手工实现。
* **Jupyter notebook** ：基于 web 的交互式计算环境，可以编辑易于人们阅读的文档，用于展示数据分析的过程。
* **qtconsole** ：一个可执行 IPython 的仿终端图形界面程序，相比 Python Shell 界面，qtconsole 可以直接显示代码生成的图形，实现多行代码输入执行，以及内置许多有用的功能和函数。
* **spyder** ：一个使用 Python 语言、跨平台的、科学运算集成开发环境。

## 二、配置环境变量

如果是 windows 的话需要去 `控制面板\系统和安全\系统\高级系统设置\环境变量\用户变量\PATH` 中添加 anaconda 的安装目录的 Scripts 文件夹，比如我的路径是`D:\developer_tools\python3\Anaconda3\Scripts`，看个人安装路径不同需要自己调整。

![image-20200528110347519](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200528110349.png)

之后就可以打开命令行(最好用管理员模式打开) 输入 `conda --version`

如果输出`conda 4.8.2`之类的就说明环境变量设置成功了。

![image-20200528111112375](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200528111113.png)

为了避免可能发生的错误，我们在命令行输入`conda upgrade --all` 先把所有工具包进行升级。

## 三、管理虚拟环境

接下来我们就可以用 Anaconda 来创建我们一个个独立的 Python 环境了。接下来的例子都是在命令行操作的，请打开你的命令行吧。

### 1. activate

activate 能将我们引入 anaconda 设定的虚拟环境中，如果你后面什么参数都不加那么会进入 anaconda 自带的 base 环境。

你可以输入 python 试试，这样会进入 base 环境的 python 解释器，如果你把原来环境中 python 环境去除掉会更能体会到， 这个时候在命令行中使用的已经不是你原来的 python 而是 base 环境下的 python。而命令行前面也会多一个`(base)` 说明当前我们处于的是 base 环境下。

![image-20200528120615920](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200528120616.png)

### 2. 与 pycharm 连接

在工作环境中我们会集成开发环境去编码，这里推荐 JB 公司的 pycharm，而 pycharm 也能很方便的和 anaconda 的虚拟环境结合。

在`Setting => Project => Project Interpreter` 里面修改 Project Interpreter , 点击齿轮标志再点击 Add Local 为你某个环境的 python.exe 解释器就行了。

## 四、使用 Jupyter notebook

> 方便检查数据

官网：[https://jupyter.org/](https://jupyter.org/)

![image-20200531132632083](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531132633.png)

启动 `Jupyter notebook`

![image-20200531180130207](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531180131.png)

然后会看到下面：

![image-20200531180154403](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531180155.png)

自动跳转打开 127.0.0.1:8888/

![image-20200531180526658](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531180527.png)

新建 Python3 进行代码编写：

![image-20200531180654772](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531180656.png)

然后跳转至下面页面：

![image-20200531180814664](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200531180816.png)

> 加速使用 Jupyter notebook

* [Jupyter - notebook 使用指南](Python/Jupyter-notebook使用指南.md)

接着进行遨游吧！



## 五、添加清华镜像至Anaconda仓库

运行以下命令，将清华镜像添加至Anaconda仓库中

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/

conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/

conda config --set show_channel_urls yes
```

`Conda` 是一个开源的软件包管理系统和环境管理系统，用于安装多个版本的软件包及其依赖关系，并在它们之间轻松切换。

### Conda Forge

`conda-forge`是可以安装软件包的附加渠道，为了建立和维护软件包而发起的。

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/conda-forge/
```

### msys2

MSYS2 （Minimal SYStem 2） 是一个MSYS的独立改写版本，主要用于 shell 命令行开发环境。

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/msys2/
```

### bioconda

BioConda是Conda专门为生信开的一条通道，里面有非常多的软件，可以直接安装。Bioconda的优点是安装简单，各个软件依赖的环境一同打包且相互隔离，非常适合在服务器中建立自己的生物信息分析环境。**后期更新，生信是重点！**

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/bioconda/
```

### menpo

menpo是python的一个程序包，使图片和网格数据的输入、处理、可视化尽可能的简单，适合处理带标注的数据。

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/menpo/
```

### pytorch

PyTorch是一个开源的Python机器学习库，基于Torch，用于自然语言处理等应用程序。

```shell
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/pytorch/
```

