# Java 入门基础编程笔记

> [Java 入门基础编程视频](https://www.bilibili.com/video/BV1zE41197bw)
>
> 课件地址：[点击我啦哟](https://pan.baidu.com/s/12onOc3Q8ZD0tyO39YQ5_rQ) 提取码：50ME

## 1 前言

### 1.1 软件开发介绍

* 软件，即一系列按照特定顺序组织的计算机数据和指令的集合，分为：
  * 系统软件
  * 应用软件
* 人机交互方式分为：
  * 图形化界面（Graphical User Interface GUI）
  * 命令行方式（Command Line Interface CLI）

### 1.2 常用的 DOS 命令

* dir 列出当前目录下的文件以及文件夹
* md 创建目录
* rd 删除目录
* cd 进入指定目录
* cd.. 退回到上一级目录
* cd /退回到根目录
* del 删除文件
* exit 退出 dos 命令行

### 1.3 编程语言介绍

* 第一代语言
  * 机器语言，指令以二进制代码形式存在
* 第二代语言
  * 汇编语言，使用助记符表示一条机器指令

* 第三代语言：高级语言
  * C，Pascal，Fortran 面向过程的语言
  * C++ 面向过程/面向对象
  * Java 跨平台的纯面向对象的语言
  * .NET 跨语言的平台
  * Python，Scala，JS...

### 1.4 选择 Java 语言

![image-20200401142030208](../../images/image-20200401142030208.png)

* Java 面向对象，开发效率高
* Java 从业人多，框架丰富，优秀
* Java 市场需求好 【查看编程语言使用排名：[TIOBE](https://www.tiobe.com/tiobe-index//)】

![image-20200401143735597](../../images/image-20200401143735597.png)

## 2 Java 语言概述

* 是 SUN（Stanford University Network，斯坦福大学网络公司）1995 年退出的高级编程语言
* Java 成为 Web 应用程序的首选开发语言
* 后台开发：Java、PHP、Python、Go、Node.js

### 2.1 Java 技术体系平台

* Java SE（Java Standard Edition）标准版，以前称为 J2SE，支持面向桌面级应用，提供了完整的 Java 核心 API
* Java EE（Java Enterprise Edition）企业版，以前称为 J2EE，包含 Servlet、Jsp 等
* Java ME（Java Micro Edition）小型版，以前称为 J2ME，支持移动终端
* Java Card，支持 Java 小程序（Applets）运行在小内存设备（如智能卡）上的平台

### 2.2 Java 在各领域的应用

* 企业级应用：Java 后台开发
* Android 平台应用：客户端开发
* 大数据平台开发：提供 API 接口编程
* 移动领域应用：用于消费和嵌入式领域

### 2.3 Java 语言的特点

* 特点一：面向对象
  * 两个基本概念：类和对象
  * 三大特性：封装、集成和多态
* 特点二：健壮性
  * 去除指针、内存的申请与释放
  * 提供了一个相对安全的内存管理和访问机制
* 特点三：跨平台性
  * Write Once，Run Anywhere.
  * 原理：只要在需要运行 Java 应用程序的操作系统上，先安装一个 Java 虚拟机（Java Virtual Machine JVM）即可，由 JVM 来负责 Java 程序在该系统中的运行

### 2.4 Java 语言运行机制

* Java 虚拟机（Java Virtal Machine）
* 垃圾收集机制（Garbage Collection）

### 2.5 Java 基础知识图解

![image-20200401164126895](../../images/image-20200401164126895.png)



### 2.6 第一个程序：HelloWorld

```java
public class HelloWorld {  
    public static void main(String[] args){
        System.out.println("HelloWorld\n");
    }
}
```

## 3 Java 基本语法

### 3.1 关键字和保留字

* 关键字（Keyword）
  * 用做专门用途的字符串
  * 特点：关键字中所有字母都为小写

![image-20200401165755510](../../images\image-20200401165755510.png)

![image-20200401165946696](../../images/image-20200401165946696.png)

* 保留字（reserved word）
  * 现有 Java 版本尚未使用，但以后版本可能作为关键字使用，自己命名标识符时要避免使用这些保留字。
  * goto，const

### 3.2 标识符

* 标识符（identifier）
  * Java 对各种变量、方法和类等要素命名时使用的字符序列称为标识符。
* 定义合法标识符规则：

![image-20200401170717631](../../images/image-20200401170717631.png)

* 名称命名规范：

![image-20200401172144197](../../images/image-20200401172144197.png)

!> Java 采用 unicode 字符集，因此标识符也可以使用汉字声明，但是不建议使用。

### 3.3 变量

> 作用：用于在内存中保存数据
>
> Java 定义变量的格式：数据类型 变量名 = 变量值；

eg.

```java
public static void main(String[] args){
	//变量的定义
	int myAge = 12;
	//变量的使用
	System.out.println(myAge);
    //变量的声明
    int myNumber;
    //变量的赋值:初始化
    myNumber = 1001;
    System.out.println(myNumber);
}
```

!> 注：

* 变量必须先声明，后使用
* 变量都定义在其作用域内，只有在作用域内是有效的
* 同一作用域，不能声明两个同名的变量

#### 3.3.1数据类型

![image-20200402215135413](../../images/image-20200402215135413.png)

* 整数类型：

![image-20200402220507303](../../images/image-20200402220507303.png)

注：声明 long 型变量时，以“l” 或 “L” 结尾，开发中定义整型变量时，常使用 int

* 浮点型：

![image-20200402220949864](../../images/image-20200402220949864.png)

* 字符型：char 占 1 字符 = 2 字节
  * 定义 char 型变量，通常使用一对单引号，内部只能写一个字符
  * 表示方式：
    * （1）声明一个字符
    * （2）转义字符
    * （3）使用 Unicode 值来表示字符型常量

```java
public class HelloWorld {
    public static void main(String[] args){
        //System.out.println("HelloWorld\n");
        char c = '\n';//换行符
        c = '\t';//制表符
        System.out.print("Hello"+c);
        System.out.println("World");
        
        char c2 = '\u0043';//字符集 C
        System.out.println(c2);
    }
}
```

* 布尔型：boolean
  * 只能取两个值之一：true，false
  * 常常在条件判断、循环结构中使用

```java
boolean b = true;
System.out.print(b);

boolean isMarried = true;
if(isMarried){
    System.out.println("balabala...");
}else{
    System.out.println("Sadness");
}
```



#### 3.3.2 基本数据类型变量间转换

> 基本数据类型之间的运算规则：

（1）自动类型提升：

当容量小的数据类型的变量与容量大的数据类型的变量做运算时，结果自动提升为容量大的数据类型。

当 byte、char、short 三种类型的变量做运算时，结果为 int 型

```java
byte、char、short --> int --> long --> float --> double
```

容量大小指的是数的范围的大小，注意，float 比 long 的范围大

（2）强制类型转换：是自动类型提升运算的逆运算

* 需要使用强转符：()

```java
double d = 12.7;
int c = (int)d;//截断操作
```

* 强制类型转换，可能导致精度损失

```java
int a = 128;
byte b = (byte)a;
System.out.println(b);//-128
```



####  3.3.3 基本数据类型与 String 间转换

> String 不是基本数据类型，属于引用数据类型

* String 使用方式：String str = “abdce”;
* 一个字符串考可以串接另一个字符串，也可以直接串接其他类型的数据，因为 String 可以和 8 种基本数据类型变量做运算
* 运算的结果仍然是 String 类型

```java
String str= "abdce";
str = str + "xyz";//连接运算
int n = 100;
str = str + n;
```

* 字符串转 int 型

```java
String str = 123 + "";
int num = Integer.parseInt(str);
System.out.println(num);
```

#### 3.3.4 进制与进制间的转换

![image-20200403140046989](../../images/image-20200403140046989.png)

> 反码与补码举例：

![image-20200403140533376](../../images/image-20200403140533376.png)

?> 注：计算机底层都以补码的方式来存储数据！

### 3.4 运算符

> 运算符是一种特殊的符号，用以表示数据的运算、赋值和比较。

* 算术运算符
* 赋值运算符
* 比较运算符（关系运算符）
* 逻辑运算符
* 位运算符
* 三元运算符

#### 3.4.1 算术运算符

![image-20200404160140219](../../images/image-20200404160140219.png)

##### 例题：打印三位数逆序显示

```java
public void printNumber(int num){
	int res;
    int tmp = num;
    while(tmp > 0){
        System.out.print(tmp % 10);
        tmp /= 10;
    }
}
```

#### 3.4.2 赋值运算符

![image-20200404162908011](../../images/image-20200404162908011.png)

#### 3.4.3 比较运算符

![image-20200404164025844](../../images/image-20200404164025844.png)

#### 3.4.4 逻辑运算符

![image-20200404164553577](../../images/image-20200404164553577.png)

#### 3.4.5 位运算符

![image-20200404183200186](../../images/image-20200404183200186.png)

注明：最高效率计算 2 * 8

采用 2 << 3 或者 8 << 1

#### 3.4.6 三元运算符

![image-20200404184714139](../../images/image-20200404184714139.png)

##### 例题：获取最大者

![image-20200404190927149](../../images/image-20200404190927149.png)

##### 例题：典型代码

（1）获取另两个整数的较大值

（2）获取三个数的最大值



### 3.5 程序流程控制

#### 3.5.1 顺序结构

> 程序从上到下执行





#### 3.5.2 分支结构

>  分为 if - else if - else 和 swith - case

##### 3.5.2.1 if - else 结构

![image-20200404202932216](../../images/image-20200404202932216.png)

![image-20200404203359279](../../images/image-20200404203359279.png)



###### 测试：if - else 测试

![image-20200405162355078](../../images/image-20200405162355078.png)



##### 3.5.2.2 switch - case 结构

![image-20200405173857138](../../images/image-20200405173857138.png)

###### 测试：switch - case 测试

```java
public class SwitchCaseTest {
    public static void main(String[] args){
        int number = 2;
        switch(number){
            case 0:
                System.out.println("zero");
                break;
            case 1:
                System.out.println("one");
                break;
            case 2:
                System.out.println("two");
                break;
            default:
                System.out.println("other");
        }
    }
}
```

!> 说明：

* 根据 switch 表达式中的值，依次匹配各个 case 中的常量
* 一旦匹配成功，则进入 case 结构中执行相应语句，直至遇到 break 结束，跳出 switch - case 结构
* switch 结构中的表达式，只能是如下的 6 种数据类型之一：byte, short, char, int, 枚举类型（JDK 5.0 新增）, String 类型（JDK 7.0 新增）
* case 之后只能声明常量。不能声明范围
* break 在 switch - case 中是可选的

##### 3.5.2.3 总结归纳

* 凡是可以使用 switch - case 的结构，都可以转换为 if - case。反之，不成立。
* 我们写分支结构时，当发现即可以使用 switch - case，（同时，switch 中表达式的取值情况不太多），又可以使用 if - case 时，我们优先选择使用 switch - case。
* switch - case 执行效率稍微高一点。

#### 3.5.3 循环结构

> for、while 和 do - while 循环

定义：在某些条件满足的情况下，反复执行特定代码的功能。

![image-20200407093503338](../../images/image-20200407093503338.png)

##### 3.5.3.1 for 循环

**输出 5 遍 Hello,Java **

```java
for (int i = 0; i < 5; i++) { 
    System.out.println("Hello,Java");
}
```

**遍历 100 以内的偶数**

```java
for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
        System.out.println(i);
    }
}
```

**记录 100 以内所有偶数的和**

```java
int sum = 0;
for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
        System.out.println(i);
        sum += i;
    }
}
System.out.println(sum);
```

> 注：

* 循环条件是 boolean 类型
* 通常情况下，循环结束都是因为循环条件不满足返回 false

##### 3.5.3.2 while 循环

**遍历 100 以内的偶数**

```java
public class WhileTest {
    public static void main(String[] args){
        //遍历100以内的所有偶数
        int i = 1;
        while (i <= 100) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
            i++;
        }
    }
}
```

> 注：

* 写 while 循环，不能丢了迭代条件
* 写程序，要避免出现死循环
* for 循环和 while 循环是可以相互转换的



##### 3.5.3.3 do - while 循环

**遍历 100 以内的偶数**

```java
public class DoWhileTest {
    public static void main(String[] args){
        //遍历100以内的所有偶数
        int i = 1;
        do {
            if (i % 2 == 0) {
                System.out.println(i);
            }
            i++;
        } while (i <= 100);
    }
}
```

> 注：

* do - while 循环至少会执行一次循环体

##### 3.5.3.4 嵌套循环

![image-20200407152734014](../../images/image-20200407152734014.png)

> 注意点：

* 嵌套循环：将一个循环结构 A 声明在另一个循环结构 B 的循环体中，就构成了嵌套循环
* 外层循环
* 内层循环
* 内层循环结构遍历一遍，只相当于外层循环的循环体执行了一次
* 技巧：
  * 外层循环控制行数，内层循环控制列数

举例 01：

```java
for (int j = 1; j <= 4; j++) {
 	for (int i = 1; i <= 6; i++) {
        System.out.println(i * j);
    }   
}
```

举例 02：

![image-20200407152134463](../../images/image-20200407152134463.png)

举例 03：

![image-20200407152416075](../../images/image-20200407152416075.png)

#### 3.5.4 特殊关键字的使用

##### 3.5.4.1 break

使用范围： switch - case 和循环结构中

循环中使用的作用：结束当前循环

##### 3.5.4.2 continue

使用范围： 循环结构中

循环中使用的作用：结束当次循环

> break 和 continue 的相同点：

* 关键字后面不能有执行语句

![image-20200408165535291](../../images/image-20200408165535291.png)

## 4 数组

### 4.1 数组的概述

数组（Array）的常见概念：

* 数组名
* 下标（或索引）
* 元素
* 数组的长度

数组的特点：

* 数组是有序排列的
* 数组属于引用数据类型的变量，数组的元素，即可以是基本数据类型，也可以是引用数据类型
* 创建数组对象一旦确定，就不能修改

数组的分类：

* 按照维数：一维数组、二维数组...
* 按照数组元素类型：基本数据类型元素的数组、引用数据类型元素的数组

### 4.2 一维数组

> 使用时考虑的问题：

（1）一维数组的声明和初始化

```java
//1.一维数组的声明和初始化
int num;//声明
num = 10;//初始化
int id = 1001;//声明 + 初始化

int[] ids;//声明
//静态初始化：数组的初始化和数组元素的赋值操作同时进行
ids = new int[]{1001,1002,1003,1004};
//动态初始化：数组的初始化和数组元素的赋值操作分开进行
String[] names = new String[5];
```

注意：这样写也可以，类型推断

```java
int[] arr4 = {1,2,3,4,5};//类型推断
```



（2）如何调用数组的指定位置的元素：通过角标的方式调用

```java
//2.如何调用数组的指定位置的元素：通过角标的方式调用
//数组的角标（或索引）从0开始的，到数组的长度-1结束
names[0] = "吴跟强";
names[1] = "吴奇隆";
names[2] = "吴尊";
names[3] = "胡歌";
names[4] = "孙杨";
```



（3）如何获取数组的长度

```java
//3.如何获取数组的长度
//属性：length
System.out.println(names.length);//5
System.out.println(ids.length);//4
```



（4）如何遍历数组

```java
//4.如何遍历数组
for (int i = 0; i < names.length; i++) {
	System.out.println(names[i]);
}
```



（5）数组元素的默认初始化值

* 数组元素是整型：0
* 数组元素是浮点型：0.0
* 数组元素是 char 型：0 或 ‘\u0000’，而非 ‘0’
* 数组元素是 boolean 型：false
* 数组元素是引用数据类型：null

```java
//5.数组元素的默认初始化值
int arr[] = new int[4];
for (int i = 0; i < arr.length; i++) {
	System.out.println(arr[i]);//0
}
```



（6）数组的内存解析

栈（stack）：局部变量

堆（heap）：new 出来的结构：对象、数组

方法区

常量池

静态域

> 内存的简化结构

![image-20200409105719298](../../images/image-20200409105719298.png)

> 举例：一维数组的内存解析

![image-20200409110838453](../../images/image-20200409110838453.png)

> 总结：数组一旦初始化完成，其长度就确定了。

### 4.3 二维数组

> 使用时考虑的问题：

（1）二维数组的声明和初始化

```java
//1.二维数组的声明和初始化
//静态初始化
int[][] arr1 = new int[][]{{1,2,3},{4,5},{6,7,8}};
//动态初始化1
String[][] arr2 = new String[3][2];
//动态初始化2
String[][] arr3 = new String[3][];
//也是正确的写法
int[] arr4[] = new int[][]{{1,2,3},{4,5,6,10},{4,6}};
```



（2）如何调用数组的指定位置的元素：通过角标的方式调用

```java
//2.如何调用数组的指定位置的元素：通过角标的方式调用
//数组的角标（或索引）从0开始的，到数组的长度-1结束
System.out.println(arr1[0][1]);//0
arr3[1] = new String[4];
System.out.println(arr3[1][0]);//null
```



（3）如何获取数组的长度

```java
//3.如何获取数组的长度
//属性：length
System.out.println(arr3.length);//3
System.out.println(arr3[1].length);//4
```



（4）如何遍历数组

```java
//4.如何遍历二维数组
for (int i = 0; i < arr4.length; i++) {
	for (int j = 0; j < arr4[i].length; j++) {
		System.out.print(arr4[i][j] + " ");
	}
	System.out.println();
}
```



（5）数组元素的默认初始化值

* 针对于初始化方式一：比如：int [ ] [ ] arr = new int [4] [3];
  * 外层元素的初始化值为：地址值
  * 内层元素的初始化值为：与一维数组初始化情况相同
* 针对于初始化方式二：比如：int [ ] [ ] arr = new int [4] [ ];
  * 外层元素的初始化值为：null
  * 内层元素的初始化值为：不能调用，否则报错

```java
//5.数组元素的默认初始化值
System.out.println(arr4[0]);//[I@7530d0a 地址值
System.out.println(arr4[0][0]);//1
System.out.println(arr4);//[[I@27bc2616
```



（6）数组的内存解析

栈（stack）：局部变量

堆（heap）：new 出来的结构：对象、数组

方法区

常量池

静态域

> 举例一：二维数组的内存解析

![image-20200409120044133](../../images/image-20200409120044133.png)

> 举例二：二维数组的内存解析

![image-20200409120344921](../../images/image-20200409120344921.png)

> 举例三：二维数组的内存解析

![image-20200409120512551](../../images/image-20200409120512551.png)

### 4.4 数组的常见算法

* 数组元素的赋值（杨辉三角、回形数等）
* 求数值型数组中元素的最大值、最小值、平均数、总和等
* 数组的赋值、复制、反转、查找（线性查找、二分法查找）
* 数组元素的排序算法

#### 4.4.1 数组元素的赋值

**杨辉三角**

```java
a[i][j] = a[i-1][j-1] + a[i-1][j];
```

#### 4.4.2 考查最大值、最小值、和值问题

【题目】

定义一个 int 型的一维数组，包含 10 个随机数（两位数），然后求出所有元素的最大值、最小值、和值。

【代码实现】

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArrayList
 * @Description: 考查数值型数组中元素的最大值、最小值、平均数、总和等
 * @Author: wugenqiang
 * @Date: 2020/4/10 10:19
 */
public class ArrayList {
    public static void main(String[] args) {
        int arr[] = new int[10];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (int)(Math.random() * (99 - 10 + 1) + 10);
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        //求数组元素的最大值
        int maxValue = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (maxValue < arr[i]) {
                maxValue = arr[i];
            }
        }
        System.out.println("最大值为：" + maxValue);
        //求数组元素的最小值
        int minValue = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (minValue > arr[i]) {
                minValue = arr[i];
            }
        }
        System.out.println("最小值为：" + minValue);

        //求数组元素的总和
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        System.out.println("总和为：" + sum);
        //求数组元素的平均数
        double avgValue = (double)sum / arr.length;
        System.out.println("平均数为：" + avgValue);

    }
}
```

#### 4.4.3 数组的赋值

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArrayExec2
 * @Description: 数组的赋值
 * @Author: wugenqiang
 * @Date: 2020/4/10 10:19
 */
public class ArrayExec2 {
    public static void main(String[] args) {
        int[] array1, array2;
        array1 = new int[]{2,3,5,7,11,13,17,19};

        //显示array1的内容
        for (int i = 0; i < array1.length; i++) {
            System.out.print(array1[i] + " ");
        }
        System.out.println();

        //赋值array2变量等于array1
        array2 = array1;

        for (int i = 0; i < array2.length; i++) {
            System.out.print(array2[i] + " ");
        }
    }
}
```



#### 4.4.4 数组的复制

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArrayExec3
 * @Description: 数组的复制
 * @Author: wugenqiang
 * @Date: 2020/4/10 10:19
 */
public class ArrayExec3 {
    public static void main(String[] args) {
        int[] array1, array2;
        array1 = new int[]{2,3,5,7,11,13,17,19};

        //显示array1的内容
        for (int i = 0; i < array1.length; i++) {
            System.out.print(array1[i] + " ");
        }
        System.out.println();

        //数组的复制
        array2 = new int[array1.length];
        for (int i = 0; i < array2.length; i++) {
            array2[i] = array1[i];
        }

        for (int i = 0; i < array2.length; i++) {
            System.out.print(array2[i] + " ");
        }
    }
}
```

#### 4.4.5 数组的反转

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArrayExec4
 * @Description: 数组的反转
 * @Author: wugenqiang
 * @Date: 2020/4/10 10:56
 */
public class ArrayExec4 {

    public static void main(String[] args) {
        String[] arr = new String[]{"JJ","DD","MM"};

        //数组的反转
        for (int i = 0; i < arr.length / 2; i++) {
            String temp = arr[i];
            arr[i] = arr[arr.length - 1 - i];
            arr[arr.length - i - 1] = temp;
        }

        //遍历
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
```

#### 4.4.6 数组的查找

##### 4.4.6.1 线性查找

【实现思路】

通过遍历的方式，一个一个的数据进行比较、查找。

【适用性】

具有普遍适用性。

【代码实现】

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArrayExec5
 * @Description: 数组的线性查找
 * @Author: wugenqiang
 * @Date: 2020/4/10 10:56
 */
public class ArrayExec5 {

    public static void main(String[] args) {
        String[] arr = new String[]{"JJ","DD","MM"};
        
        //查找（或搜索）
        //线性查找：
        String dest = "DD";
        boolean isFlag = true;
        //遍历
        for (int i = 0; i < arr.length; i++) {
            if (dest.equals(arr[i])) {//内容相等
                System.out.println("找到指定的元素，位置为：" + i);
                isFlag = false;
                break;
            }
        }
        if (isFlag) {
            System.out.println("很遗憾，没有找到哦！");
        }
    }
}
```



##### 4.4.6.2 二分法查找

【实现思路】

每次比较中间值，折半的方式检索。

【适用性】

前提：数组必须有序

【代码实现】

待写

#### 4.4.7 排序算法

> 理解：

* 衡量排序算法的优劣
  * 时间复杂度、空间复杂度和稳定性
* 排序的分类
  * 内部排序
  * 外部排序（需要借助于磁盘）





##### 4.4.7.1 十大内部排序算法

* 选择排序
  * 直接选择排序、堆排序
* 交换排序
  * 冒泡排序、快速排序
* 插入排序
  * 直接插入排序、折半插入排序、Shell 排序
* 归并排序
* 桶式排序
* 基数排序





##### 4.4.7.2 冒泡排序

```java
package com.wugenqiang.array;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ArraySort
 * @Description: 冒泡排序算法
 * @Author: wugenqiang
 * @Date: 2020/4/10 11:34
 */
public class ArraySort {
    public static void main(String[] args) {
        int[] arr = new int[]{4,7,3,1,8};
        int temp = 0;
        for (int i = 0; i < arr.length - 1; i++) {//循环轮次
           for (int j = 0; j < arr.length - 1 - i; j++) {//每一轮次的数字对比排序
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
           }
        }
        //遍历输出
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
```

> 注意：

* 快排时间复杂度：O ( n log n )
* 冒泡事件复杂度：O ( n ^ 2 )
* 堆排序、归并排序

### 4.5 数组中常见的异常

```java
ArrayIndexOutOfBourdsException:数组角标越界异常
合理范围：[0, arr.length - 1]
越界：arr[-1], arr[arr.length]
    
NullPointException:空指针异常
eg.
    int[] arr = null;
	arr[0];
```

> 注意：一旦程序出现异常，未处理时，就终止执行。

## 5 面向对象编程（OOP）

> Java 面向对象学习的三条主线：

* Java 类及类的成员
  * 属性、方法、构造器（使用频率高）
  * 代码块、内部类
* 面向对象的三大特征
  * 封装性
  * 继承性
  * 多态性
  * 抽象性（可选，其他三个必选）
* 其他关键字
  * this 
  * super
  * static
  * final
  * abstract
  * interface
  * package
  * import
  * ......

### 5.1 面向过程与面向对象

![image-20200410143027458](../../images/image-20200410143027458.png)



### 5.2 Java 语言的基本元素：类和对象

> 类（Class）和对象（Object）是面向对象的核心概念。

* 类是对一类事物的描述，是抽象的、概念上的定义。
* 对象是实际存在的该类事物的每个个体，因而也称为实例（instance）

#### 5.2.1 创建类以及设计类的成员

!> 面向对象程序设计的重点是类的设计，类的设计，其实就是类的成员的设计。

* 属性 = 成员变量 = field = 域、字段
* 方法 = 成员方法 = method = 函数

Example：Person 类

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: Person
 * @Description: Person类
 * @Author: wugenqiang
 * @Date: 2020/4/10 14:51
 */
public class Person {
    //属性
    String name;
    int age = 1;
    boolean isMale;

    //方法
    public void eat() {
        System.out.println("人可以吃饭");
    }

    public void sleep() {
        System.out.println("人可以睡觉");
    }

    public void talk(String language) {
        System.out.println("人可以说话，使用的是：" + language);
    }
}
```

#### 5.2.2 对象的创建和使用

![image-20200410145959154](../../images/image-20200410145959154.png)

* 创建类的对象 = 类的实例化 = 实例化类

Example：测试类

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: OOPTest
 * @Description: 面向对象编程测试类
 * @Author: wugenqiang
 * @Date: 2020/4/10 14:17
 */
public class OOPTest {
    public static void main(String[] args) {
        //创建Person类的对象
        Person p1 = new Person();
        //调用对象的结构：属性、方法
        //调用属性：对象.属性
        p1.name = "wugenqiang";
        p1.isMale = true;
        System.out.println(p1.name);
        //调用方法：对象.方法
        p1.eat();
    }
}
```

!> 如果创建了一个类的多个对象，则每个对象都独立的拥有一套类的属性。（非 static 的）即意味着：如果我们修改一个对象的属性 a, 则不影响另外一个对象属性 a 的值。

#### 5.2.3 对象的内存解析

![image-20200410152642291](../../images/image-20200410152642291.png)

举例说明：

![image-20200410153608468](../../images/image-20200410153608468.png)

#### 5.2.4 类中属性的使用

> 属性（成员变量）VS 局部变量

* 相同点
  * 定义变量的格式一样：数据类型 变量名 = 变量值
  * 先声明，后使用
  * 变量都有其对应的作用域
* 不同点
  * 在类中声明的位置不同：
    * 属性是直接定义在类的一对 { } 内。
    * 而局部变量是声明在方法内、方法形参、代码块内、构造器形参、构造器内部的变量。
  * 关于权限修饰符的不同：
    * 属性可以在声明属性时，指明其权限，使用权限修饰符。常用的权限修饰符：private、public、缺省、protected --> 封装性。
    * 而局部变量是不可以使用权限修饰符的。
  * 默认初始化值的情况：
    * 属性：类的属性，根据其类型，都有默认初始化值。比如：整型（byte、short、int、long）--> 0，浮点型（float、double）--> 0.0，字符型（char）--> 0，布尔型（boolean）--> false，引用数据类型（类、数组、接口）--> null
    * 局部变量：没有默认初始化值，意味着我们在调用局部变量之前，一定要显示赋值。特别地：形参在调用的时候赋值即可。
  * 在内存中加载的位置不同：
    * 属性是加载到堆空间中。（非 static 的），static 的是放在方法区的。
    * 局部变量是加载到栈空间。

举例说明：

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: User
 * @Description: User类
 * @Author: wugenqiang
 * @Date: 2020/4/10 15:42
 */
public class User {
    //属性（或成员变量）
    private String name;
    int age;
    boolean isMale;

    public void talk(String language) {//language:形参
        System.out.println("我们使用" + language + "进行交流");
    }

    public void eat() {
        String food = "pie";//局部变量
        System.out.println("北方人喜欢吃：" + food);
    }
}
```

#### 5.2.5 类中方法的声明和使用

方法：描述类应该具有的功能。

比如：

* Math 类：sqrt( ) \ random( ) \ ...
* Scanner 类：nextXxx( ) ...
* Arrays 类：sort( ) \ binarySearch( ) \ toString( ) \ equals( ) \ ...

方法的分类：

![image-20200410162308807](../../images/image-20200410162308807.png)

方法的声明：

```
权限修饰符 返回值类型 方法名(形参列表) {
	方法体
}
```

> 注：

* 关于权限修饰符（Java 规定的 4 种权限修饰符）：
  * private
  * public
  * 缺省
  * protected
* 关于返回值类型：有返回值 VS 没有返回值
  * 如果方法有返回值，则必须在方法声明时，指定返回值的类型。同时，方法中，需要使用 return 关键字来返回指定类型的变量或常量。
  * 如果方法没有返回值，则方法声明时，使用 void 来表示。通常，没有返回值的方法中，就不需要使用 return，但是如果使用的话，只能 “return ;” 表示结束此方法的意思。
  * 我们定义方法该不该有返回值？根据经验，哈哈哈，但是还是要从下面几个方面考虑：
    * 题目要求
    * 凭经验：具体问题具体分析
* 方法名：属于标识符，遵循标识符的规则和规范。
* 形参列表“方法可以声明 0 个，1 个，或多个形参。
* return 关键字的使用：
  * 使用范围：使用在方法体中
  * 作用：（1）结束方法（2）针对于有返回值类型的方法，使用 “return 数据” 方法返回所要的数据。
  * 注意点：return 关键字后面不可以声明执行语句。 
* 方法的使用中，可以调用当前类的属性或方法。特殊的：方法 A 中又调用了方法 A：递归方法。
  * 方法中不可以定义方法。

举例说明：

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: Customer
 * @Description: Customer类
 * @Author: wugenqiang
 * @Date: 2020/4/10 16:14
 */
public class Customer {
    //属性
    String name;
    int age;
    boolean isMale;

    //方法
    public void eat() {//无形参，无返回值
        System.out.println("客户吃饭");
    }

    public  void sleep(int hour) {//有形参，无返回值
        System.out.println("休息了" + hour + "小时");
    }

    public String getName() {//无形参，有返回值
        return name;
    }

    public String getNation(String nation) {//有形参，有返回值
        String info = "我的国籍是：" + nation;
        return info;
    }
}
```

### 5.3 再谈方法

#### 5.3.1 方法的重载

![image-20200411222941441](../../images/image-20200411222941441.png)



#### 5.3.2 可变形参的方法



#### 5.3.3 方法参数的值传递机制



#### 5.3.4 递归方法



## 6 异常处理





## 7 Java 代码练习

考查量一个功能代码的优劣性：

> 注：衡量一个功能代码的优劣性：

* 1. 正确性
* 2. 可读性
* 3. 健壮性
* 4. 高效率与低存储：时间复杂度和空间复杂度（衡量算法的好坏）



### 7.1 Scanner 引入

注意：从键盘获取不同类型的变量，需要使用 Scanner 类

实现步骤：

* （1）导包：import java.util.Scanner;
* （2）Scanner 的实例化：Scanner scan = new Scanner(System.in);
* （3）调用 Scanner 类的相关方法，来获取指定类型的变量
* Scanner 演示代码：

```java
//1.导包：import java.util.Scanner;
import java.util.Scanner;
public class ScannerTest {
    public static void main(String[] args){
        //2.Scanner的实例化
        Scanner scan = new Scanner(System.in);
		//3.调用Scanner类的相关方法
        System.out.println("请输入你的姓名：");
        String name = scan.next();
        System.out.println(name);

        System.out.println("请输入你的年龄：");
        int age = scan.nextInt();
        System.out.println(age);

        System.out.println("请输入你的体重：");
        double weight = scan.nextDouble();
        System.out.println(weight);

        System.out.println("你是否相中我了哈哈？(true or false)：");
        boolean a = scan.nextBoolean();
        System.out.println(a);

        //对于char型的获取，Scanner没有提供相关的方法，只能获取字符串
        System.out.println("请输入你的性别(男 or 女)：");
        String gender = scan.next();
        System.out.println(gender);

        char genderChar = gender.charAt(0);//找到指定索引位上的字符，从0开始
        System.out.println(genderChar);
    }
}
```



### 7.2 随机数 random

> 使用方法：Math.random(); //返回 double 类型 [0.0,1.0)

#### 7.2.1 获取随机数 10 - 99

```java
double value = Math.random() * 90 + 10;//[0.0, 1.0) --> [0.0, 90) --> [0.0, 100)
int value2 = (int)(Math.random() * 90 + 10);//强制转换  [0.0, 100) --> [0, 99]
//公式：[a, b] : (int)(Math.random() * (b - a + 1) + a)
System.out.println(value);
System.out.println(value2);
```

### 7.3 日期类问题

#### 7.3.1 输出 2020 年的第几天

【题目】

```
编写程序：从键盘上输入2020年的“month”和“day”，要求通过程序输出输入的日期为2020年的第几天。
```

【代码实现】

```java
import java.util.Scanner;
/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: DatePrint
 * @Description: 通过程序输出输入的日期为2019年的第几天。
 * @Author: wugenqiang
 * @Date: 2020/4/5 17:59
 */
public class DatePrint {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("请输入2020年的month：");
        int month = scan.nextInt();
        System.out.println("请输入2020年的day：");
        int day = scan.nextInt();

        //定义一个变量来保存总天数
        int sumDays = 0;
        switch (month){
            case 12:
                sumDays += 30;
            case 11:
                sumDays += 31;
            case 10:
                sumDays += 30;
            case 9:
                sumDays += 31;
            case 8:
                sumDays += 31;
            case 7:
                sumDays += 30;
            case 6:
                sumDays += 31;
            case 5:
                sumDays += 30;
            case 4:
                sumDays += 31;
            case 3:
                sumDays += 29;
            case 2:
                sumDays += 31;
            case 1:
                sumDays += day;
        }
        System.out.println(sumDays);
    }
}
```

#### 7.3.2 输出第几年的第几天

【题目】从键盘分别输入年、月、日，判断这一天是当年的第几天。

【思路】跟上面一题大体一样，但需要判断闰年和平年，判断思路如下：

* 判断一年是否是闰年的标准：
  * （1）可以被 4 整除，但不可被 100 整除
  * （2）可以被 400 整除

【代码】

```java
import java.util.Scanner;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: DatePrint
 * @Description: 通过程序输出输入的日期第几天。
 * @Author: wugenqiang
 * @Date: 2020/4/5 17:59
 */
public class DatePrint2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("请输入year：");
        int year = scan.nextInt();
        System.out.println("请输入month：");
        int month = scan.nextInt();
        System.out.println("请输入day：");
        int day = scan.nextInt();

        //定义一个变量来保存总天数
        int sumDays = 0;
        switch (month){
            case 12:
                sumDays += 30;
            case 11:
                sumDays += 31;
            case 10:
                sumDays += 30;
            case 9:
                sumDays += 31;
            case 8:
                sumDays += 31;
            case 7:
                sumDays += 30;
            case 6:
                sumDays += 31;
            case 5:
                sumDays += 30;
            case 4:
                sumDays += 31;
            case 3:
                //sumDays += 29;
                //判断year是否是闰年
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                    sumDays = 29;
                }else {
                    sumDays = 28;
                }
            case 2:
                sumDays += 31;
            case 1:
                sumDays += day;
        }
        System.out.println(year + "-" + month + "-" + day + " 是当年的第 " + sumDays + " 天");
    }
}
```

### 7.4 最大公约数

【题目】输入两个正整数 m 和 n，求最大公约数和最小公倍数。

【代码】

```java
import java.util.Scanner;
/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ForTest
 * @Description: 测试 for 循环
 * @Author: wugenqiang
 * @Date: 2020/4/1 15:48
 */
