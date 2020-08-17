# 第 3 章 Jupyter Notebook 和数据处理包的简单使用

## 3.1 Jupyter Notebook 的使用

### 3.1.1 基础

> 使用指南：[Jupyter Notebook 使用指南](Python/Jupyter-notebook使用指南)

下面写点指南里木有的，或者说还挺重要的对于机器学习而言：

### 3.1.2 高级之魔法命令

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

#### ① %run 加载单一脚本

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

#### ② 加载模块

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

#### ③ %timeit 

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

#### ④ %time

当我们不希望系统自动帮我们执行多次，只想执行一次，这个时候使用 `%time`

```python
%time L = [i**2 for i in range(1000)]
```

调试结果：

![image-20200727231855202](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200727231856.png)

## 3.2 Numpy 的使用

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

### 3.2.1 创建 numpy 数组和矩阵的方法

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

#### ① array

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

赋值：

```python
nparr[5] = 100
nparr
```

赋值的如果是浮点型，自动进行隐形转换，截位，留下整数类型

> 特有功能

* 查看数据类型

  ```python
  nparr.dtype
  ```

* 创建浮点型数据

  ```python
  nparr2 = np.array([1, 2, 3.0])
  nparr2.dtype
  ```

  ![image-20200731094921365](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731094922.png)



#### ② zeros

* 创建 0 数组或者 0 矩阵：

  ```python
  np.zeros(10) # array([0., 0., 0., 0., 0., 0., 0., 0., 0., 0.])
  ```

* 数组类型：

  ```python
  np.zeros(10).dtype # dtype('float64')
  ```

* 创建 10 个整数 0：

  ```python
  np.zeros(10, dtype = int) # array([0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
  ```

* 传入二维元组：

  ```python
  np.zeros((3, 5))
  ```

  ![image-20200731110040719](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731110044.png)

* 传入二维元组（定义数据类型 int）：

  ```python
  np.zeros(shape = (3, 5), dtype = int)
  ```

  ![image-20200731110219401](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731110220.png)

#### ③ ones

* 获得全 1 的向量或者矩阵：

  ```python
  np.ones(10) # array([1., 1., 1., 1., 1., 1., 1., 1., 1., 1.])
  ```

* 传入全 1 元组：

  ```python
  np.ones((3, 5))
  ```

  ![image-20200731110533661](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731110535.png)

#### ④ full

* 传入指定值的矩阵：

  ```python
  np.full((3, 5), 666)
  ```

  ![image-20200731111405991](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200731111406.png)

  加上参数名：

  ```python
  np.full(shape = (3, 5), fill_value = 666)
  ```

  或者：

  ```python
  np.full(fill_value = 666, shape = (3, 5))
  ```


#### ⑤ arange

* 生成 0 - 19 步长为 2 的数组：

  ```python
  [i for i in range(0, 20, 2)] # [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
  ```

* 使用 arange

  ```python
  np.arange(0, 20, 2) # array([ 0,  2,  4,  6,  8, 10, 12, 14, 16, 18])
  ```

!> 注意：range 不可以传入浮点数，但是 arange 可以：

```python
np.arange(0, 1, 0.2)
```

![image-20200801083538958](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200801083547.png)

* 不填写步长的时候，默认值为 1。

  ```python
  np.arange(0, 10) # array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
  ```

* 省略起始点：

  ```python
  np.arange(10) # array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
  ```

#### ⑥ linspace

* 在 0 - 20 （包括 0 和 20）之间均匀截出 10 个点

  ```python
  np.linspace(0, 20, 10)
  ```

  ![image-20200801100135286](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200801100139.png)

* 0 - 20 以 2 为步长：

  ```python
  np.linspace(0, 20, 11) # array([ 0.,  2.,  4.,  6.,  8., 10., 12., 14., 16., 18., 20.])
  ```

#### ⑦ random

随机数

* 生成 0 - 10 之间的随机数

  ```python
  np.random.randint(0, 10)
  ```

* 生成 10 个 0 - 10 之间的随机数，取不到 10

  ```python
  np.random.randint(0, 10, 10)
  ```

  使用的时候最好标识名称：

  ```python
  np.random.randint(4, 8, size = 10)
  ```

  size 可以取值元组：

  ```python
  np.random.randint(4, 8, size = (3, 5))
  ```

  ![image-20200801115312089](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200801115313.png)

* 使用随机种子保存随机数，使得其可复制，可重复：

  ```python
  np.random.seed(666)
  ```

  ![image-20200801115944772](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200801115945.png)

