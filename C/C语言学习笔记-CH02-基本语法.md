## 第二章 基本语法

### 2.1 数据的表现形式

1.常量

在程序运行过程中，其值不能被改变的量称为常量

常量有以下几类：

（1）整型常量：如 1000，12345，0，-234 等

（2）实型常量：十进制小数形式、指数形式

（3）字符常量：① 普通字符，用单撇号括起来的一个字符，如 'a', 'Z' 等  ② 转义字符，如 '\'','\\' 等

（4）字符串常量：用双引号引起来的多个字符，如 "China" 等

（5）符号常量：用 #define 指令，指定用一个符号名称代表一个常量，如：

```c
#define PI 3.1416
```

> 符号常量的优点：含义清楚、一改全改



2.变量

变量代表一个有名字的、具有特定属性的一个存储单元，它用来存放数据，也就是存放变量的值。在程序运行期间，变量的值是可以改变的。

> 变量必须先定义，后使用。



3.常变量

 C99 允许使用常变量：

```c
const int AMOUNT = 100;
```

常变量是有名字的不变量，而常量是没有名字的不变量。

> 常变量和符号常量有什么不同？

答：定义符号常量用 #define 指令，它是预编译指令，它知识用符号常量代表一个字符串，在预编译时仅是进行字符替换，在预编译后，符号常量就不存在了，对符号常量的名字是不分配存储单元的。而常变量要占用存储单元，有变量值，只是该值不改变。



4.标识符

 标识符就是一个对象的名字。如变量名、函数名等等

C语言规定标识符只能由字母、数字和下划线 3 种字符组成，且第一个字符必须为字母或下划线。



### 2.2 数据类型

![](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423181641.png)

（1）int 型

* 编译系统分配给 int 型数据 2 个字节或 4 个字节（VC++ 6.0 就是分配 4 个字节）。
* 在存储单元中的存储方式：用整数的补码形式存放。

* int 表示一个寄存器的大小

（2）short int 型

* 分配 2 个字节

（3）long int 型

* 分配 4 个字节，在一个整数的末尾加大写字母 L 或小写字母 l 即可表示为 long int 型

（4）long long int 型

* 分配 8 个字节

（5）字符 char 类型

* 分配 1 个字节

（6）float 类型(单精度浮点型)

* 分配 4 个字节

（7）double 类型(双精度浮点型)

* 分配 8 个字节

（8）long double 类型(长双精度浮点型)

* Turbo C 分配给 long double 16 个字节
* Visual C++ 6.0 分配 8 个字节


### 2.3 关键字和保留标识符

| auto     | break   | case   | char     | const  |
| -------- | ------- | ------ | -------- | ------ |
| continue | default | do     | double   | else   |
| enum     | extern  | float  | for      | goto   |
| if       | int     | long   | register | return |
| short    | signed  | sizeof | static   | struct |
| switch   | typedef | union  | unsigned | void   |
| volatile | while   | inline | restrict |        |



### 2.4 赋值和初始化

* 变量初始化
* <类型名称><变量名称> = <初始值>；
* eg.	int price = 0;



### 2.5 运算符和算子

![](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423184738.png)

```c
eg.
    int a = b + 5;
```

* 计算时间差

```c
#include "stdio.h" 
/*计算时间差*/ 
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2 - t1;
	
	printf("时间差是 %d 小时 %d 分钟。",t/60, t%60); 
	
	return 0; 
}
```

* 运算符优先级

![image-20200306092454286](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185219.png)

自增、自减运算符：

         ++i 、--i ：使用 i 之前，先使 i 的值加（减）1
    
         i++ 、i-- ：在使用i之后，使 i 的值加（减）1
    
         自增、自减运算符只能用于变量，而不能用于常量或表达式。

强制类型转换运算符：

         (类型名)(表达式)

求字节数运算符：

         sizeof


### 2.6 数据的输入输出

scanf (格式输入)、printf (格式输出)

getchar (输入字符)、putchar (输出字符)

gets (输入字符串)、puts (输出字符串)

在使用它们之前需要在开头用预处理指令 #include <stdio.h>

printf 函数的一般格式

printf (格式控制，输出列表)