public class ForTest {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("请输入第一个正整数：");
        int m = scan.nextInt();
        System.out.println("请输入第二个正整数：");
        int n = scan.nextInt();
        
        //获取最大公约数
        //1.获取两个数中的较小值
        int min = (m <= n) ? m : n;
        //2.遍历
        for (int i = min; i >= 1; i--) {
            if (m % i == 0 && n % i == 0){
                System.out.println("最大公约数为：" + i);
                break;//一旦找到第一个就跳出循环
            }
        }
        //获取最小公倍数
        //1.获取两个数中的较大值
        int max = (m >= n) ? m : n;
        //2.遍历
        for (int i = max; i <= m * n; i++) {
            if (i % m == 0 && i % n == 0) {
                System.out.println("最小公倍数为：" + i);
                break;//一旦找到第一个就跳出循环
            }
        }

    }
}
```

### 7.5 水仙花数

【题目】输出所有的水仙花数，所谓水仙花数就是指一个 3 位数，其各个位上数字立方和等于其本身。

【代码】

```java
int sum = 0;
for (int i = 100; i < 1000; i++) {
 	int j = i;
    while (j > 0) {
        int t = j % 10;
        sum += t * t * t;
        j /= 10;
    }
    if (sum == i) {
        System.out.println(i);
    } else {
        continue;
    }
}
```

### 7.6 完数

题目：找出 1000 以内的所有完数

讲解：完数，即这个数恰好等于它的因子之和，例如：6 = 1 + 2 + 3；

代码：

```java
int factor;
for (int i = 1; i <= 1000; i++) {
    factor = 0;
    for (int j = 1; j < i; j++) {
        if (i % j == 0) {
            factor += j;
        }
    }
    if (i == factor) {
        System.out.println(i);
    }
}
```

优化：

```java
int factor;
for (int i = 1; i <= 1000; i++) {
    factor = 0;
    for (int j = 1; j <= i/2; j++) {
        if (i % j == 0) {
            factor += j;
        }
    }
    if (i == factor) {
        System.out.println(i);
    }
}
```



### 7.7 读入整数并判断个数

 【题目】从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，输入为 0 时结束程序。

【代码】

```java
import java.util.Scanner;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: ForWhileTest
 * @Description: 判断读入正数和负数的个数
 * @Author: wugenqiang
 * @Date: 2020/4/7 14:51
 */
