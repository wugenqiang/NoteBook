# Java 入门基础编程笔记

> [Java 入门基础编程视频](https://www.bilibili.com/video/BV1zE41197bw)

## 前言

本人在学习计算机专业知识的过程中，深知学习笔记的重要性，所以整理了相关学习笔记，为了在需要的时候方便查看，目前正在逐渐完善和补充中，如果本学习笔记有幸被您光顾和使用，在使用中出现任何疑问或者有更好的见解的话，可以右下角 OPEN CHAT 我，也可以右上角 邮我，当然还可以加入我的讨论组，如果觉得本书对你有帮助，可以打赏我，以鼓励我更好的创作，下面附赞助二维码，再次谢谢您的大力支持！

<div ><img src="https://wugenqiang.gitee.io/cs-notes/images/pay/wechat-pay.png" width="200" height="200" /></div>

> 觉得文章好，不妨请我喝杯 Coffee，祝福好心人年年高升！

---

### 软件开发介绍

* 软件，即一系列按照特定顺序组织的计算机数据和指令的集合，分为：
  * 系统软件
  * 应用软件
* 人机交互方式分为：
  * 图形化界面（Graphical User Interface GUI）
  * 命令行方式（Command Line Interface CLI）

### 常用的 DOS 命令

* dir 列出当前目录下的文件以及文件夹
* md 创建目录
* rd 删除目录
* cd 进入指定目录
* cd.. 退回到上一级目录
* cd /退回到根目录
* del 删除文件
* exit 退出 dos 命令行

### 编程语言介绍

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

### 选择 Java 语言

![image-20200401142030208](../../images/image-20200401142030208.png)

* Java 面向对象，开发效率高
* Java 从业人多，框架丰富，优秀
* Java 市场需求好 【查看编程语言使用排名：[TIOBE](https://www.tiobe.com/tiobe-index//)】

![image-20200401143735597](../../images/image-20200401143735597.png)

## Java 语言概述

* 是 SUN（Stanford University Network，斯坦福大学网络公司）1995 年退出的高级编程语言
* Java 成为 Web 应用程序的首选开发语言
* 后台开发：Java、PHP、Python、Go、Node.js

### Java 技术体系平台

* Java SE（Java Standard Edition）标准版，以前称为 J2SE，支持面向桌面级应用，提供了完整的 Java 核心 API
* Java EE（Java Enterprise Edition）企业版，以前称为 J2EE，包含 Servlet、Jsp 等
* Java ME（Java Micro Edition）小型版，以前称为 J2ME，支持移动终端
* Java Card，支持 Java 小程序（Applets）运行在小内存设备（如智能卡）上的平台

### Java 在各领域的应用

* 企业级应用：Java 后台开发
* Android 平台应用：客户端开发
* 大数据平台开发：提供 API 接口编程
* 移动领域应用：用于消费和嵌入式领域

### Java 语言的特点

* 特点一：面向对象
  * 两个基本概念：类和对象
  * 三大特性：封装、集成和多态
* 特点二：健壮性
  * 去除指针、内存的申请与释放
  * 提供了一个相对安全的内存管理和访问机制
* 特点三：跨平台性
  * Write Once，Run Anywhere.
  * 原理：只要在需要运行 Java 应用程序的操作系统上，先安装一个 Java 虚拟机（Java Virtual Machine JVM）即可，由 JVM 来负责 Java 程序在该系统中的运行

### Java 语言运行机制

* Java 虚拟机（Java Virtal Machine）
* 垃圾收集机制（Garbage Collection）

### Java 基础知识图解

![image-20200401164126895](../../images/image-20200401164126895.png)



### 第一个程序：HelloWorld

```java
public class HelloWorld {  
    public static void main(String[] args){
        System.out.println("HelloWorld\n");
    }
}
```

## Java 基本语法

### 关键字和保留字

* 关键字（Keyword）
  * 用做专门用途的字符串
  * 特点：关键字中所有字母都为小写

![image-20200401165755510](../../images\image-20200401165755510.png)

![image-20200401165946696](../../images/image-20200401165946696.png)

* 保留字（reserved word）
  * 现有 Java 版本尚未使用，但以后版本可能作为关键字使用，自己命名标识符时要避免使用这些保留字。
  * goto，const

### 标识符

* 标识符（identifier）
  * Java 对各种变量、方法和类等要素命名时使用的字符序列称为标识符。
* 定义合法标识符规则：

![image-20200401170717631](../../images/image-20200401170717631.png)

* 名称命名规范：

![image-20200401172144197](../../images/image-20200401172144197.png)

!> Java 采用 unicode 字符集，因此标识符也可以使用汉字声明，但是不建议使用。

### 变量

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

#### 数据类型

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



#### 基本数据类型变量间转换

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



####  基本数据类型与 String 间转换

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

#### 进制与进制间的转换

![image-20200403140046989](../../images/image-20200403140046989.png)

> 反码与补码举例：

![image-20200403140533376](../../images/image-20200403140533376.png)

?> 注：计算机底层都以补码的方式来存储数据！

### 运算符

> 运算符是一种特殊的符号，用以表示数据的运算、赋值和比较。

* 算术运算符
* 赋值运算符
* 比较运算符（关系运算符）
* 逻辑运算符
* 位运算符
* 三元运算符

#### 算术运算符

![image-20200404160140219](../../images/image-20200404160140219.png)

##### 打印三位数逆序显示

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

#### 赋值运算符

![image-20200404162908011](../../images/image-20200404162908011.png)

#### 比较运算符

![image-20200404164025844](../../images/image-20200404164025844.png)

#### 逻辑运算符

![image-20200404164553577](../../images/image-20200404164553577.png)





