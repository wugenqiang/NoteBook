# 第一章 Python 基础

> Python 非常适合初学者用来进入计算机编程领域。Python 属于非常高级的语言，掌握了这门高级语言，就对计算机编程的核心思想——抽象有了初步理解。如果希望继续深入学习计算机编程，可以学习 Java、C、JavaScript、Lisp 等不同类型的语言，只有多掌握不同领域的语言，有比较才更有收获。

![Python3](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611064140.png)



## 1.1 环境准备

### 1.1.1 Python 安装

（1）官网下载 Python

进入官网（[https://www.python.org](https://www.python.org/)），点击 Downloads，选择要下载的版本：

![image-20200517223148826](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223149.png)

（2）安装 Python

安装时注意下图勾选部分一定要勾选：

![image-20200517223527044](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223528.png)



### 1.1.2 安装代码编辑器 PyCharm

（1）官网下载 PyCharm

进入官网（[https://www.jetbrains.com/pycharm](https://www.jetbrains.com/pycharm/)），点击 Downloads，选择要下载的版本：

![image-20200517223348661](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223349.png)

（2）安装 PyCharm

设置安装路径之后，一直点 next 即可。

![image-20200517224622654](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517224624.png)

（3）优化 PyCharm 使用

* [PyCharm 优化使用](Python/PyCharm优化使用.md)

### 1.1.3 安装 Jupyter notebook

数据分析，对我来说最好用的还是 Jupyter notebook

- **Jupyter notebook** ：基于 web 的交互式计算环境，可以编辑易于人们阅读的文档，用于展示数据分析的过程。

  

✨ 使用文档可参考我的笔记：[Jupyter - notebook 使用指南](Python/Jupyter-notebook使用指南)



> 观察一段 10 行 Python 代码，感受一下 Python 的风格：

```python
# 温度转换
# TempConvert.py
TempStr = input("请输入带有符号的温度值：")
if TempStr[-1] in ['F','f']:
  C = (eval(TempStr[0:-1]) - 32)/1.8
  print("转换后的温度是{:.2f}C".format(C))
elif TempStr[-1] in ['C','c']:
  F = 1.8*eval(TempStr[0:-1]) + 32
  print("转换后的温度是{:.2f}F".format(F))
else:
  print("输入格式错误！")
```

☎️ `eval()`去掉参数最外侧引号并执行余下语句的函数，称为“评估函数”。

![评估函数](https://gitee.com/wugenqiang/images/raw/master/01/image-20200921205039479.png)



> 程序的基本编写方法：`IPO`

* `I`：Input 输入，程序的输入
* `P`：Process 处理，程序的主要逻辑
* `O`：Output 输出，程序的输出

**编程解决问题的步骤**：

* （1）分析问题：分析问题的计算部分，想清楚
* （2）划分边界：划分问题的功能边界，规划 IPO
* （3）设计算法：设计问题的求解算法，关注算法
* （4）编写程序：编写问题的计算程序，编程序
* （5）调试测试：调试程序使正确运行，运行调试
* （6）升级维护：适应问题的升级维护，更新完善



## 1.2 第一个 Python 程序

### 1.2.1 HelloWorld

创建第一个项目 HelloWorld --> 创建文件 app.py --> 写入代码：

```python
print("HelloWorld")
```

效果图：

![image-20200517225658342](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517225659.png)

### 1.2.2 输入和输出

#### ① 输出

用 `print()` 在括号中加上字符串，就可以向屏幕上输出指定的文字。比如输出 `hello, world`，用代码实现如下：

```python
print('hello, world')
```

`print()` 函数也可以接受多个字符串，用逗号 “,” 隔开，就可以连成一串输出：

```python
print('The quick brown fox', 'jumps over', 'the lazy dog')
```

`print()` 会依次打印每个字符串，遇到逗号 “,” 会输出一个空格，因此，输出的字符串是这样拼起来的：

?> The quick brown fox jumps over the lazy dog

`print() `也可以打印整数，或者计算结果：

```python
print(300)
print('100 + 200 = ',100 + 200) # 输出 100 + 200 = 300
```

!> 注意，对于 `100 + 200`，Python 解释器自动计算出结果 `300`，但是，`'100 + 200 =' `是字符串而非数学公式，Python 把它视为字符串

#### ② 输入

Python 提供了一个 `input()`，可以让用户输入字符串，并存放到一个变量里。比如输入用户的名字：

```python
print('Input your name: ')
name = input()
print('Hello! ',name)
```

![image-20200610194537419](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200610194542.png)

我们也可以直接在 input 中显示一个字符串

```python
name = input('Input your name: ')
print('Hello! ',name)
```

![image-20200610194823007](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200610194824.png)

### 1.2.3 小结

任何计算机程序都是为了执行一个特定的任务，有了输入，用户才能告诉计算机程序所需的信息，有了输出，程序运行后才能告诉用户任务的结果。

输入是 Input，输出是 Output，因此，我们把输入输出统称为 Input / Output，或者简写为 IO。

`input()` 和 `print()` 是在命令行下面最基本的输入和输出，但是，用户也可以通过其他更高级的图形界面完成输入和输出，比如，在网页上的一个文本框输入自己的名字，点击 “确定” 后在网页上看到输出信息。

### 1.2.4 实例 1：温度转换

**设计算法**：根据华氏和摄氏温度定义，利用转换公式如下：
$$
C = (F - 32)/1.8
$$

$$
F = C*1.8 + 32
$$

其中，C 表示摄氏温度，F 表示华氏温度。

在前面，我给过温度转换的代码，如下：

```python
# TempConvert.py
TempStr = input("请输入带有符号的温度值：")
if TempStr[-1] in ['F','f']:
  C = (eval(TempStr[0:-1]) - 32)/1.8
  print("转换后的温度是{:.2f}C".format(C))
elif TempStr[-1] in ['C','c']:
  F = 1.8*eval(TempStr[0:-1]) + 32
  print("转换后的温度是{:.2f}F".format(F))
else:
  print("输入格式错误！")
```

> 🐹 现在看不懂没关系，有个印象就可以了，学习完下面 Python 基础，再回来瞧瞧就会更清晰啦！



## 1.3 Python 基础

Python 是一种计算机编程语言。计算机编程语言和我们日常使用的自然语言有所不同，最大的区别就是，自然语言在不同的语境下有不同的理解，而计算机要根据编程语言执行任务，就必须保证编程语言写出的程序决不能有歧义，所以，任何一种编程语言都有自己的一套语法，编译器或者解释器就是负责把符合语法的程序代码转换成 CPU 能够执行的机器码，然后执行。Python 也不例外。

Python 的语法比较简单，采用缩进方式，写出来的代码就像下面的样子：

```python
# print absolute value of an integer:
a = 100
if a >= 0:
    print(a)
else:
    print(-a)
```

以 `#` 开头的语句是注释，注释是给人看的，可以是任意内容，解释器会忽略掉注释。其他每一行都是一个语句，当语句以冒号`:`结尾时，缩进的语句视为代码块。

缩进有利有弊。好处是强迫你写出格式化的代码，但没有规定缩进是几个空格还是Tab。按照约定俗成的惯例，**应该始终坚持使用 4 个空格的缩进。**

缩进的另一个好处是强迫你写出缩进较少的代码，你会倾向于把一段很长的代码拆分成若干函数，从而得到缩进较少的代码。

缩进的坏处就是“复制－粘贴”功能失效了，这是最坑爹的地方。当你重构代码时，粘贴过去的代码必须重新检查缩进是否正确。此外，IDE 很难像格式化 Java 代码那样格式化 Python 代码。

最后，请务必注意，Python 程序是`大小写敏感`的，如果写错了大小写，程序会报错。

### 1.3.1 数据类型

**数据类型**：供计算机程序理解的`数据形式`

计算机顾名思义就是可以做数学计算的机器，因此，计算机程序理所当然地可以处理各种数值。但是，计算机能处理的远不止数值，还可以处理文本、图形、音频、视频、网页等各种各样的数据，不同的数据，需要定义不同的数据类型。在 Python 中，能够直接处理的数据类型有以下几种：

- 整数
- 浮点数
- 字符串
- 布尔值 True / False
- 空值 None
- 列表 list / tuple
- 字典 dict / set
- 自定义数据类型

#### ① 整数

Python 可以处理任意大小的整数，当然包括负整数，在程序中的表示方法和数学上的写法一模一样。

例如：`1`，`100`，`-8080`，`0`，等等。

计算机由于使用`二进制`，所以，有时候用十六进制表示整数比较方便，十六进制用 `0x` 前缀和 0 - 9， a - f 表示。

例如：`0xff00`，`0xa5b4c3d2`，等等。

#### ② 浮点数

浮点数也就是小数，之所以称为浮点数，是因为按照科学记数法表示时，一个浮点数的小数点位置是可变的，比如，1.23x10^9  和 12.3x10^8 是完全相等的。浮点数可以用数学写法，如 1.23，3.14，-9.01，等等。但是对于很大或很小的浮点数，就必须用科学计数法表示，把 10 用 e 替代， 1.23x10^9 就是 1.23e9，或者 12.3e8，0.000012 可以写成 1.2e-5，等等。

整数和浮点数在计算机内部存储的方式是不同的，整数运算永远是精确的（除法难道也是精确的？是的！），而浮点数运算则可能会有四舍五入的误差。

> 注意：

在 Python 中，有两种除法，一种除法是 `/` ：

```python
print(10 / 3)
# 输出 3.3333333333333335
```

`/` 除法计算结果是浮点数，即使是两个整数恰好整除，结果也是浮点数：

```python
print(9 / 3)
# 输出 3.0
```

还有一种除法是 `//`，称为地板除，两个整数的除法仍然是整数：

```python
print(10 // 3)
# 输出 3
```

你没有看错，整数的地板除 `//` 永远是整数，即使除不尽。要做精确的除法，使用 `/` 就可以。

因为 `//` 除法只取结果的整数部分，所以 Python 还提供一个余数运算，可以得到两个整数相除的余数：

```python
print(10 % 3)
# 输出 1
```

无论整数做 `//` 除法还是取余数，结果永远是整数，所以，整数运算结果永远是精确的。

#### ③ 字符串

**字符串**：由 0 个或多个字符组成的有序字符序列。

* 字符串是以单引号 `'` 或双引号 `"` 括起来的任意文本，比如 `'abc'`，`"xyz"` 等等。请注意，`''` 或 `""` 本身只是一种表示方式，不是字符串的一部分，因此，字符串 `'abc'` 只有 `a`，`b`，`c` 这3个字符。如果 `'` 本身也是一个字符，那就可以用 `""` 括起来，比如 `"I'm OK"` 包含的字符是 `I`，`'`，`m`， 空格，`O`，`K `这 6 个字符。
* 字符串是字符的有序序列，可以对其中的字符进行索引。

如果字符串内部既包含 `'` 又包含 `"` 怎么办？可以用转义字符 `\` 来标识，比如：

```python
'I\'m \"OK\"!'
```

表示的字符串内容是：

`I'm "OK"!`

转义字符 `\` 可以转义很多字符，比如 `\n` 表示换行，`\t` 表示制表符，字符 `\` 本身也要转义，所以 `\\` 表示的字符就是 `\`。

如果字符串里面有很多字符都需要转义，就需要加很多 `\`，为了简化，Python 还允许用 `r '...'` 表示，`'...'` 内部的字符串默认不转义，可以自己试试：

💬 示例代码：

```python
print('\\\t\\')
# 输出：\       \
print(r'\\\t\\')
# 输出：\\\t\\
```

如果字符串内部有很多换行，用 `\n` 写在一行里不好阅读，为了简化，Python 允许用 `'''...'''` 的格式表示多行内容，可以自己试试：

```python
print('''line1
line2
line3''')
```

效果：

![image-20200610222139397](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200610222140.png)

> 字符串的使用：

**使用 [] 获取字符串中一个或多个字符**

* 索引：返回字符串中单个字符 `<字符串>[M]`
* 切片：返回字符串中一段字符子串 `<字符串>[M:N]`



#### ④ 布尔值

布尔值和布尔代数的表示完全一致，一个布尔值只有 `True`、`False` 两种值，要么是 `True`，要么是 `False`，在 Python 中，可以直接用 `True`、`False` 表示布尔值（请注意大小写），也可以通过布尔运算计算出来：

```python
print(3 > 2)
print(3 > 5)
print(True)
print(False)
```

布尔值可以用 `and`、`or `和 `not` 运算。

`and` 运算是与运算，只有所有都为 `True`，`and `运算结果才是 `True`：

```python
print(True and True) # True
print(True and False) # False
print(False and False) # False
print(5 > 3 and 3 > 1) # True
```

`or `运算是或运算，只要其中有一个为 `True`，`or `运算结果就是 `True`：

```python
print(True or False) # True
print(5 < 3 or 1 > 3) # False
```

`not` 运算是非运算，它是一个单目运算符，把 `True` 变成 `False`，`False` 变成 `True`：

```python
print(not True) # False
print(not 1 > 3) # True
```

布尔值经常用在条件判断中，比如：

```python
age = int(input())
if age >= 18:
    print('adult')
else:
    print('teenager')
```

#### ⑤ 空值

空值是 Python 里一个特殊的值，用 `None` 表示。`None` 不能理解为 `0`，因为 `0` 是有意义的，而 `None` 是一个特殊的空值。

此外，Python 还提供了列表、字典等多种数据类型，还允许创建自定义数据类型，我们后面会继续讲到。

#### ⑥ 列表

##### Ⅰ 可变的有序列表 list [ ]

Python 内置的一种数据类型是列表：list，list 是一种有序的集合，可以随时`添加`和`删除`其中的元素。

* **创建**

比如，列出班里所有同学的名字，就可以用一个 list 表示：

```python
classmates = ['Michael','Bob','Tracy']
print(classmates) # 输出 ['Michael', 'Bob', 'Tracy']
```

变量 `classmates` 就是一个 list。用 `len() `函数可以获得 list 元素的个数：

```python
print(len(classmates)) # 输出 3
```

🚩 list 里面的元素的数据类型可以不同，比如：

```python
L = ['Apple', 123, True]
```

list 元素也可以是 另一个 list，比如：

```python
s = ['Python', 'Java', ['C', 'C++'], 'C#']
print(s) # ['Python', 'Java', ['C', 'C++'], 'C#']
print(len(s)) # 4
```

要注意 `s` 只有 4 个元素，其中 `s[2]` 又是一个 list，如果拆开写就更容易理解了：

```python
p = ['C', 'C++']
s = ['Python', 'Java', p, 'C#']
print(s) # ['Python', 'Java', ['C', 'C++'], 'C#']
print(len(s)) # 4
```

要拿到`'C++'`可以写 `p[1]` 或者 `s[2][1]`，因此 `s` 可以看成是一个二维数组，类似的还有三维、四维……数组，不过很少用到。

如果一个 list 中一个元素也没有，就是一个空的 list，它的长度为0：

```python
L = []
print(len(L)) # 0
```



* **访问**

用索引来访问 list 中每一个位置的元素，记得索引是从 `0` 开始的：

```python
classmates = ['Michael','Bob','Tracy']
print(classmates[0]) # 输出 Michael
```

当索引超出了范围时，Python 会报一个 `IndexError` 错误，所以，要确保索引不要越界，记得最后一个元素的索引是 `len(classmates) - 1`。

🚩 如果要取最后一个元素，除了计算索引位置外，还可以用 `-1` 做索引，直接获取最后一个元素：

```python
classmates = ['Michael','Bob','Tracy']
print(classmates[-1]) # 输出 Tracy
```

以此类推，可以获取倒数第 2 个、倒数第 3 个：

```python
classmates = ['Michael','Bob','Tracy']
print(classmates[-1]) # Tracy
print(classmates[-2]) # Bob
print(classmates[-3]) # Michael
```

* **插入**

list 是一个可变的有序表，所以，可以利用 `append` 往 list 中追加元素到末尾：

```python
classmates.append('WuGenQiang')
```

也可以利用 `insert` 把元素插入到指定的位置，比如索引号为`1`的位置：

```python
classmates.insert(1,'MengLinLin')
```

效果：

![image-20200611164619720](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611164620.png)

* **删除**

要删除 list 末尾的元素，用 `pop()` 方法：

```python
classmates.pop()
```

要删除指定位置的元素，用 `pop(i)` 方法，其中 `i` 是索引位置：

```python
classmates.pop(1)
```

效果：

![image-20200611165043478](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611165044.png)

* **替换**

要把某个元素替换成别的元素，可以直接赋值给对应的索引位置：

```python
classmates[1] = 'Oliver'
```

##### Ⅱ 不可变有序列表 - 元组 tuple ( )

另一种有序列表叫元组：tuple。tuple 和 list 非常类似，但是 tuple 一旦初始化就不能修改，比如同样是列出同学的名字：

```python
classmates = ('Michael', 'Bob', 'Tracy')
```

现在，classmates 这个 tuple 不能变了，它也没有 append()，insert() 这样的方法。其他获取元素的方法和 list 是一样的，你可以正常地使用 `classmates[0]`，`classmates[-1]`，但不能赋值成另外的元素。

!> 不可变的 tuple 有什么意义？因为 tuple 不可变，所以代码更安全。如果可能，能用 tuple 代替 list 就尽量用 tuple。

🚨 **tuple 的陷阱**：当你定义一个 tuple 时，在定义的时候，tuple 的元素就必须被确定下来，比如：

```python
t = (1, 2)
print(t) # (1, 2)
```

如果要定义一个空的 tuple，可以写成 `()`：

```python
t = ()
print(t) # ()
```

但是，要定义一个只有 1 个元素的 tuple，如果你这么定义：

```python
t = (1)
print(t) # 1
```

定义的不是 tuple，是 `1` 这个数！这是因为括号 `()` 既可以表示 tuple，又可以表示数学公式中的小括号，这就产生了歧义，因此，**Python 规定，这种情况下，按小括号进行计算**，计算结果自然是 `1`。

所以，**只有 1 个元素的 tuple 定义时必须加一个逗号`,`，来消除歧义**：

```python
t = (1,)
print(t) # (1,)
```

?> Python 在显示只有 1 个元素的 tuple 时，也会加一个逗  `,`，以免你误解成数学计算意义上的括号。

最后来看一个 **“可变的” tuple** ：

```python
t = ('a', 'b', ['A', 'B'])
t[2][0] = 'X'
t[2][1] = 'Y'
print(t) # ('a', 'b', ['X', 'Y'])
```

这个 tuple 定义的时候有 3 个元素，分别是`'a'`，`'b'`和一个 list。不是说 tuple 一旦定义后就不可变了吗？怎么后来又变了？

别急，我们先看看定义的时候 tuple 包含的 3 个元素：

![image-20200611170358099](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611170359.png)

当我们把 list 的元素 `'A'` 和 `'B'` 修改为 `'X' `和 `'Y'` 后，tuple 变为：

![image-20200611170515905](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611170516.png)

表面上看，tuple 的元素确实变了，但其实变的不是 tuple 的元素，而是 list 的元素。tuple 一开始指向的 list 并没有改成别的 list，所以，⭐ **tuple 所谓的 “不变” 是说，tuple 的每个元素，指向永远不变。即指向 `'a'`，就不能改成指向 `'b'`，指向一个 list，就不能改成指向其他对象，但指向的这个 list 本身是可变的！**

理解了 “指向不变” 后，要创建一个内容也不变的 tuple 怎么做？那就必须保证 tuple 的每一个元素本身也不能变。

#### ⑦ 字典

##### Ⅰ dict（key - value） { }

Python 内置了字典：dict 的支持，dict 全称 dictionary，在其他语言中也称为 map，使用键 - 值（key - value）存储，具有极快的查找速度。

* **创建**

示例代码：学生姓名和成绩

```python
d = {'Michael': 95, 'Bob': 75, 'Tracy': 85}
print(d) # {'Michael': 95, 'Bob': 75, 'Tracy': 85}
print(d['Michael']) # 95

print(d[0]) # KeyError: 0
```

为什么 dict 查找速度这么快？因为 dict 的实现原理和查字典是一样的。假设字典包含了 1 万个汉字，我们要查某一个字，一个办法是把字典从第一页往后翻，直到找到我们想要的字为止，这种方法就是在 list 中查找元素的方法，list 越大，查找越慢。

第二种方法是先在字典的索引表里（比如部首表）查这个字对应的页码，然后直接翻到该页，找到这个字。无论找哪个字，这种查找速度都非常快，不会随着字典大小的增加而变慢。

dict 就是第二种实现方式，给定一个名字，比如`'Michael'`，dict 在内部就可以直接计算出 `Michael` 对应的存放成绩的 “页码”，也就是 `95` 这个数字存放的内存地址，直接取出来，所以速度非常快。

把数据放入 dict 的方法，除了初始化时指定外，还可以通过 key 放入：

```python
d['Adam'] = 67
print(d['Adam']) # 67
print(d) # {'Michael': 95, 'Bob': 75, 'Tracy': 85, 'Adam': 67}
```

* **判断 value 是否存在**

由于一个 key 只能对应一个 value，所以，多次对一个 key 放入 value，后面的值会把前面的值冲掉：

```python
d['Adam'] = 67
print(d['Adam']) # 67
d['Adam'] = 97
print(d['Adam']) # 97
```

如果 key 不存在，dict 就会报错：`KeyError`。

![image-20200611172243031](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611172244.png)

要避免 key 不存在的错误，有两种办法，一是通过`in`判断 key 是否存在：

```python
print('Thomas' in d) # False
```

二是通过 dict 提供的 `get()` 方法，如果 key 不存在，可以返回 `None`，或者自己指定的 value：

```python
print(d.get('Thomas'))  # None
print(d.get('Thomas', -1))  # -1
```

* **删除**

要删除一个 key，用 `pop(key)` 方法，对应的 value 也会从 dict 中删除：

```python
d.pop('Bob')
```

!> 请务必注意，dict 内部存放的顺序和 key 放入的顺序是没有关系的。

⭐ 和 list 比较，dict 有以下几个特点：

- 查找和插入的速度极快，不会随着 key 的增加而变慢；
- 需要占用大量的内存，内存浪费多。

而 list 相反：

- 查找和插入的时间随着元素的增加而增加；
- 占用空间小，浪费内存很少。

所以，dict 是用空间来换取时间的一种方法。

dict 可以用在需要高速查找的很多地方，在 Python 代码中几乎无处不在，正确使用 dict 非常重要，需要牢记的第一条就是 dict 的 key 必须是**不可变对象**。

这是因为 dict 根据 key 来计算 value 的存储位置，如果每次计算相同的 key 得出的结果不同，那 dict 内部就完全混乱了。这个通过 key 计算位置的算法称为哈希算法（Hash）。

要保证 hash 的正确性，作为 key 的对象就不能变。在 Python 中，字符串、整数等都是不可变的，因此，可以放心地作为 key。而 list 是可变的，就不能作为 key：

![image-20200611173457932](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611173458.png)

##### Ⅱ set（key，且 key 不可重复） ([ \])

set 和 dict 类似，也是一组 key 的集合，但不存储 value。由于 key 不能重复，所以，在 set 中，没有重复的 key。

set 和 dict 的唯一区别仅在于没有存储对应的 value，但是，set 的原理和 dict 一样，所以，同样**不可以放入可变对象**，因为无法判断两个可变对象是否相等，也就无法保证 set 内部 “不会有重复元素”。

- **创建**

要创建一个 set，需要提供一个 list 作为输入集合：

```python
s = set([1, 2, 3])
print(s) # {1, 2, 3}
```

注意，传入的参数 `[1, 2, 3]` 是一个 list，而显示的 `{1, 2, 3}` 只是告诉你这个 set 内部有 1，2，3 这 3 个元素，显示的顺序也不表示 set 是有序的。

**重复元素在 set 中自动被过滤：**

```python
s = set([1, 1, 2, 2, 3, 3])
print(s) # {1, 2, 3}
```

* **添加**

通过 `add(key)` 方法可以添加元素到 set 中，可以重复添加，但不会有效果：

```python
s.add(4)
print(s) # {1, 2, 3, 4}
s.add(4)
print(s) # {1, 2, 3, 4}
```

* **删除**

通过 `remove(key)` 方法可以删除元素：

```python
s.remove(4)
print(s) # {1, 2, 3}
```

* **并集、交集操作**

set 可以看成数学意义上的无序和无重复元素的集合，因此，两个 set 可以做数学意义上的交集、并集等操作：

```python
s1 = set([1, 2, 3])
s2 = set([2, 3, 4])
print(s1 & s2) # {2, 3}
print((s1 | s2)) # {1, 2, 3, 4}
```

### 1.3.2 再议不可变对象

上面我们讲了，str 是不变对象，而 list 是可变对象。

对于可变对象，比如 list，对 list 进行操作，list 内部的内容是会变化的，比如：

```python
a = ['c', 'b', 'a']
a.sort()
print(a) # ['a', 'b', 'c']
```

而对于不可变对象，比如 str，对 str 进行操作呢：

```python
a = 'abc'
print(a.replace('a', 'A')) # 'Abc'
print(a) # 'abc'
```

虽然字符串有个 `replace()` 方法，也确实变出了 `'Abc'`，但变量 `a` 最后仍是 `'abc'`，应该怎么理解呢？

我们先把代码改成下面这样：

```python
a = 'abc'
b = a.replace('a', 'A')
print(b) # 'Abc'
print(a) # 'abc'
```

要始终牢记的是，`a` 是变量，而 `'abc'` 才是字符串对象！有些时候，我们经常说，对象 `a` 的内容是 `'abc'`，但其实是指，`a` 本身是一个变量，它指向的对象的内容才是 `'abc'`：

![image-20200611175123150](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611175124.png)

当我们调用 `a.replace('a', 'A')` 时，实际上调用方法 `replace` 是作用在字符串对象 `'abc'` 上的，而这个方法虽然名字叫 `replace`，但却没有改变字符串 `'abc'` 的内容。相反，`replace` 方法创建了一个新字符串 `'Abc'` 并返回，如果我们用变量 `b` 指向该新字符串，就容易理解了，变量 `a` 仍指向原有的字符串 `'abc'`，但变量 `b` 却指向新字符串 `'Abc'` 了：

![image-20200611175231653](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611175232.png)

所以，对于不变对象来说，调用对象自身的任意方法，也不会改变该对象自身的内容。相反，这些方法会创建新的对象并返回，这样，就保证了不可变对象本身永远是不可变的。

!> 小结

* 使用 key - value 存储结构的 dict 在 Python 中非常有用，选择不可变对象作为 key 很重要，最常用的 key 是字符串。
* tuple 虽然是不变对象，但试试把`(1, 2, 3)`和`(1, [2, 3])`放入 dict 或 set 中，就会有新发现。

### 1.3.3 变量与常量

#### ① 变量

**变量是用来保存和表示数据的占位符号。**变量采用标识符（名字）来表示，关联标识符的过程叫命名。比如实例 1：温度转换中的 TempStr 就是变量名字。

**命名规则**：大小写字母、数字、下划线`_`和汉字等字符及组合，且不能用数字开头

如：TempStr，Python_Great，这是门Python好课

🚨 注意点：大小写敏感、首字符不能是数字、不与保留字相同。

⛳️ 拓展：`保留字`

保留字：被编程语言内部定义并保留使用的标识符。

* Python 语言有 33 个保留字（也叫`关键字`），比如：if、elif、else、in
* 保留字是编程语言的基本单词，大小写敏感，比如：if 是保留字，If 是变量

**保留字**看下表：

![保留字](https://gitee.com/wugenqiang/images/raw/master/01/image-20200921190805393.png)



在 Python 中，等号 `=` 是赋值符号，可以把任意数据类型赋值给变量，同一个变量可以反复赋值，而且可以是不同类型的变量，例如：

```python
a = 123 # a是整数
print(a)
a = 'ABC' # a变为字符串
print(a)
a = True # a是一个布尔值True
print(a)
```

🚩 这种变量本身类型不固定的语言称之为 **动态语言 (Python、......)**，与之对应的是 **静态语言（Java、C++、......）**。静态语言在定义变量时必须指定变量类型，如果赋值的时候类型不匹配，就会报错。

例如 Java 是静态语言，赋值语句如下（// 表示注释）：

```java
int a = 123; // a是整数类型变量
a = "ABC"; // 错误：不能把字符串赋给整型变量
```

和静态语言相比，动态语言更灵活，就是这个原因。

请不要把赋值语句的等号等同于数学的等号。比如下面的代码：

```python
x = 10
x = x + 2
```

如果从数学上理解 `x = x + 2` 那无论如何是不成立的，在程序中，赋值语句先计算右侧的表达式 `x + 2`，得到结果 `12`，再赋给变量 `x`。由于 `x` 之前的值是 `10`，重新赋值后，`x` 的值变成 `12`。

最后，理解变量在计算机内存中的表示也非常重要。当我们写：

```python
a = 'ABC'
```

时，Python 解释器干了两件事情：

- 在内存中创建了一个 `'ABC'` 的字符串；
- 在内存中创建了一个名为 `a` 的变量，并把它指向 `'ABC'`。

🔥 也可以把一个变量 `a` 赋值给另一个变量 `b`，这个操作实际上是把变量 `b` 指向变量 `a` 所指向的数据，例如下面的代码：

```python
a = 'ABC'
b = a
a = 'XYZ'
print(b) # 输出 ABC
```

最后一行打印出变量 `b` 的内容到底是`'ABC'`呢还是`'XYZ'`？如果从数学意义上理解，就会错误地得出 `b` 和 `a` 相同，也应该是`'XYZ'`，但实际上 `b` 的值是 `'ABC'`，让我们一行一行地执行代码，就可以看到到底发生了什么事：

- 执行`a = 'ABC'`，解释器创建了字符串`'ABC'`和变量`a`，并把`a`指向`'ABC'`：

  ![img](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611180919.png)

- 执行`b = a`，解释器创建了变量`b`，并把`b`指向`a`指向的字符串`'ABC'`：

  ![img](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611180923.png)

- 执行`a = 'XYZ'`，解释器创建了字符串'XYZ'，并把`a`的指向改为`'XYZ'`，但`b`并没有更改：

  ![img](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200611180926.png)

- 所以，最后打印变量`b`的结果自然是`'ABC'`了。

#### ② 常量

所谓常量就是不能变的变量，比如常用的数学常数 π 就是一个常量：

```python
PI = 3.14159265359
```

在 Python 中，通常用`全部大写`的变量名表示常量。

但事实上 `PI` 仍然是一个变量，Python 根本没有任何机制保证 `PI` 不会被改变，所以，用全部大写的变量名表示常量只是一个习惯上的用法，如果你一定要改变变量 `PI` 的值，也没人能拦住你。

### 1.3.4 字符串和编码

#### ① 字符串编码问题

我们已经讲过了，字符串也是一种数据类型，但是，字符串比较特殊的是还有一个编码问题。

因为计算机只能处理数字，如果要处理文本，就必须先把文本转换为数字才能处理。最早的计算机在设计时采用 8 个比特（bit）作为一个字节（byte），所以，一个字节能表示的最大的整数就是 255（二进制 11111111 = 十进制 255），如果要表示更大的整数，就必须用更多的字节。比如两个字节可以表示的最大整数是`65535`，4 个字节可以表示的最大整数是`4294967295`。

由于计算机是美国人发明的，因此，最早只有 127 个字符被编码到计算机里，也就是大小写英文字母、数字和一些符号，这个编码表被称为`ASCII`编码，比如大写字母`A`的编码是`65`，小写字母`z`的编码是`122`。

但是要处理中文显然一个字节是不够的，至少需要两个字节，而且还不能和 ASCII 编码冲突，所以，中国制定了`GB2312`编码，用来把中文编进去。

你可以想得到的是，全世界有上百种语言，日本把日文编到`Shift_JIS`里，韩国把韩文编到`Euc-kr`里，各国有各国的标准，就会不可避免地出现冲突，结果就是，在多语言混合的文本中，显示出来会有乱码。

![image-20200623172824974](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623172826.png)

因此，Unicode 应运而生。**Unicode 把所有语言都统一到一套编码里，这样就不会再有乱码问题了。**

Unicode 标准也在不断发展，但最常用的是用两个字节表示一个字符（如果要用到非常偏僻的字符，就需要 4 个字节）。现代操作系统和大多数编程语言都直接支持 Unicode。

🚩 现在，捋一捋 ASCII 编码和 Unicode 编码的区别：**ASCII 编码是 1 个字节，而 Unicode 编码通常是 2 个字节。**

- 字母`A`用 ASCII 编码是十进制的`65`，二进制的`01000001`；
- 字符`0`用 ASCII 编码是十进制的`48`，二进制的`00110000`，注意字符`'0'`和整数`0`是不同的；
- 汉字`中`已经超出了 ASCII 编码的范围，用 Unicode 编码是十进制的`20013`，二进制的`01001110 00101101`。

你可以猜测，如果把 ASCII 编码的`A`用 Unicode 编码，只需要在前面补 0 就可以，因此，`A`的 Unicode 编码是`00000000 01000001`。

新的问题又出现了：如果统一成 Unicode 编码，乱码问题从此消失了。但是，如果你写的文本基本上全部是英文的话，用 Unicode 编码比 ASCII 编码需要`多一倍`的`存储空间`，在存储和传输上就十分不划算。

所以，本着节约的精神，又出现了把 Unicode 编码转化为 “可变长编码” 的`UTF-8`编码。UTF-8 编码把一个 Unicode 字符根据不同的数字大小编码成 1-6 个字节，常用的英文字母被编码成 1 个字节，汉字通常是 3 个字节，只有很生僻的字符才会被编码成 4-6 个字节。如果你要传输的文本包含大量英文字符，用 UTF-8 编码就能节省空间：

![image-20200623173834408](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623173835.png)

从上面的表格还可以发现，UTF-8 编码有一个额外的好处，就是 ASCII 编码实际上可以被看成是 UTF-8 编码的一部分，所以，大量只支持 ASCII 编码的历史遗留软件可以在 UTF-8 编码下继续工作。

搞清楚了 ASCII、Unicode 和 UTF-8 的关系，我们就可以总结一下现在计算机系统通用的字符编码工作方式：

🚩 **在计算机内存中，统一使用 Unicode 编码，当需要保存到硬盘或者需要传输的时候，就转换为 UTF-8 编码。**

用记事本编辑的时候，从文件读取的 UTF-8 字符被转换为 Unicode 字符到内存里，编辑完成后，保存的时候再把 Unicode 转换为 UTF-8 保存到文件：

![image-20200623174150679](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623174151.png)

浏览网页的时候，服务器会把动态生成的 Unicode 内容转换为 UTF-8 再传输到浏览器：

![image-20200623174254190](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623174255.png)

所以你看到很多网页的源码上会有类似 `<meta charset="UTF-8" />` 的信息，表示该网页正是用的 UTF-8 编码。

#### ② 字符串详解

搞清楚了令人头疼的字符编码问题后，我们再来研究 Python 的字符串。

在最新的 Python 3 版本中，字符串是以 Unicode 编码的，也就是说，**Python 的字符串支持多语言**，例如：

```python
print('包含中文的str')
# 输出：包含中文的str
```

对于单个字符的编码，Python 提供了`ord()`函数获取字符的整数表示，`chr()`函数把编码转换为对应的字符：

```python
ord('A') # 65
ord('中') # 20013
chr(66) # 'B'
chr(25991) # '文'
```

如果知道字符的整数编码，还可以用十六进制这么写`str`：

```python
print('\u4e2d\u6587') # 中文
```

两种写法完全是等价的。

由于 Python 的字符串类型是`str`，在内存中以 Unicode 表示，一个字符对应若干个字节。如果要在网络上传输，或者保存到磁盘上，就需要把`str`变为以字节为单位的`bytes`。

Python 对`bytes`类型的数据用带`b`前缀的单引号或双引号表示：

```python
x = b'ABC'
```

要注意区分`'ABC'`和`b'ABC'`，前者是`str`，后者虽然内容显示得和前者一样，但`bytes`的每个字符都只占用一个字节。

以 Unicode 表示的`str`通过`encode()`方法可以编码为指定的`bytes`，例如：

```python
print('ABC'.encode('ascii')) # b'ABC'
print('中文'.encode('utf-8')) # b'\xe4\xb8\xad\xe6\x96\x87'
```

纯英文的`str`可以用`ASCII`编码为`bytes`，内容是一样的，含有中文的`str`可以用`UTF-8`编码为`bytes`。**含有中文的`str`无法用`ASCII`编码**，因为中文编码的范围超过了`ASCII`编码的范围，Python 会报错。

反过来，如果我们从网络或磁盘上读取了字节流，那么读到的数据就是`bytes`。要把`bytes`变为`str`，就需要用`decode()`方法：

```python
print(b'ABC'.decode('ascii'))
print(b'\xe4\xb8\xad\xe6\x96\x87'.decode('utf-8'))
```

如果`bytes`中包含无法解码的字节，`decode()`方法会报错：

![image-20200623175618702](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623175619.png)

如果`bytes`中只有一小部分无效的字节，可以传入`errors='ignore'`忽略错误的字节：

![image-20200623175706636](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623175707.png)

要计算`str`包含多少个字符，可以用`len()`函数：

```python
print(len('ABC')) # 3
print(len('中文')) # 2
```

`len()`函数计算的是`str`的字符数，如果换成`bytes`，`len()`函数就计算字节数：

```python
print(len(b'ABC')) # 3
print(len(b'\xe4\xb8\xad\xe6\x96\x87')) # 6
print(len('中文'.encode('utf-8'))) # 6
```

可见，1 个中文字符经过 UTF-8 编码后通常会占用 3 个字节，而 1 个英文字符只占用 1 个字节。

> 🚨 在操作字符串时，我们经常遇到`str`和`bytes`的互相转换。为了避免乱码问题，应当始终坚持使用 UTF-8 编码对`str`和`bytes`进行转换。
>
> 由于 Python 源代码也是一个文本文件，所以，当你的源代码中包含中文的时候，**在保存源代码时，就需要务必指定保存为 UTF-8 编码**。当 Python 解释器读取源代码时，为了让它按 UTF-8 编码读取，我们通常在文件开头写上这两行：
>
> ```python
> #!/usr/bin/env python3
> # -*- coding: utf-8 -*-
> ```
>
> 第一行注释是为了告诉 Linux/OS X 系统，这是一个 Python 可执行程序，Windows 系统会忽略这个注释；
>
> 第二行注释是为了告诉 Python 解释器，按照 UTF-8 编码读取源代码，否则，你在源代码中写的中文输出可能会有乱码。

#### ③ 格式化

最后一个常见的问题是如何`输出格式化的字符串`。我们经常会输出类似`'亲爱的 xxx 你好！你 xx 月的话费是 xx，余额是 xx'`之类的字符串，而 xxx 的内容都是根据变量变化的，所以，需要一种简便的格式化字符串的方式。

![image-20200623180524717](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623180526.png)



在 Python 中，采用的格式化方式和 C 语言是一致的，用`%`实现，举例如下：

```python
print('Hello, %s' % 'world') # Hello, world
print('Hello, %s, you have %d money' %('WuGenQiang',100))
# Hello, WuGenQiang, you have 100 money
```

你可能猜到了，`%`运算符就是用来格式化字符串的。在字符串内部，`%s`表示用字符串替换，`%d`表示用整数替换，有几个`%?`占位符，后面就跟几个变量或者值，顺序要对应好。如果只有一个`%?`，括号可以省略。

常见的占位符有：

![image-20200623181028546](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200623181029.png)

其中，格式化整数和浮点数还可以指定是否补 0 和整数与小数的位数：

```python
print('%2d-%02d' % (3, 1)) #  3-01
print('%.2f' % 3.1415926) # 3.14
```

如果你不太确定应该用什么，`%s`永远起作用，它会把任何数据类型转换为字符串：

```python
print('Age: %s Gender: %s' % (25, True))
# 输出：Age: 25 Gender: True
```

有些时候，字符串里面的`%`是一个普通字符怎么办？这个时候就需要转义，用`%%`来表示一个`%`：

```python
print(‘growth rate: %d %%' % 7)
# 输出：'growth rate: 7 %'
```

#### ④ format()

另一种格式化字符串的方法是使用字符串的`format()`方法，它会用传入的参数依次替换字符串内的占位符`{0}`、`{1}`……，不过这种方式写起来比 % 要麻烦得多：

```python
print('Hello, {0}, 成绩提升了 {1:.1f}%'.format('小明', 17.125))
# 输出：Hello, 小明, 成绩提升了 17.1%
```

> ✏️ 练习题：

【题目】小明的成绩从去年的 72 分提升到了今年的 85 分，请计算小明成绩提升的百分点，并用字符串格式化显示出`'xx.x%'`，只保留小数点后 1 位：

```python
score1 = 72
score2 = 85
r = (score2 - score1) * 100 / score1
print('%.1f %%' %r)
```

### 1.3.5 条件判断

计算机之所以能做很多自动化的任务，因为它可以自己做`条件判断`。

比如，输入用户年龄，根据年龄打印不同的内容，在 Python 程序中，用`if`语句实现：

```python
age = 20
if age >= 18:
    print('your age is', age)
    print('adult')
```

根据 Python 的缩进规则，如果`if`语句判断是`True`，就把缩进的两行 print 语句执行了，否则，什么也不做。

也可以给`if`添加一个`else`语句，意思是，如果`if`判断是`False`，不要执行`if`的内容，去把`else`执行了：

```python
age = 3
if age >= 18:
    print('your age is', age)
    print('adult')
else:
    print('your age is', age)
    print('teenager')
```

!> 注意不要少写了冒号`:`。

当然上面的判断是很粗略的，完全可以用`elif`做更细致的判断：

```python
age = 3
if age >= 18:
    print('adult')
elif age >= 6:
    print('teenager')
else:
    print('kid')
```

`elif`是`else if`的缩写，完全可以有多个`elif`，所以`if`语句的完整形式就是：

```python
if <条件判断1>:
    <执行1>
elif <条件判断2>:
    <执行2>
elif <条件判断3>:
    <执行3>
else:
    <执行4>
```

⭐ `if`语句执行有个特点，它是从上往下判断，如果在某个判断上是`True`，把该判断对应的语句执行后，就忽略掉剩下的`elif`和`else`，所以，下面的程序打印的是`teenager`：

```python
age = 20
if age >= 6:
    print('teenager')
elif age >= 18:
    print('adult')
else:
    print('kid')
```

`if`判断条件还可以简写，比如写：

```python
if x:
    print('True')
```

只要`x`是非零数值、非空字符串、非空 list 等，就判断为`True`，否则为`False`。

> 再议 input

最后看一个有问题的条件判断。很多同学会用`input()`读取用户的输入，这样可以自己输入，程序运行得更有意思：

```python
birth = input('birth: ')
if birth < 2000:
    print('00前')
else:
    print('00后')
```

输入`1982`，结果报错：

```python
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: unorderable types: str() > int()
```

这是因为`input()`返回的数据类型是`str`，`str`不能直接和整数比较，必须先把`str`转换成整数。Python 提供了`int()`函数来完成这件事情：

```python
s = input('birth: ')
birth = int(s)
if birth < 2000:
    print('00前')
else:
    print('00后')
```

再次运行，就可以得到正确地结果。但是，如果输入`abc`呢？又会得到一个错误信息：

```python
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ValueError: invalid literal for int() with base 10: 'abc'
```

原来`int()`函数发现一个字符串并不是合法的数字时就会报错，程序就退出了。

如何检查并捕获程序运行期的错误呢？后面的错误和调试会讲到。

> ✏️ 练习题：

小明身高 1.75，体重 80.5kg。请根据 BMI 公式（体重除以身高的平方）帮小明计算他的 BMI 指数，并根据 BMI 指数：

- 低于 18.5 ：过轻
- 18.5-25 ：正常
- 25-28 ：过重
- 28-32 ：肥胖
- 高于 32 ：严重肥胖

用`if-elif`判断并打印结果：

```python
height = 1.75
weight = 80.5
bmi = weight / (height * height)
if bmi >= 32:
    print('严重肥胖')
elif bmi < 32 and bmi >= 28:
    print('肥胖')
elif bmi < 28 and bmi >= 25:
    print('过重')
elif bmi < 25 and bmi >= 18.5:
    print('正常')
else:
    print('过轻')
    pass
```

### 1.3.6 循环

要计算 1+2+3，我们可以直接写表达式：

```python
print(1 + 2 + 3) # 6
```

要计算 1+2+3+...+10，勉强也能写出来。

但是，要计算 1+2+3+...+10000，直接写表达式就不可能了。

为了让计算机能计算成千上万次的重复运算，我们就需要循环语句。

#### ① for ... in

Python 的循环有两种，一种是 `for...in` 循环，依次把 list 或 tuple 中的每个元素迭代出来，看例子：

```python
names = ['Michael', 'Bob', 'Tracy']
for name in names:
    print(name)
```

执行这段代码，会依次打印`names`的每一个元素：

```python
Michael
Bob
Tracy
```

所以`for x in ...`循环就是把每个元素代入变量`x`，然后执行缩进块的语句。

再比如我们想计算 1-10 的整数之和，可以用一个`sum`变量做累加：

```python
sum = 0
for x in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
    sum = sum + x
print(sum)
```

如果要计算 1-100 的整数之和，从 1 写到 100 有点困难，幸好 Python 提供一个`range()`函数，可以生成一个整数序列，再通过`list()`函数可以转换为 list。比如`range(5)`生成的序列是从 0 开始小于 5 的整数：

```python
a = list(range(5))
print(a) # [0, 1, 2, 3, 4]
```

`range(101)`就可以生成 0-100 的整数序列，计算如下：

```python
sum = 0
for x in range(101):
    sum = sum + x
print(sum) # 5050
```

#### ② while 循环

第二种循环是 while 循环，只要条件满足，就不断循环，条件不满足时退出循环。

比如我们要计算 100 以内所有奇数之和，可以用 while 循环实现：

```python
sum = 0
n = 99
while n > 0:
    sum = sum + n
    n = n - 2
print(sum)
```

在循环内部变量`n`不断自减，直到变为`-1`时，不再满足 while 条件，循环退出。

> ✏️ 练习题：

请利用循环依次对 list 中的每个名字打印出`Hello, xxx!`：

```python
L = ['Bart', 'Lisa', 'Adam']
for item in L:
    print('Hello, '+item)
```

#### ③ break

在循环中，`break`语句可以提前退出循环。例如，本来要循环打印 1～100 的数字：

```python
n = 1
while n <= 100:
    print(n)
    n = n + 1
print('END')
```

上面的代码可以打印出 1~100。

如果要提前结束循环，可以用`break`语句：

```python
n = 1
while n <= 100:
    if n > 10: # 当n = 11时，条件满足，执行break语句
        break # break语句会结束当前循环
    print(n)
    n = n + 1
print('END')
```

执行上面的代码可以看到，打印出 1~10 后，紧接着打印`END`，程序结束。

可见`break`的作用是提前结束循环。

#### ④ continue

在循环过程中，也可以通过`continue`语句，跳过当前的这次循环，直接开始下一次循环。

```python
n = 0
while n < 10:
    n = n + 1
    print(n)
```

上面的程序可以打印出 1～10。但是，如果我们想只打印奇数，可以用`continue`语句跳过某些循环：

```python
n = 0
while n < 10:
    n = n + 1
    if n % 2 == 0: # 如果n是偶数，执行continue语句
        continue # continue语句会直接继续下一轮循环，后续的print()语句不会执行
    print(n)
```

执行上面的代码可以看到，打印的不再是 1～10，而是 1，3，5，7，9。

可见`continue`的作用是提前结束本轮循环，并直接开始下一轮循环。

> ✏️ 总结：

循环是让计算机做重复任务的有效的方法。

`break`语句可以在循环过程中直接退出循环，而`continue`语句可以提前结束本轮循环，并直接开始下一轮循环。这两个语句通常都必须配合`if`语句使用。

要特别注意，不要滥用`break`和`continue`语句。`break`和`continue`会造成代码执行逻辑分叉过多，容易出错。大多数循环并不需要用到`break`和`continue`语句，上面的两个例子，都可以通过改写循环条件或者修改循环逻辑，去掉`break`和`continue`语句。

有些时候，如果代码写得有问题，会让程序陷入“死循环”，也就是永远循环下去。这时可以用`Ctrl+C`退出程序，或者强制结束 Python 进程。

## 1.4 参考资料

* [廖雪峰 - Python 3.x - Python 基础](https://www.liaoxuefeng.com/wiki/1016959663602400/1017063413904832)
* 跟老齐学 Python 从入门到精通，需要电子书请关注微信公众号“码客趣分享”回复 `Python资料`即可获取。
* [Python 语言程序设计 - 北京理工大学](https://www.icourse163.org/learn/BIT-268001?tid=1460270441#/learn/content)



