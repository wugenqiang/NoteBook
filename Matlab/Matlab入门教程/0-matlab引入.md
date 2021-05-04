# 第 0 章 Matlab 引入

## 0.1 前言

### 0.1.1 计算

在数学上面：

![计算的含义](https://gitee.com/wugenqiang/images/raw/master/01/image-20200917163144371.png)

当需要求解的问题变得复杂而用传统数学方法无法求出精确解时，如何进行计算呢？

举例：

![image-20200917163928475](https://gitee.com/wugenqiang/images/raw/master/01/image-20200917163928475.png)

> 总结：

对于复杂的数值计算问题，可以利用计算机进行问题求解，即利用计算机**运算速度快、计算精度高**的特点，通过重复执行简单的操作，完成复杂的计算。

举例：

![image-20200917164332124](https://gitee.com/wugenqiang/images/raw/master/01/image-20200917164332124.png)

所以，“计算”的含义：

* （1）“计算”体现的是问题求解的方法和手段。
* （2）“计算”是科学研究和工程应用的重要工具。



### 0.1.2 科学计算

**利用计算机处理数值问题的方法，称为科学计算（Scientific Computing）**

* 科学计算方法既有数学理论上的抽象性和严谨性，又有程序设计技术上的实用性和实践性。
* 科学研究方法有三种：科学实验、理论研究和**科学计算**。



### 0.1.3 科学计算与Matlab语言的关系

数值问题 --> 求解算法 --> 程序实现 --> 结果分析

**Matlab的优势**

* （1）不需要过多了解各种数值计算方法的具体细节和计算公式，也不需要繁琐的底层编程。
* （2）可以专注于实际问题的分析和设计，大大地提高工作效率和质量，为科学研究与工程应用提供重要手段。

Matlab：`Matrix Laboratory`(矩阵实验室)

**Matlab语言的主要功能**

* 数值计算
* 符号计算
* 图形绘制
* 程序流程控制
* 工具箱

> 举例：

求 $x^2-3x+1=0$ 的根。

**思考方式：**

* 直接使用求根公式
* 数值计算方法：迭代法、二分法、割线法
* Matlab解法

**Matlab解法**：

* 方法一：多项式求根函数`roots`

```matlab
>> p = [1,-3,1];
>> x = roots(p)

x =

    2.6180
    0.3820
```

绘制图像代码如下：

```matlab
>> x = -5:0.1:5;
>> y1 = x.*x-3*x+1;
>> y2 = zeros(size(x));
>> plot(x,y1,x,y2);
```

绘制图像如下：

<img src="https://gitee.com/wugenqiang/images/raw/master/01/image-20200917212538393.png" alt="image-20200917212538393" style="zoom:50%;" />

* 方法二：使用函数`fzero`

```matlab
>> f = @(x)x*x-3*x+1;
>> x1 = fzero(f,0.5)

x1 =

    0.3820

>> x2 = fzero(f,2.5)

x2 =

    2.6180
```

* 方法三：方程求根函数`fsolve`

```matlab
>> f = @(x)x*x-3*x+1;
>> x1 = fsolve(f,0.5,optimset('Display','off'))

x1 =

    0.3820

>> x2 = fsolve(f,2.5,optimset('Display','off'))

x2 =

    2.6180
```

* 方法四：利用符号求根函数`solve`

```matlab
>> syms x
>> x = solve(x^2-3*x+1)
 
x =
 
 3/2 - 5^(1/2)/2
 5^(1/2)/2 + 3/2
 
>> x = eval(x)

x =

    0.3820
    2.6180
```

**eval函数可以将符号姐转换为数值解**

## 0.2 课程内容

下面章节会分专题进行讲解



<img src="https://gitee.com/wugenqiang/images/raw/master/01/image-20200917215403773.png" alt="image-20200917215403773" style="zoom:50%;" />

## 0.3 参考资料

* [Matlab编程入门视频](https://www.bilibili.com/video/BV19J411W7Ta?t=525)

