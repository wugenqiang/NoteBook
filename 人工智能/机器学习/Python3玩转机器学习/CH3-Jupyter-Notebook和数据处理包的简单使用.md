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

* （1）加载 numpy

  ```python
  import numpy
  ```

* （2）查看 numpy 版本号

  ```python
  numpy.__version__
  ```

* （3）给 numpy 起别名，比如 np，接下来就可以使用 np 代替 numpy 进行使用

  ```python
  import numpy as np
  ```

  ![image-20200729110855394](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200729110856.png)

### 3.3.1 numpy.array 基础

> 回顾一下 list 的使用：

举例：

* （1）使用生成表达式创建一个 0 - 9 的列表：

  ```python
  L = [i for i in range(10)]
  L
  ```

* （2）访问其中某一个元素

  ```python
  L[5]
  ```

* （3）给其中某一个元素赋值，list 对元素类型没有限制

  ```python
  L[5] = 100
  L
  ```

  也可以赋值这样的字符串类型：

  ```python
  L[5] = "Machine Learning"
  L
  ```

  ![image-20200729112328248](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200729112329.png)

> 那如果限定，只能存储一种数据类型呢，咋办呢？使用 array 数组！

* （1）加载 array 模块

  ```python
  import array
  ```

* （2）创建 arr 变量，进行初始化

  ```python
  arr = array.array('i', [i for i in range(10)])
  arr
  ```

  ![image-20200729112733995](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200729112735.png)

  说明：array.array(数据类型, 数据)

* （3）获取元素

  ```python
  arr[5]
  ```

* (4）赋值

  ```python
  arr[5] = 100
  arr
  ```

  此时，就不能再赋其他类型的值了：
  
  ![image-20200731080052641](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731080053.png)

> 进入到 numpy.array

```python
import numpy as np
nparr = np.array([i for i in range(10)])
nparr
```

查看元素：

```python
nparr[5]
```