例如：printf (" %f 约等于 %d ", i , c );

1 类型安全

* 强类型
* 早期语言强调类型，面向底层的语言强调类型
* C语言需要类型，但是对类型的安全检查并不足够

2 sizeof

* 是一个静态运算符，给出某个类型或者变量在内存中所占据的字节数
* sizeof(int)
* sizeof(i)
* Example 01：

```c
#include <stdio.h>

int main()
{
	int a = 6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a));
	
    return 0;
}
```

3 补码

* Example 01：

```c
#include <stdio.h>

int main()
{
	char c = 255;
	int i = 255;
	printf("c=%d,i=%d\n",c,i);
	
    return 0;
}
```

4 unsigned

* 无符号整数型（0-255）
* 255u
* 用 l 或 L 表示 long
* unsigned 的初衷并非是扩展数能表达的范围，而是为了做纯二进制运算，主要是为了移位



#### 2.6.1 整数的输入输出

* 只有两种形式：int 或 long long
* %d：int
* %u：unsigned
* %ld：long long
* %lu：unsigned long long

* Example 01：

```c
#include <stdio.h>

int main()
{
	char c = -1;
	int i = -1;
	printf("c=%u,i=%u\n",c,i);
	
    return 0;
}
```

* Example 02：八进制和十六进制转换为十进制

```c
#include <stdio.h>

int main()
{
	char c = 012;//八进制 
	int i = 0x12;//十六进制 
	printf("c=%d,i=%d\n",c,i);
	
    return 0;
}
```

* Example 03：八进制和十六进制输出

```c
#include <stdio.h>

int main()
{
	char c = 012;//八进制 
	int i = 0x12;//十六进制 
	printf("c=0%o,i=0x%x\n",c,i);
	printf("c=0%o,i=0x%X\n",c,i);
	
    return 0;
}
```

 

#### 2.6.2 浮点数的输入输出

* float （4字节） 输入 %f 格式，输出 %f 或 %e
* double （8字节）输入 %lf 格式，输出 %lf 或 %e

* 科学计数法：-5.67E+16
* 输出精度：
  * 在 % 和 f 之间加上 .n 可以指定输出小数点后几位，这样的输出是做4舍5入的
  * printf("%.3f\n",-0.0046);

```c
#include <stdio.h>

int main()
{
	printf("%.3f\n",-0.0046);
	printf("%.30f\n",-0.0046);
	printf("%.3f\n",-0.00046);
	
    return 0;
}
```

* 超过范围的浮点数:
  * printf 输出 inf 表示超过范围的浮点数：±∞
  * printf 输出 nan 表示不存在的浮点数

* Example 01:

```c
#include <stdio.h>

int main()
{
	printf("%f\n",12.0/0.0);
	printf("%f\n",-12.0/0.0);
	printf("%f\n",0.0/0.0);
	
    return 0;
}
```

* 浮点运算的精度
  * f1 == f2  可能值相等，但不等
  * 利用 fabs(f1-f2)<1e-12



#### 2.6.3 字符的输入输出

* 如何输入 ‘1‘ 这个字符给 char c？

  * scanf("%c",&c);

  * ```c
    #include <stdio.h>
    
    int main()
    {
    	char c;
    	scanf("%c",&c);
    	printf("c=%d\n",c);
    	printf("c=%c\n",c);
    	
        return 0;
    }
    
    ```

* Example 01：

```c
#include <stdio.h>

int main()
{
	char c;
	char d;
	c = 1;
	d = '1';
	if(c == d){
		printf("相等\n"); 
	}else{
		printf("不相等\n");
	}
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	
    return 0;
}
```

* 字母大小写转换
  * a+'a'-'A'   大写字母变成小写字母
  * a+'A'-'a'   小写字母变成大写字母

5 逃逸字符

| 字符 |      意义      | 字符 |    意义    |
| :--: | :------------: | :--: | :--------: |
|  \b  |    回退一格    | \ "  |   双引号   |
|  \t  | 到下一个表格位 | \ '  |   单引号   |
|  \n  |      换行      | \ \  | 反斜杠本身 |
|  \r  |      回车      |      |            |

* Example 01：