public class ForWhileTest {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int positiveNumber = 0;//记录正数的个数
        int negativeNumber = 0;//记录负数的个数

        while (true) {
            int number = scan.nextInt();

            //判断number的正负情况
            if (number > 0) {
                positiveNumber++;
            } else if (number < 0) {
                negativeNumber++;
            } else {
                //一旦执行break，跳出循环
                break;
            }
        }
        System.out.println("输入的正数个数为：" + positiveNumber);
        System.out.println("输入的负数个数为：" + negativeNumber);
    }
}
```

> 注意：

* 不在循环条件部分限制次数的结构：for( ; ; ) 或者 while(true)
* 结束循环有几种方式：
  * 方式一：循环条件部分返回 false
  * 方式二：在循环体中执行 break

### 7.8 素数问题

#### 7.8.1 遍历输出 100 以内的素数

* 版本一：未优化状态

```java
public void isPrime(int n) {
    for (int i = 2; i <= n; i++) {
        boolean isFlag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isFlag = false;
            }
        }
        if (isFlag == true) {
            System.out.println(i);
        }
    }  
}
```

* 版本二：增加 break

```java
public void isPrime(int n) {
    for (int i = 2; i <= n; i++) {
        boolean isFlag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isFlag = false;
                break;
            }
        }
        if (isFlag == true) {
            System.out.println(i);
        }
    }  
}
```

* 版本三：增加 sqrt(i)

```java
public void isPrime(int n) {
    for (int i = 2; i <= n; i++) {
        boolean isFlag = true;
        for (int j = 2; j <= Math.sqrt(i); j++) {
            if (i % j == 0) {
                isFlag = false;
                break;
            }
        }
        if (isFlag == true) {
            System.out.println(i);
        }
    }  
}
```

### 7.9 面向对象

#### 7.9.1 计算圆的面积

【题目】

利用面向对象的编程方法，设计类 Circle 计算圆的面积。

【代码实现】

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: CircleTest
 * @Description: Circle
 * @Author: wugenqiang
 * @Date: 2020/4/10 17:01
 */
//测试类
public class CircleTest {
    public static void main(String[] args) {
        //创建对象
        Circle c1 = new Circle();
        c1.radius = 2.1;
        //对应方式一：
        //System.out.println(c1.findArea());
        //对应方式二：
        c1.findArea();
    }
}

//圆
class Circle {
    //属性
    double radius;
    //求圆的面积
    //方式一：
    /*public double findArea() {
        double area = Math.PI * radius * radius;
        return  area;
    }*/
    //方式二：
    public void findArea() {
        double area = Math.PI * radius * radius;
        System.out.println("面积为：" + area);
    }
}
```

