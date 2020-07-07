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

取 list 的前一半的元素，也可以通过循环实现。

但是在 Python 中，代码不是越多越好，而是越少越好。代码不是越复杂越好，而是越简单越好。

基于这一思想，我们来介绍 Python 中非常有用的高级特性，**1 行代码能实现的功能，决不写 5 行代码。**请始终牢记，代码越少，开发效率越高。



## 3.x 参考资料

* [廖雪峰 - Python 3.x - Python 基础](https://www.liaoxuefeng.com/wiki/1016959663602400/1017269809315232)
* [CS - WiKi](https://veal98.github.io/CS-Wiki/#/人工智能/Python/Python入门学习笔记/3-高级特性)









* Python 原版环境
* Anaconda 包管理器
* Pycharm