```c
#include <stdio.h>

int main()
{
	printf("123\bA\n456");
	
    return 0;
}
```

6 自动类型转换

* 当运算符的两边出现不一致的类型时，会自动转换成较大的类型
* char --> short --> int --> long --> long long
* int --> float --> double
* short ----- %hd
* long ------ %ld

7 强制类型转换

* Example 01：

* (int)10.2

* (short)32

* 反例1：

* ```c
  #include <stdio.h>
  
  int main()
  {
  	printf("%d\n",(short)32768);
  	
      return 0;
  }
  ```

* 结果：-32768

* 反例2：

* ```c
  #include <stdio.h>
  
  int main()
  {
  	printf("%d\n",(char)32768);
  	
      return 0;
  }
  ```

* 结果：0

> 注：`强制类型转换的优先级高于四则运算`



### 2.7 选择结构和条件判断

C 语言有两种选择语句：

（1）if 语句，用来实现两个分支的选择结构

```c
if (表达式)
    语句1
else
    语句2
```

（2）switch 语句，用来实现多分支的选择结构

```c
switch(表达式)
{
case 常量1 ：语句1
case 常量2 ：语句2
        ...
case 常量n ：语句n
default: 语句n+1
```

### 2.8 循环结构

（1）用 while 语句实现循环

```c
while(表达式)
    语句
```

（2）用 do...while 语句实现循环

```c
do
    语句
while(表达式);
```

（3）用 for 语句实现循环

```c
for(表达式1;表达式2;表达式3)
    语句
```

* 改变循环执行的状态

（1）用 break 语句提前终止循环

```c
一般形式：break;
```

注意：break 语句还可以用来从循环体内跳出循环体，即提前结束循环，接着执行循环下面的语句。break 语句只能用于循环语句和 switch 语句之中，而不能单独使用。

（2）用 continue 语句提前结束本次循环

```c
一般形式：continue;
```

注：作用为结束本次循环，即跳过循环体中下面尚未执行的语句，转到循环体结束点之前，然后进行下一次是否执行循环的判定。

> bool

* #include <stdbool.h>
* 之后就可以使用bool和true、false

```c
#include <stdio.h>
#include <stdbool.h> 

int main()
{
	bool b = 6>5;
	printf("%d",b);
    
    return 0;
}
```

随机数

* rand()

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//主函数 
int main(){
	
	srand(time(0));
	int a = rand();
	
	printf("%d\n",a);
	
	return 0;
}
```

* x%n 的结果是[0,n-1]的一个整数

```c
printf("%d\n",a%100);
```

* Example：[猜数游戏](https://wugenqiang.github.io/CS-Notes/#/C/C-Notes?id=_004-猜数游戏)


* Example 01：

```c
#include <stdio.h>

int main()
{
	unsigned char c = 255;
	int i = 255;
	printf("c=%d,i=%d\n",c,i);
	
    return 0;
}
```

逻辑运算

| 运算符 |  描述  |   事例   |
| :----: | :----: | :------: |
|   ！   | 逻辑非 |    !a    |
|   &&   | 逻辑与 |  a && b  |
|  \|\|  | 逻辑或 | a \|\| b |

### 2.9 函数

* 函数是一块代码，接收零个或多个参数，做一件事情，并返回零个或一个值

* 函数原型，以分号结尾，即声明

* Example 01：判断素数

  ```c
  int isPrime(int i){
  	int result = 1;
  	int k;
  	for(k=2;k<i-1;k++){
  		if(i%k == 0){
  			result = 0;
  			break;
  		}
  	}
  	return result;
  }
  ```

* Example 02：求和函数 ==> 求1到10、20到30和36到45的三个和

* ```c
  void sum(int begin,int end){
  	int i;
  	int sum = 0;
  	for(i=begin;i<=end;i++){
  		sum += i;
  	}
  	printf("%d 到 %d 的和是 %d\n",begin,end,sum);
  }
  ```

* C 语言在调用函数时，永远只能传值给函数

局部变量

* 也叫：本地变量 ==> 定义在函数内部的变量
* 生存期和作用域 ==> 大括号内，即代码块

全局变量

* 定义在函数体外面

> `避免代码复制` 代码复制是代码不良的表现！