#### 7.9.2 对象数组：打印学生信息并排序

【题目】

![image-20200410171649289](../../images/image-20200410171649289.png)

【代码实现】

* 版本一：

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: StudentTest
 * @Description: 对象数组练习
 * @Author: wugenqiang
 * @Date: 2020/4/11 21:11
 */
public class StudentTest {
    public static void main(String[] args) {
        //Student s1 = new Student();
        //声明Student类型的对象数组
        Student[] stus = new Student[20];

        for (int i = 0; i < stus.length; i++) {
            //给数组元素赋值
            stus[i] = new Student();
            //给Student对象的属性赋值
            stus[i].number = (i + 1);
            //年级：[1,6]
            stus[i].state = (int)(Math.random() * (6 - 1 + 1) + 1);
            //成绩：[0,100]
            stus[i].score = (int)(Math.random() * (100 - 0 + 1));
        }

        //遍历学生数组
        for (int i = 0; i < stus.length; i++) {
            //System.out.println(stus[i]);//输出地址值
            //System.out.println(stus[i].number + "," + stus[i].state + "," + stus[i].score);
            System.out.println(stus[i].info());
        }
        System.out.println("************");
        //问题1：打印出3年级的学生信息
        for (int i = 0; i < stus.length; i++) {
            if (stus[i].state == 3) {
                System.out.println(stus[i].info());
            }
        }
        System.out.println("************");
        //问题2：冒泡排序，按学生成绩排序
        for (int i = 0; i < stus.length - 1; i++) {
            for (int j = 0; j < stus.length - 1 - i; j++) {
                if (stus[j].score > stus[j + 1].score) {
                    Student temp = stus[j];
                    stus[j] = stus[j + 1];
                    stus[j + 1] = temp;
                }
            }
        }
        //遍历学生数组
        for (int i = 0; i < stus.length; i++) {
            System.out.println(stus[i].info());
        }
    }
}