* 生成随机的浮点数，默认生成的是 0 - 1 之间的随机数

  ```python
  np.random.random()
  ```

* 生成 10 个随机浮点数，只需加参数：

  ```python
  np.random.random(10)
  ```

* 生成 3 行 5 列的随机浮点数矩阵：

  ```python
  np.random.random((3, 5))
  ```

* 希望生成符合正态分布的浮点数，均值为 0，方差为 1 的随机浮点数：

  ```python
  np.random.normal()
  ```

  传入参数，指定均值 10，方差 100：

  ```python
  np.random.normal(10, 100)
  ```

* 生成符合正态分布的浮点数，均值为 0，方差为 1 的随机浮点数，3 行 5 列：

  ```python
  np.random.normal(0, 1, (3, 5))
  ```

### 3.2.2 numpy 文档查询方法

举例：

* 查 random.normal 具体函数

  ```python
  np.random.normal?
  ```

* 查 random 具体模块

  ```python
  np.random?
  ```

* 或者使用 help 进行查看

  ```python
  help(np.random)
  ```

通过学习文档的方式，了解函数是如何使用的！🎫

### 3.2.3 Numpy.array 的基本操作

* 引入 numpy

  ```python
  import numpy as np
  ```

* 首先创建一维数组，0 - 9 步长为 1

  ```python
  x = np.arange(10)
  x
  ```

* 生成二维数组

  ```python
  X = np.arange(15).reshape(3, 5)
  X
  ```

  ![image-20200801134608467](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200801134609.png)


#### ① 基本属性

* 查看数组是几维数组：

  ```python
  x.ndim # 1 
  X.ndim # 2
  ```

* 返回元组使用 shape：

  ```python
  x.shape # (10,)
  X.shape # (3, 5)
  ```

* size： 表示元素个数

  ```python
  x.size # 10
  ```

#### ② 数据访问

* 查看元素

  ```python
  x # array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
  ```

* 访问某个元素：

  ```python
  x[0] # 0
  x[-1] # 9
  ```

> 查看二维以上矩阵中元素：（访问多维数组元素）

* 访问具体元素：

  ```python
  X[(0, 0)] # 0
  ```

  简化成这样来写：

  ```python
  X[0, 0] # 0
  ```

下面继续来进行数据访问操作：

* 访问 0 - 4 元素：

  ```python
  x[0:5] # array([0, 1, 2, 3, 4])
  ```

* 从头访问至第 5 个元素：

  ```python
  x[:5] # array([0, 1, 2, 3, 4])
  ```

* 从第 6 个元素开始到最后：

  ```python
  x[5:] # array([5, 6, 7, 8, 9])
  ```

* 从头访问到尾，步长为 2：

  ```python
  x[::2] # array([0, 2, 4, 6, 8])
  ```

* 前两行，前三列：

  ```python
  X[:2, :3]
  ```

  ![image-20200802134448581](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802134449.png)

* 取前两行，列步长为 2 取值：

  ```python
  X[:2, ::2]
  ```

  ![image-20200802135643584](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802135644.png)

* 矩阵反转：

  ```python
  X[::-1, ::-1]
  ```

  ![image-20200802141522171](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802141523.png)

* 取某一行

  ![image-20200802142045784](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802142047.png)

* 取某一列：

  ```python
  X[:, 0]
  ```

  ![image-20200802142816004](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802142817.png)

👒 注意：修改子矩阵中的元素，会影响原矩阵的值。

![image-20200802144037921](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802144038.png)

那么就想问一句，修改子矩阵中的元素，不影响原矩阵的值，怎么办呢？

```python
subX = X[:2, :3].copy()
subX
```

就可以了。

> Reshape

改变矩阵的维度

* 返回元组使用 shape：

  ```python
  x.shape # (10, )
  ```

* 查看维度

  ```python
  x.ndim # 1
  ```

* 变成 2 × 5 的矩阵：

  ```python
  x.reshape(2, 5)
  ```

  ![image-20200802150247287](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802150248.png)

* 存储这种改变，需要赋值：

  ```python
  A = x.reshape(2, 5)
  A
  ```

* 一维向量可以通过 1 × 10 的方式，修改成二维矩阵

  ![image-20200802151250438](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802151253.png)

* 得到 10 行矩阵

  ```python
  x.reshape(10, -1)
  ```

  ![image-20200802152219672](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802152220.png)

* 得到 10 列矩阵

  ```python
  x.reshape(-1, 10)
  ```

  ![image-20200802171549862](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802171550.png)

### 3.2.4 合并和分割

#### ① 合并

已知图中：

![image-20200802173609006](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802173611.png)

