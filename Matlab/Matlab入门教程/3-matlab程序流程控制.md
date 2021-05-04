# 第 3 章 Matlab 程序流程控制

> 程序设计的基本步骤：

![程序设计的基本步骤](https://gitee.com/wugenqiang/images/raw/master/01/image-20201016135129417.png)



程序的三种基本结构：

* 顺序结构
* 选择结构
* 循环结构

脚本文件和函数文件

* 脚本文件：可以在命令行窗口直接执行的文件，也叫命令文件
* 函数文件：定义一个函数，不能直接执行，而必须以函数调用的方式来调用它

文件的建立：

* 用命令按钮创建文件

* 用 edit 命令创建文件

  ```matlab
  >> edit test
  ```

  在当前文件夹下，创建 test.m 的文件，并打开 matlab 编辑器

> 举例：分别建立脚本文件和函数文件，求两个矩阵的乘积。

![解答](https://gitee.com/wugenqiang/images/raw/master/01/image-20201016141337299.png)



## 3.1 顺序结构

（1）数据的输入

格式：A = input(提示信息，选项);

（2）数据的输出

格式：disp(输出项);

```matlab
>> s = 'Hello,World';
>> disp(s)
Hello,World
>> a = [1,2,3;4,5,6];
>> disp(a)
     1     2     3
     4     5     6
```

（3）程序的暂停

格式：pause(延迟秒数)

若要强行中止程序的运行可使用 Ctrl+C 命令



使用 matlab 处理数据的过程：

* 输入原始数据
* 对原始数据进行处理
* 输出处理结果



例题：

![例题](https://gitee.com/wugenqiang/images/raw/master/01/image-20201016143950313.png)

![思路](https://gitee.com/wugenqiang/images/raw/master/01/image-20201016144247100.png)

即 y = 0.618 x

实现代码如下：

```matlab
>> a = input('a=');
a=1+i
>> b = input('b=');
b=4.5+4.5i
>> c = a + 0.618*(b - a);
>> s = abs(a - b);
>> disp(s)
    4.9497

>> disp(c)
   3.1630 + 3.1630i
```



## 3.2 选择结构

### 3.2.1 if 语句



### 3.2.2 switch 语句



## 3.3 循环结构

### 3.3.1 for 语句



### 3.3.2 while 语句



## 3.4 函数文件的定义与调用



## 3.5 函数的递归调用



## 3.6 函数参数与变量的作用域



