# 第 3 章 Jupyter Notebook 和数据处理包的简单使用

## 3.1 Jupyter Notebook 基础

> 使用指南：[Jupyter Notebook 使用指南](Python/Jupyter-notebook使用指南)

下面写点指南里木有的，或者说还挺重要的对于机器学习而言：

## 3.2 Jupyter Notebook 高级之魔法命令

查看所有魔法命令：

```python
%lsmagic
```

![image-20200727232658738](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727232659.png)

看魔法命令文档方式如下：`%命令？`

```python
%run?
```

![image-20200727232840768](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727232841.png)

### 3.2.1 %run 加载单一脚本

将下面代码写入 py 文件 hello.py

```python
def hello(name):
    print("Hello", name, "!")

hello("Machine Learning")
```

然后使用相对地址调用它，便很容易得到结果：

```python
%run ./hello.py
```

!> 当然，直接将代码运行也可以，下面给出两种运行方式的调试结果：

![image-20200727224806939](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727224808.png)

> 注意：后续学习的过程中肯定会有很多机器学习的算法，我们有可能会将这些算法打成一个包，做成一个模块，如何加载进一个模块呢？

### 3.2.2 加载模块

* 在文件夹下，生成 `__init__.py` 空文件，这是最快将文件夹变成模块的方式

  ![image-20200727225650445](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727225651.png)

> 如何调用呢？

* 方式一：

```python
import mymodule.hello

mymodule.hello.hello("wugenqiang")
```

调试结果：

![image-20200727225949608](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727225950.png)

* 方式二：

```python
from mymodule import hello

hello.hello("wugenqiang")
```

调试结果：

![image-20200727230404801](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727230406.png)

### 3.2.3 %timeit 

> 这是用来帮助我们测试代码的性能的

```python
%timeit L = [i**2 for i in range(1000)]
```

调试结果：

![image-20200727230924998](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727230926.png)

如果测试一段程序的运行效率，使用：

```python
%%timeit
L = []
for n in range(1000):
    L.append(n ** 2)
```

%% 称为区域命令符

调试结果：

![image-20200727231421891](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727231423.png)

### 3.2.4 %time

当我们不希望系统自动帮我们执行多次，只想执行一次，这个时候使用 `%time`

```python
%time L = [i**2 for i in range(1000)]
```

调试结果：

![image-20200727231855202](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727231856.png)

## 3.3 Numpy 数据基础