将 x, y 合并，获得 1 × 6 的向量：

```python
np.concatenate([x, y]) # array([1, 2, 3, 3, 2, 1])
```

当然也可以 3 个向量拼接：

![image-20200802173933635](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802173935.png)

尝试一下基于 2 维矩阵的拼接：（axis 默认值为 0，沿着第一维度的方向进行拼接）

![image-20200802174222857](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802174224.png)

沿着列的方向进行拼接：

```python
np.concatenate([A, A], axis = 1)
```

![image-20200802174640705](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802174642.png)

axis 为轴， 0 为 x 轴，1 为 y 轴。

注意：concatenate 只能处理维度一样的矩阵

除非 reshape(1, -1) 将一维向量变成二维矩阵

![image-20200802175156153](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200802175157.png)

使用 vstack 替换 concatenate，自动判断维数并进行容错处理：（在列的方向进行拼接堆叠）

```python
np.vstack([A, z])
```

![image-20200814090111612](https://gitee.com/wugenqiang/PictureBed/raw/master/images/01/20200814090112.png)

创建一个 2 × 2 的矩阵，全赋值为 100

```python
B = np.full((2, 2), 100)
B
```

将 A 和 B 在水平方向堆叠在一起

```python
np.hstack([A, B])
```

![image-20200814090657883](https://gitee.com/wugenqiang/PictureBed/raw/master/images/01/20200814090658.png)

#### ② 分割

* 创建一维数组 10 个元素

  ```python
  x = np.arange(10)
  x # array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
  ```

* 对 x 分割，指定两个分割点 3 和 7，分割三处

  ```python
  x1, x2, x3 = np.split(x, [3, 7])
  ```

  ![image-20200814091147578](https://gitee.com/wugenqiang/PictureBed/raw/master/images/01/20200814091148.png)

* 对整个数据切割成 2 段，比如说 5 作为分割点

  ```python
  x1, x2 = np.split(x, [5])
  ```

* 创建一个 4 × 4 的矩阵

  ```python
  A = np.arange(16).reshape((4, 4))
  ```

* 将 A 分割成 2 部分

  ```python
  A1, A2 = np.split(A, [2])
  ```

* 矩阵在列上分割：

  ```python
  A1, A2 = np.split(A, [2], axis = 1)
  ```

* 垂直方向进行分割成 2 部分：

  ```python
  upper, lower = np.vsplit(A, [2])
  ```

* 水平方向进行分割成 2 部分：

  ```python
  left, right = np.hsplit(A, [2])
  ```

🎨🎉 机器学习中使用数据分割：特征和标签

```python
X, y = np.hsplit(data, [-1])
```

![image-20200814095940125](https://gitee.com/wugenqiang/PictureBed/raw/master/images/01/20200814095941.png)

我们希望 y 是向量，采用下面方法：

```python
y[:, 0] # array([ 3,  7, 11, 15])
```

### 3.2.5 numpy.array 中的运算

给定一个向量，让向量中每一个数乘以 2，如下：

```python
a = (0, 1, 2)
a * 2 = (0, 2, 4)
```

运算如下：

* （1）获取数据

  ```python
  n = 10
  L = [i for i in range(n)]
  L # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  ```

* （2）数据处理

  ```python
  A = []
  for e in L:
      A.append(2*e)
  A # [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
  ```

  测试效率使用 `%%time`：

  ```python
  %%time
  A = []
  for e in L:
      A.append(2*e)
  A # [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
  ```

  如果数据量偏大，比如 n 取 1000000，将会提示：Wall time: 374 ms

  使用**生成表达式**看看：

  ```python
  %%time
  A = [2 * e for e in L]
  ```

  在 n 取 1000000 的情况下，Wall time: 201 ms，显然效率比 for 表达式高。

🎎 使用 numpy.array 

* 使用 arange 生成数据

  ```python
  import numpy as np
  L = np.arange(n)
  ```

* 使用 array 处理数据

  ```python
  A = np.array(2 * e for e in L)
  ```

  使用 numpy 会大大提升处理数据的效率。

  同时 numpy 支持这样写实现 2 倍，效率比生成表达式还要快。

  ```python
  A = 2 * L
  ```

!> 在 numpy 中将数组看成向量或者矩阵进行运算叫做 “Universal Functions”，近乎支持所有的运算符相应的运算。

* （1）支持加法、减法、乘法、除法

  ```python
  X = np.arange(1, 16).reshape((3, 5))
  ```

  ![运算](https://gitee.com/wugenqiang/PictureBed/raw/master/images/01/20200814172625.png)

  

