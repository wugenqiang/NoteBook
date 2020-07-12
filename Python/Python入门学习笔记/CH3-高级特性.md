# 第三章 高级特性

掌握了 Python 的数据类型、语句和函数，基本上就可以编写出很多有用的程序了。

比如构造一个`1, 3, 5, 7, ..., 99`的列表，可以通过循环实现：

```python
L = []
n = 1
while n <= 99:
    L.append(n)
    n = n + 2
print(L)
```

🔍 使用**列表生成式**，来解决这个问题：

```python
list = [i for i in range(1,101,2)]
print(list)
```

取 list 的前一半的元素，也可以通过循环实现。

但是在 Python 中，代码不是越多越好，而是越少越好。代码不是越复杂越好，而是越简单越好。

基于这一思想，我们来介绍 Python 中非常有用的高级特性，**1 行代码能实现的功能，决不写 5 行代码。**请始终牢记，代码越少，开发效率越高。

## 3.1 切片

取一个 list 或 tuple 的部分元素是非常常见的操作。比如，一个 list 如下：

```python
L = ['Michael', 'Sarah', 'Tracy', 'Bob', 'Jack']
```

取前 3 个元素，应该怎么做？

可能会像这样解决：

```python
[L[0],L[1],L[2]]
```

![image-20200712160938388](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712160939.png)

但是，如果是取前 N 个元素就没辙了。

🎍 取前 N 个元素，也就是索引为 0-(N-1) 的元素，可以用循环：

```python
r = []
n = 3
for i in range(n):
    r.append(L[i])
r
```

![image-20200712214348838](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712214350.png)

对这种经常取指定索引范围的操作，用循环十分繁琐，因此，Python 提供了切片（Slice）操作符，能大大简化这种操作。

对应上面的问题，取前 3 个元素，用一行代码就可以完成切片：

```python
L[0:3]
```

![image-20200712214632198](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712214633.png)

 `L[0:3]`表示，从索引`0`开始取，直到索引`3`为止，但不包括索引`3`。即索引`0`，`1`，`2`，正好是 3 个元素。

如果第一个索引是`0`，还可以省略：

```python
L[:3]
```

也可以从索引 1 开始，取出 2 个元素出来：

```python
L[1:3]
```

类似的，既然 Python 支持`L[-1]`取倒数第一个元素，那么它同样支持倒数切片，试试：

```python
 L[-2:]
```

![image-20200712220306806](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712220307.png)

记住倒数第一个元素的索引是`-1`。

切片操作十分有用。我们先创建一个 0 - 99 的数列：

```python
L = list(range(100))
L
```

可以通过切片轻松取出某一段数列。比如前 10 个数：

```python
L[:10]
```

![image-20200712220546937](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712220548.png)

后 10 个数：

```python
L[-10:]
```

前 11 - 20 个数：

```python
L[10:20]
```

前 10 个数，每两个取一个：

```python
L[:10:2]
```

所有数，每 5 个取一个：

```python
L[::5]
```

甚至什么都不写，只写`[:]`就可以原样复制一个 list：

```python
 L[:]
```

!> tuple 也是一种 list，唯一区别是 tuple 不可变。因此，tuple 也可以用切片操作，只是操作的结果仍是 tuple：

```python
(0, 1, 2, 3, 4, 5)[:3]
```

![image-20200712222247480](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200712222248.png)

字符串`'xxx'`也可以看成是一种 list，每个元素就是一个字符。因此，字符串也可以用切片操作，只是操作结果仍是字符串：

```python
'ABCDEFG'[:3]
```

![image-20200712222833885](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200712222834.png)

```python
'ABCDEFG'[::2]
```

![image-20200712223059989](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200712223100.png)

在很多编程语言中，针对字符串提供了很多各种截取函数（例如，substring），其实目的就是对字符串切片。Python 没有针对字符串的截取函数，只需要切片一个操作就可以完成，非常简单。

> ✏️ 练习题：

利用切片操作，实现一个 trim() 函数，去除字符串首尾的空格，注意不要调用 str 的`strip()`方法：

```python
def trim(s):
    while s[:1] == ' ':
        s = s[1:]
    while s[-1:] == ' ':
        s = s[:-1]
    return s
```



> ✏️ 小结：

有了切片操作，很多地方循环就不再需要了。Python 的切片非常灵活，一行代码就可以实现很多行循环才能完成的操作。



## 3.2 迭代



## 3.3 列表生成式



## 3.4 生成器



## 3.5 迭代器



## 3.6 参考资料

* [廖雪峰 - Python 3.x - Python 基础](https://www.liaoxuefeng.com/wiki/1016959663602400/1017269809315232)
* [CS - WiKi](https://veal98.github.io/CS-Wiki/#/人工智能/Python/Python入门学习笔记/3-高级特性)