class Student {
    int number;//学号
    int state;//年级
    int score;//成绩

    //显示学生信息的方法
    public String info() {
        return "学号：" + number + "，年级：" + state + "，成绩：" + score;
    }
}
```

* 版本二：优化版本一

```java
package com.wugenqiang.oop;

/**
 * @version v1.0
 * @ProjectName: Java-Basic
 * @ClassName: StudentTest
 * @Description: 对象数组练习
 * @Author: wugenqiang
 * @Date: 2020/4/11 21:11
 */
public class StudentTest {
    public static void main(String[] args) {
        //Student s1 = new Student();
        //声明Student类型的对象数组
        Student[] stus = new Student[20];

        for (int i = 0; i < stus.length; i++) {
            //给数组元素赋值
            stus[i] = new Student();
            //给Student对象的属性赋值
            stus[i].number = (i + 1);
            //年级：[1,6]
            stus[i].state = (int)(Math.random() * (6 - 1 + 1) + 1);
            //成绩：[0,100]
            stus[i].score = (int)(Math.random() * (100 - 0 + 1));
        }
        //造对象
        StudentTest test = new StudentTest();
        //遍历学生数组
        test.print(stus);

        System.out.println("************");

        //问题1：打印出3年级的学生信息
        test.searchState(stus, 3);

        System.out.println("************");

        //问题2：冒泡排序，按学生成绩排序
        test.sort(stus);
        test.print(stus);
    }

    //遍历Student[]数组的操作，封装到方法里
    public void print(Student[] stus) {
        //遍历学生数组
        for (int i = 0; i < stus.length; i++) {
            System.out.println(stus[i].info());
        }
    }

    /**
     * @Description 查找Student数组中指定年级的学生信息
     * @param stus 要查找的数组
     * @param state 要找的年级
     */
    public void searchState(Student[] stus, int state) {
        for (int i = 0; i < stus.length; i++) {
            if (stus[i].state == state) {
                System.out.println(stus[i].info());
            }
        }
    }

    /**
     * @Description 给Student数组排序
     * @param stus 要排序的数组
     */
    public void sort(Student[] stus) {
        for (int i = 0; i < stus.length - 1; i++) {
            for (int j = 0; j < stus.length - 1 - i; j++) {
                if (stus[j].score > stus[j + 1].score) {
                    Student temp = stus[j];
                    stus[j] = stus[j + 1];
                    stus[j + 1] = temp;
                }
            }
        }
    }
}

class Student {
    int number;//学号
    int state;//年级
    int score;//成绩

    //显示学生信息的方法
    public String info() {
        return "学号：" + number + "，年级：" + state + "，成绩：" + score;
    }
}
```



