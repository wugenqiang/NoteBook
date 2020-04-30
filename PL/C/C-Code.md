# C 语言上机题笔记

> C语言程序设计第四版——谭浩强著，此书中的代码题大部分已经在本文中展示，以及南开大学 C 语言上机题库 100 题的作答，如果有作答不正确的地方或者可优化的地方，欢迎指正，谢谢！

## 001 屏幕输出指定信息

【题目】要求再屏幕上输出以下一行信息

This is a C program.

【代码】

```c
#include <stdio.h> 

int main(){
	printf("This is a C program.\n");
	return 0;
} 
```

## 002 求两个整数之和

【题目】a + b = ?

【代码】

```c
#include <stdio.h> 

int main(){
	int a,b,sum;
	a = 123;
	b = 456;
	sum = a + b;
	printf("sum = %d\n",sum); 
	return 0;
} 
```

## 003 求两个整数中较大者

【题目】求两个整数中较大者

【代码】

```c
#include <stdio.h> 

int max(int x,int y);

int main(){
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c = max(a,b);
	printf("max = %d\n",c);
	return 0;
} 
//求两个整数中较大者 
int max(int x,int y){
	return x>y?x:y; 
}
```

## 004 求三个整数中的最大者

【题目】编写一个 C 程序，输入 a，b，c 三个整数，输出其中最大者

【代码】

* Example 01：

```c
#include <stdio.h> 

int max(int x,int y,int z);

int main(){
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d = max(a,b,c);
	printf("max = %d\n",d);
	return 0;
} 
//求3个整数中较大者 
int max(int x,int y,int z){
	int t;
	if(x>y) {
		if(x>z){
			t = x;
		}else {
			t = z;
		}
	}else if(y<z){
			t = z;
		}else{
			t = y;
		}
	return t; 
}
```

* Example 02：对 01 代码进行了优化

```c
#include <stdio.h> 

int max(int x,int y,int z);

int main(){
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d = max(a,b,c);
	printf("max = %d\n",d);
	return 0;
} 
//求3个整数中较大者 
int max(int x,int y,int z){
	int max = x;
	if(max<y){
		max = y;
	}
	if(max<z){
		max = z;
	}
	return max; 
}
```

## 005 求1×2×3×4×5

【题目】求1×2×3×4×5

【代码】

```c
#include <stdio.h> 

int factorial(int n);

int main(){
	int result;
	result = factorial(5); 
	printf("1×2×3×4×5 = %d\n",result);
	return 0;
} 
//求1×2×3×4×5 (5! 阶乘)
int factorial(int n){
	int i=2,t=1;
	while(i<=n){
		t *= i;
		i++;
	}
	return t; 
}
```

## 006 求多项式1-1/2+1/3-1/4+...+1/99-1/100

【题目】求多项式1-1/2+1/3-1/4+...+1/99-1/100

【代码】

```c
#include <stdio.h> 

double sum(int n);

int main(){
	printf("%lf\n",sum(100));
	return 0;
}

double sum(int n){
	int sign = 1;
	double result = 1.0;
	int i = 2;
	while(i<=n){
		sign = -sign;
		result += (double)sign/i;
		i++;
	}
	return result;
}
```

## 007 输出给定小写字母

【题目】给定一个大写字母，要求用小写字母输出

【代码】

```c
#include <stdio.h> 

int main(){
	char c1,c2;
	c1 = 'A';
	c2 = c1 + 32;
	printf("%c\n",c2);
	printf("%d\n",c2);
	return 0;
}
```

## 008 从键盘输入字符输出

【题目】从键盘输入BOY 3个字符，然后把他们输出到屏幕

【代码】

```c
#include <stdio.h> 

int main(){
	char a,b,c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
```

## 009 输出任意小写字母

【题目】`改写 007`，从键盘上输入一个大写字母，在显示屏上显示对应的小写字母

【代码】

```c
#include <stdio.h> 

int main(){
	char c1,c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;
}
```

## 010 判别是否为大写字母

【题目】输入一个字符，判别它是否为大写字母，如果是，将它转换成小写字母；如果不是，则不转换。然后输出最后得到的字符

【代码】

```c
#include <stdio.h> 

int main(){
	char c;
	scanf("%c",&c);
	c = (c>='A'&&c<='Z')?(c+32):c;
	printf("%c\n",c); 
	return 0;
}
```

## 011 成绩按等级输出

【题目】要求按照考试成绩的等级输出百分制分数段，A等为85分以上，B等为70 ~ 84，C等60 ~ 69，D等为60分以下。成绩的等级由键盘输入

【代码】

```c
#include <stdio.h> 

int main(){
	char grade;
	scanf("%c",&grade);
	printf("Your score：");
	switch(grade){
		case 'A': printf("85-100\n");break;
		case 'B': printf("70-84\n");break;
		case 'C': printf("60-69\n");break;
		case 'D': printf("<60\n");break;
		default:  printf("enter data error！\n");
	}
	 
	return 0;
}
```

## 012 判断闰年

【题目】写一程序，判断某一年是否为闰年

【代码】

```c
#include <stdio.h> 
#include <stdbool.h>

bool isLeap(int year);

int main(){
	int year;
	scanf("%d",&year);
	if(isLeap(year)){
		printf("%d is ",year);
	}else{
		printf("%d is not ",year);
	}
	printf("a leap year.\n");
	 
	return 0;
}

bool isLeap(int year){
	bool leap = false;
	if((year%4==0 && year%100!=0)||(year%400==0)){
		leap = true;
	}
	return leap;
}
```

## 013 求1+2+3+...+100

【题目】

【代码】

* Example 01：[ while 语句实现 ]

```c
#include <stdio.h> 

int sum(int n);

int main(){
	printf("%d\n",sum(100));
	return 0;
}

int sum(int n){
	int result = 0;
	int i = 1;
	while(i<=n){
		result += i;
		i++;
	}
	return result;
}
```

* Example 02：[ do...while 语句实现 ]

```c
#include <stdio.h> 

int sum(int n);

int main(){
	printf("%d\n",sum(100));
	return 0;
}

int sum(int n){
	int result = 0;
	int i = 1;
	do{
		result += i;
		i++;
	}while(i<=n);
	return result;
}
```

* Example 03：[ for 语句实现 ]

```c
#include <stdio.h> 

int sum(int n);

int main(){
	printf("%d\n",sum(100));
	return 0;
}

int sum(int n){
	int result = 0;
	int i;
	for(i=1;i<=n;i++){
		result += i;
	}
	return result;
}
```

## 014 输出以下4*5的矩阵

【题目】输出以下4*5的矩阵

1		2		  3	     4		   5

2		4		  6		  8		10

3		6		  9		12		15

4		8		12	    16		20

【代码】

```c
#include <stdio.h> 

int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=5;j++){
			printf("%d\t",i*j);
			if(j%5 == 0){
				printf("\n");
			}		
		}
		printf("\n");
	}
	return 0;
}
```

## 015 求最大公约数和最小公倍数

【题目】输入两个正整数m和n，求其最大公约数和最小公倍数

【思路】

* 思路一：辗转相除法
  * 有两整数a和b：
  * ① a%b得余数c
  * ② 若c=0，则b即为两数的最大公约数
  * ③ 若c≠0，则a=b，b=c，再回去执行①
* 思路二：相减法
  * 有两整数a和b：
  * ① 若a>b，则a=a-b
  * ② 若a<b，则b=b-a
  * ③ 若a=b，则a（或b）即为两数的最大公约数
  * ④ 若a≠b，则再回去执行①
* 思路三：穷举法
  * ① i= a(或b)
  * ② 若a，b能同时被i整除，则i即为最大公约数，结束
  * ③ i–，再回去执行②

【代码】

* Example 01：[ 辗转相除法求最大公约数 ] 

```c
#include <stdio.h> 

int main(){
	int m,n,a,b,c;
	scanf("%d,%d",&m,&n);
	a = m;
	b = n;
	// 辗转相除法求最大公约数 
	while(b){
		c = a%b;
		a = b;
		b = c;
	}
	printf("最大公约数为%d\n",a);
	//最小公倍数=两整数的乘积÷最大公约数
	printf("最小公倍数为%d\n",m*n/a);
	
	return 0;
}
```

* Example 02：

```c
#include <stdio.h> 

int gcd(int a,int b);
 
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int a = gcd(m,n);
	printf("最大公约数为%d\n",a);
	//最小公倍数=两整数的乘积÷最大公约数
	printf("最小公倍数为%d\n",m*n/a);
	
	return 0;
}
//求最大公约数
int gcd(int a,int b)
{
	int c;
	// 辗转相除法求最大公约数 
	while(b){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}
```

* Example 03：

```c
#include <stdio.h> 

int gcd(int a,int b);
 
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int a = gcd(m,n);
	printf("最大公约数为%d\n",a);
	//最小公倍数=两整数的乘积÷最大公约数
	printf("最小公倍数为%d\n",m*n/a);
	
	return 0;
}
//求最大公约数
int gcd(int a,int b)
{
	int g;
	if(b==0)g=a;
	else g=gcd(b,a%b);
	return g;
}
```

* Example 04：[相减法]

```c
#include <stdio.h> 

int gcd(int a,int b);
 
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int a = gcd(m,n);
	printf("最大公约数为%d\n",a);
	//最小公倍数=两整数的乘积÷最大公约数
	printf("最小公倍数为%d\n",m*n/a);
	
	return 0;
}
//求最大公约数
int gcd(int a,int b)
{
	// 相减法求最大公约数 
	while(a != b){
		if(a>b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}
```

* Example 05：[穷举法]

```c
#include <stdio.h> 

int gcd(int a,int b);
 
int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int a = gcd(m,n);
	printf("最大公约数为%d\n",a);
	//最小公倍数=两整数的乘积÷最大公约数
	printf("最小公倍数为%d\n",m*n/a);
	
	return 0;
}
//求最大公约数
int gcd(int a,int b)
{
	int c;
	// 穷举法求最大公约数 
	for(c=a;c>0;c--){
		if(a%c==0&&b%c==0){
			break;
		}
	}
	return c;
}
```

## 016 数组元素逆序输出

【题目】对10个数组元素依次赋值为0,1,2,3,4,5,6,7,8,9 要求按逆序输出

【代码】

* Example 01：( 直接赋初值)

```c
#include <stdio.h> 

int main(){
	int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
```

* Example 02：( for 循环赋初值)

```c
#include <stdio.h> 

int main(){
	int i,a[10];
	for(i=0;i<10;i++){
		a[i] = i;
	}
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
```

 ## 017 数组求Fibonacci数列问题

【题目】使用数组求Fibonacci数列问题

【代码】

```c
#include <stdio.h> 
#define _Max 20

int main(){
	int i;
	int f[_Max]={1,1};
	for(i=2;i<_Max;i++){
		f[i] = f[i-2] + f[i-1];
	}
	for(i=0;i<_Max;i++){
		if(i%5==0){
			printf("\n");
		}
		printf("%12d",f[i]);
	}
	printf("\n");
	
	return 0;
}
```

## 018 对n个数升序排序

【题目】对n个数按升序排序

【代码】

* Example 01：( 冒泡法排序 )

```c
#include <stdio.h> 
#define N 5

int main(){
	int a[N];
	int i,j,t;
	printf("input %d numbers:\n",N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N-1;i++){
		for(j=0;j<N-1-i;j++){
			if(a[j]>a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
```

## 019 二维数组行列元素互换

【题目】将一个二维数组行与列的元素互换，存到另一个二维数组中，比如：
$$
a = 
\left[
\begin{matrix}
1 & 2 & 3 \\
4 & 5 & 6 
\end{matrix}
\right]

b =
\left[
\begin{matrix}
1 & 4 \\
2 & 5 \\
3 & 6
\end{matrix}
\right]
$$
 【代码】     

```c
#include <stdio.h> 
#define M 2
#define N 3

int main(){
	
	int a[M][N] = {{1,2,3},{4,5,6}};
	int b[N][M];
	int i,j;
	printf("array a：\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%5d",a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("array b：\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
```

## 020 输出已知的字符串

【题目】输出一个已知的字符串。

【代码】

* Example 01：利用字符数组

```c
#include <stdio.h>

int main(){
	char c[15] = {'I',' ','a','m'};
	int i;
	for(i=0;i<15;i++){
		printf("%c",c[i]);
	}
	printf("\n");
	return 0;
} 
```

* Example 02：

```c
#include <stdio.h>

int main(){
	char c[15] = {"I am"};
	printf("%s\n",c);
	return 0;
} 
```

* Example 03：使用 puts(str);

```c
#include <stdio.h>

int main(){
	char c[15] = {"I am"};
	puts(c);
	return 0;
} 
```

## 021 统计单词个数

【题目】输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。

【思路】

![](https://wugenqiang.github.io/PictureBed/CS-Notes/20200316113622.jpg)

【代码】

```c
#include <stdio.h> 

int main(){
	char string[81];
	int i,num = 0,word = 0;
	char c;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++){
		if(c == ' '){
			word = 0;
		}else if(word == 0){
			word = 1;
			num++;
		}
	}
	printf("There are %d words in this line.\n",num);
	
	return 0;
}
```

## 022 字符串中找最大者

【题目】有3个字符串，要求找出其中最大者

【思路】

![](https://wugenqiang.github.io/PictureBed/CS-Notes/20200316122120.jpg)

【代码】

```c
#include <stdio.h>
#include <string.h> 

int main(){
	char str[3][20];	//定义二维字符数组 
	char string[20];	//定义一维字符数组，作为交换字符串时候的临时字符数组	 
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0){
		strcpy(string,str[0]);
	}else{
		strcpy(string,str[1]);
	}
	if(strcmp(str[2],string)>0){
		strcpy(string,str[2]);
	}
	printf("\nThe largest string is：%s\n",string);
	
	return 0;
}
```

## 023 筛选法求素数

【题目】用筛选法求 100 之内的素数

【代码】

```c
#include <string.h> 

int main(){
	int i,j,a[100];
	for(i=2;i<100;i++){
		a[i] = i;
		for(j=2;j<=i;j++){
			if(j<i && a[i]%j==0){
				break;
			}
			if(a[i] == j){
				printf("%5d",a[i]);
			}
		}
		
	}
	return 0;
}
```

## 024 选择法排序

【题目】用选择法对 10 个整数排序

【代码】

* Example 01：

```c
#include <stdio.h>
#include <string.h> 

int main(){
	int i,j,a[10],t;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<10;j++){
		for(i=0;i<10-j;i++){
			if(a[i]>a[i+1]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%5d",a[i]);
	}
	return 0;
}
```

* Example 02：

```c
#include <stdio.h>
#define N 10

void sort(int array[],int n);

int main(){
	int a[N];
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,N);
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

void sort(int array[],int n){
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k = i;
		for(j=i+1;j<n;j++){
			if(array[j]<array[k]){
				k = j;
			}
		}
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}
```



## 025 对角线元素之和

【题目】求一个3×3矩阵对角线元素之和

【代码】

```c
#include <stdio.h>
#include <string.h> 

int main(){
	int i,j,a[3][3],s1,s2;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	s1 = a[0][0] + a[1][1] + a[2][2];
	s2 = a[0][2] + a[1][1] + a[2][0];
	printf("s1 = %d, s2 = %d\n",s1,s2);
	return 0;
}
```

## 026 用递归方法求 n！

【题目】用递归方法求 n！

【思路】

![image-20200318165046564](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423171925.png)

【代码】

```c
#include <stdio.h>
int fac(int n); 

int main(){
	int n;
	int y;
	scanf("%d",&n);
	y = fac(n);
	printf("%d!=%d\n",n,y);
	
	return 0;
}

int fac(int n){
	int f;
	if(n<0){
		printf("n<0,data error!");
	}else if(n==0||n==1){
		f = 1;
	}else{
		f = fac(n-1)*n;
	}
}
```

## 027 Hanoi(汉诺)塔问题

【题目】

![image-20200318170450483](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423171937.png)

【代码】

```c
#include <stdio.h>

void hanoi(int n,char one,char two,char three);
void move(char x,char y);
 
int main(){
	int m;
	scanf("%d",&m);
	hanoi(m,'A','B','C');
	return 0;
}

void hanoi(int n,char one,char two,char three){
	if(n == 1){
		move(one,three);
	}else{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}

void move(char x,char y){
	printf("%c->%c\n",x,y);
}
```

## 028 数组输出元素

【题目】输入10个数，要求输出其中值最大的元素和该数是第几个数。

【代码】

```c
#include <stdio.h>
#define N 10

int max(int x,int y);

int main(){
	int a[N];
	int i,t,number = 0;
	printf("enter 10 integer numbers：");
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	} 
	printf("\n");
	t = a[0];
	for(i=1;i<N;i++){
		if(max(t,a[i])>t){
			t = max(t,a[i]);
			number = i;
		}
	}
	printf("The largest number is %d\nit is the %d number.\n",t,number+1);
	return 0;
}

int max(int x,int y){
	return x>y?x:y;
}
```

## 029 删除字符串中指定字符

【题目】有一个字符串，内有若干个字符，现输入一个字符，要求程序将字符串中该字符删去。

【代码】

```c
#include <stdio.h>
#define N 80

void enterString(char str[]);
void deleteString(char str[],char ch);
void printString(char str[]);

int main(){
	char c,str[N];
	enterString(str);
	scanf("%c",&c);  //要求删的字符
	deleteString(str,c);
	printString(str); 
	return 0;
}

void enterString(char str[]){
	gets(str);
}

void deleteString(char str[],char ch){
	int i,j;
	for(i=0,j=0;str[i]!='\0';i++){
		if(str[i]!=ch){
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}

void printString(char str[]){
	printf("%s\n",str);
}
```

## 030 指针访问整型变量

【题目】通过指针变量访问整型变量

【代码】

```c
#include <stdio.h>

int main(){
	int a = 100;
	int *p;
	p = &a;
	printf("*p = %d\n",*p);
	return 0;
}
```

## 031 逆序的三位数

【题目】

程序每次读入一个正三位数，然后输出逆序的数字。

注意，当输入的数字含有结尾的 0 时，输出不应带有前导的 0 。比如输入 700 ，输出应该是 7 。

提示：用 %10 可以得到个位数，用 /100 可以得到百位数...。将这样得到的三个数字合起来：百位 * 100 + 十位 * 10 + 个位，就得到了结果。

【输入格式】

每个测试是一个3位的正整数。

【输出格式】

输出逆序的数。

【输入样例】

123

【输出样例】

321

【时间限制】

500ms内存限制：32000kb

【参考代码】

* C 版

```c
#include <stdio.h>
int main()
{
    int t1,t2,mt1,mt2,mt3;
    
    scanf("%d",&t1);	//输入
     
    mt1=t1/100; mt2=(t1-mt1*100)/10; mt3=t1%10;
    t2=mt3*100+mt2*10+mt1;
    
    printf("%d\n",t2);	//输出
     
    return 0;
}
```

## 032 数位数

* Example 01：先判断后执行
```c
int main()
{
	int x;
	int count = 0;
	
	printf("请输入一个任意数："); 
	scanf("%d",&x); 
	
	count++;
	x /= 10;
	while(x > 0)
	{
		count++;
		x /= 10;
	}
	
	printf("该数有 %d 位！\n",count);
    
    return 0;
}
```

* Example 02：先执行后判断
```c
#include <stdio.h>
//数位数 
int main()
{
	int x;
	int count = 0;
	
	printf("请输入一个任意数："); 
	scanf("%d",&x); 
	
	do
	{
		x /= 10;
		count++;
	}while(x>0);
	
	printf("该数有 %d 位！\n",count);
    
    return 0;
}
```

## 033 求阶乘n！

【题目】写一个程序，让用户输入n,然后计算输出n! 
【代码】

* `Example 01：`

``` c
#include <stdio.h>
//求阶乘n！ 
//题目：写一个程序，让用户输入n,然后计算输出n! 
int main()
{
	int n;
	int i=1;
	int fact = 1;//阶乘 
	
	printf("请输入一个任意数n："); 
	scanf("%d",&n); 
	
/*	while(i<=n)
	{
		fact *= i; 
		i++;
	}*/
	for(i=2;i<=n;i++)
	{
		fact *= i; 
	}
	
	printf("%d!= %d\n",n,fact);
    
    return 0;
}
```

* `Example 02:`

```c
#include <stdio.h>

int main()
{
	int n;
	int i=1;
	int fact = 1;//阶乘 
	
	printf("请输入一个任意数n："); 
	scanf("%d",&n); 
	
	for(i=n;i>1;i--)
	{
		fact *= i; 
	}
	
	printf("%d!= %d\n",n,fact);
    
    return 0;
}
```



## 034 猜数游戏

【题目】系统随机生成数字，猜数字

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//主函数 
int main(){
	
	srand(time(0));
	int number = rand()%100 + 1;//[0,100]
	int count = 0;
	int a = 0;
	
	printf("我已经想好了一个1到100之间的数。");
	 
	do{
		printf("请猜这个1到100之间的数：");
		scanf("%d",&a);
		
		count++;
		if(a>number){
			printf("你猜的数大了\n"); 
		} else if(a<number){
			printf("你猜的数小了\n"); 
		}
	}while(a!=number);
	
	printf("太好了，你用了 %d 次就猜到了答案。\n",count);
	
	return 0;
}
```

## 035 整数逆序

* 跟 `001` 逻辑一样，但是这个地方用到了循环结构

```c
#include <stdio.h>

//主函数 
int main(){
	
	int x,digit;
	int result = 0;
	
	scanf("%d",&x);
	
	while(x>0){
		digit = x%10;
		result = result*10 + digit;
		x /= 10;
	}
	
	printf("%d",result);
	
	return 0;
}
```

## 036 判断素数

* `Example 01`

```c
#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int i;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			break;
		}
	}
	
	if(i<x){
		printf("%d 不是素数",x);
	}else{
		printf("%d 是素数",x);
	}
	
	return 0;
}
```



* `Example 02` 

```c
#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int i;
	int isPrime = 1;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			isPrime = 0;
            break;
		}
	}
	
	if(isPrime == 1){
		printf("%d 是素数",x);
	}else{
		printf("%d 不是素数",x);
	}
	
	return 0;
}
```



* Example 03：使用子函数调用的方式：去掉偶数，从3到x-1，每次加2

```c
int isPrime(int x){
    int result = 1;
    int i;
    if(x == 1 || (x%2 == 0 && x != 2)){
        result = 0;
    }
    for(i=3;i<x;i+=2){
        if(x%i == 0){
            result = 0;
            break;
        }
    }
    return result;
}
```



* Example 04：无须到x-1，到sqrt(x)就够了

```c
int isPrime(int x){
    int result = 1;
    int i;
    if(x == 1 || (x%2 == 0 && x != 2)){
        result = 0;
    }
    for(i=3;i<sqrt(x);i+=2){
        if(x%i == 0){
            result = 0;
            break;
        }
    }
    return result;
}
```

> 注：sqrt(x) 返回类型 double，引入 #include <math.h>



* Example 05：判断是否能被已知的且<x的素数整除

```c
#include <stdio.h>

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

int main(){
	
	const int number = 100;
	int prime[number];
	prime[0] = 2;
	int j;
	for(j=1;j<number;j++){
		prime[j] = 0;
	}
	int count = 1;
	int i = 3;
	while(count < number){
		if(isPrime(i,prime,count)){
			prime[count++] = i;
		}
		i++;
	} 
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5){
			printf("\t");
		}else{
			printf("\n");
		}
	}
	
	return 0;
}

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
	int result = 1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++){
		if(x%knownPrimes[i]==0){
			result = 0;
			break;
		}
	}
	return result; 
}
```



## 037 输出100以内的素数

```c
#include <stdio.h>

//主函数 
int main(){
	
	int x;
	
	for(x=2;x<100;x++){
		int i;
		int isPrime = 1;
		for(i=2;i<x;i++){
			if(x%i == 0){
				isPrime = 0;
				break;
			}
		}
	
		if(isPrime==1){
			printf("%d ",x);
		}
	}
	printf("\n");
		
	return 0;
}
```

## 038 凑硬币

【题目】如何用1角、2角和5角的硬币凑出10元以下的金额呢？

【代码】

```c
#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int one,two,five;
	
	scanf("%d",&x);
	
	for(one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("%d 个1角 + %d 个2角 + %d 个5角 = %d 元\n",one,two,five,x);
				}
			}
		}
	}
		
	return 0;
}
```



## 039 求平均数

* `Example 01：`

```c
#include <stdio.h>

int main(){
	
	int number;
	int sum = 0;
	int count = 0;
	do{
		scanf("%d",&number);
		
		if(number != -1){
			sum += number;
			count ++;
		}
	}while(number != -1);
	
	printf("%f\n",1.0*sum/count);	
	return 0;
}
```



* `Example 02:`

```c
#include <stdio.h>
 
int main(){
	
	int number;
	int sum = 0;
	int count = 0;
	
	scanf("%d",&number);
		
	while(number != -1){
		sum += number;
		count ++;
		scanf("%d",&number);
	}
	
	printf("%f\n",1.0*sum/count);	
	return 0;
}
```

## 040  水仙花数

【题目】计算所有N位水仙花数

【说明】水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。

【输入格式】

输入在一行中给出一个正整数N（3<=N<=7）

【输出格式】

按递增顺序输出所有N位水仙花数，每个数字占一行

【代码】

* Example 01：

```c
#include <stdio.h>

int main()
{
	int n;
	int first = 1;
	int i = 1;	
	scanf("%d",&n);	
	while(i<n){
		first *= 10;
		i++;
	}
	//遍历100-999
	i = first;
	while(i<first*10){
		int t = i;
		int sum = 0;
		do{
			int d = t%10;
			t /= 10;
			int p = 1;
			int j = 0;
			//int p = d;
			//int j = 1;
			while(j<n){
				p *= d;
				j++;
			}
			sum += p;
		} while(t>0);
		if(sum == i){
			printf("%d\n",i);
		}
		i++;
	} 
    
    return 0;
}
```

## 041 打印九九乘法表

* Example 01：

```c
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int i,j;
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,i*j);
			if(i*j<10){
				printf("   ");
			}else{
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
    
    return 0;
}
```



## 042 统计素数并求和

【题目】要求统计给定整数M和N区间内素数的个数并对它们求和。

【代码】

* Example 01：

```c
#include <stdio.h>

int main()
{
	int m,n;
	int i;
	int count = 0;
	int sum = 0;
	
	scanf("%d %d",&m,&n); 
	
	if(m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		int isPrime = 1;
		int k;
		for(k=2;k<i-1;k++){
			if(i%k == 0){
				isPrime = 0;
				break;
			}
		}
		//判断i是否素数
		if(isPrime){
			count++;
			sum += i;
		}		
	}
	
	printf("%d %d\n",count,sum);
	
    return 0;
}
```

* Example 02：

```c
#include <stdio.h>

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

int main(){
	int m,n;
	int i;
	int count = 0;
	int sum = 0;
	
	scanf("%d %d",&m,&n); 
	
	if(m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		
		//判断i是否素数
		if(isPrime(i)){
			count++;
			sum += i;
		}		
	}
	
	printf("%d %d\n",count,sum);
	
    return 0;
}
```





## 043 猜数游戏

【题目】

![image-20200301210457942](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423172246.png)

【代码】

* Example 01:

```c
#include <stdio.h>

int main()
{
	int number,n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d",&number,&n);
	do{
		scanf("%d",&inp);
		cnt++;
		if(inp<0){
			printf("Game Over\n");
			finished = 1;
		}else if(inp>number){
			printf("Too big\n");		
		}else if(inp<number){
			printf("Too small\n");
		}else{
			if(cnt==1){
				printf("Bingo!\n");
			} else if(cnt<=3){
				printf("Lucky You!\n");
			}else{
				printf("Good Guess!\n");
			}
			finished = 1;
		} 
		if(cnt==n){
			if(!finished){
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while(!finished);
	
    return 0;
}
```



## 044 求序列前N项和

【题目】计算序列2/1+3/2+5/3+8/5+...的前N项之和。

【代码】

* Example 01:

```c
#include <stdio.h>

int main()
{
	int n;
	double dividend,divisor;
	double sum = 0.0;
	int i;
	double t;
	scanf("%d",&n);
	dividend = 2;
	divisor = 1;
	for(i=1;i<=n;i++){
		sum += dividend/divisor;
		t = dividend;
		dividend += divisor;
		divisor = t;
	} 
	printf("%.2f\n",sum);
	
    return 0;
}
```

## 045 约分最简分式

【代码】

* Example 01：

```c
#include <stdio.h>

int main()
{
	int dividend,divisor;
	scanf("%d/%d",&dividend,&divisor);
	int a = dividend;
	int b = divisor;
	int t;
	while(b>0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d/%d\n",dividend/a,divisor/a);
	
    return 0;
}
```

## 046 念数字

【题目】输入一个整数，输出每个数字对应的拼音

【代码】

* Example 01：

```c
#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	if(x<0){
		printf("fu ");
		x = -x;
	}
	int mask = 1;
	int t = x;
	while(t>9){
		t /= 10;
		mask *= 10;
	}
	do{
		int d = x / mask;
		switch(d){
			case 0: printf("ling");break;
			case 1: printf("yi");break;
			case 2: printf("er");break;
			case 3: printf("san");break;
			case 4: printf("si");break;
			case 5: printf("wu");break;
			case 6: printf("liu");break;
			case 7: printf("qi");break;
			case 8: printf("ba");break;
			case 9: printf("jiu");break;
		}
		if(mask>9){
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while(mask>0);
	printf("\n"); 
	
    return 0;
}
```

## 047 求a的连续和

【题目】S = a + aa + aaa + ... +aaa...a（n个a）

例如：S = 2 + 22 + 222 （3个2）

【代码】

* Example 01：

```c
#include <stdio.h>

int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int sum = 0;
	int i;
	int t = 0;
	for(i=0;i<n;i++){
		t = t*10 + a;
		sum += t;
	} 
	printf("%d\n",sum);
	
    return 0;
}
```



## 048 输出平均数和大于平均数的数

【代码】

* Example 01：

```c
#include <stdio.h>
 
int main(){
	
	int x;
	double sum = 0;
	int count = 0;
	int number[100];	
	scanf("%d",&x);		
	while(x != -1){
		number[count] = x;
		sum += x;
		count ++;
		scanf("%d",&x);
	}
	if(count>0){
		printf("%f\n",sum/count);
		int i;
		for(i=0;i<count;i++){
			if(number[i]>sum/count){
				printf("%d\n",number[i]);
			}
		}
	}
	
	return 0;
}
```

> 注：数据超过100时咋办？

* Plan A：采用动态的下标

* Plan B：进行说明，if 判断



  ## 049 统计个数

【题目】写一个程序，输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束

【代码】

* Example 01：

```c
#include <stdio.h>
 
int main(){
	
	int x;
	int count[10];
	int i;
	for(i=0;i<10;i++){
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);
	}
	
	return 0;
}
```

* Example 02：

```c
#include <stdio.h>
 
int main(){
	
	const int number = 10;
	int x;
	int count[number];
	int i;
	for(i=0;i<number;i++){
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]);
	}
	
	return 0;
}
```

## 050 搜索数字

【题目】查找数字是否在数组中，找到返回在数组中的位置，找不到返回-1

 【代码】

* Example 01：使用数组

```c
#include <stdio.h>

int search(int key,int a[],int length);//声明 

int main(){
	
	int a[] = {2,4,6,7,1,3,};
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d",&x);
	loc = search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc != -1){
		printf("%d在第%d个位置上\n",x,loc);
	} else{
		printf("%d不存在\n",x);
	}
	
	return 0;
}

int search(int key,int a[],int length){
	int result = -1;
	int i;
	for(i=0;i<length;i++){
		if(a[i] == key){
			result = i;
			break;
		}
	}
	return result;
} 
```

## 051 素数表

【代码】

* Example 01：

```c
#include <stdio.h>

int main(){
	
	const int maxNumber = 100;
	int isPrime[maxNumber];
	int i;
	int x;
	for(i=0;i<maxNumber;i++){
		isPrime[i] = 1;
	}
	for(x=2;x<maxNumber;x++){
		if(isPrime[x]){
			for(i=2;i*x<maxNumber;i++){
				isPrime[i*x] = 0;
			}
		}
	}
	for(i=2;i<maxNumber;i++){
		if(isPrime[i]){
			printf("%d\t",i);
		}
	}
	printf("\n");
	
	return 0;
}
```

## 南开 100 题 Begin

## 001 成绩存入数组

【题目】m 个人的成绩存放在 score 数组中，请编写函数 fun, 它的功能是：将低于平均分的人作为函数值返回，将低于平均分的分数放在 below 所指定的函数中。

【代码】

```c
#include <stdio.h>

int fun(double score[], int m, double below[]){
	int i, k = 0;
	double aver = 0.0;
	for (i = 0; i < m; i++){
		aver += score[i];
	}
	aver /= m;
	for (i = 0; i < m; i++){
		if (score[i] < aver){
			below[k++] = score[i];
		}
	}
	return k;
}

int main(){//main function is used to Test fun function
	double score[] = {78,65,45,68,90};
	double below[5];
	int i = fun(score, 5, below);
	printf("%d\n", i);
	return 0;
}
```

## 002 被 7 或者 11 整除的数

【题目】请编写函数 fun，它的功能是：求出 1 到 100 之内能被 7 或者 11 整除，但不能同时被 7 和 11 整除的所有整数，并将他们放在 a 所指的数组中，通过 n 返回这些数的个数。

【代码】

```c
#include <stdio.h>

void fun(int a[], int *n){
	int i, j = 0;
	for (i = 2; i < 100; i++){
		if ((i % 7 ==0 || i % 11 == 0) && i % 77 != 0){
			a[j++] = i;
		}
	}
	*n = j;
}

int main(){//main function is used to Test fun function
	int n = 0;
	int a[1000];
	fun(a, &n);
	printf("%d\n",n);
	return 0;
}
```

## 003 求出能整除 x 且不是偶数的整数

【题目】请编写函数 void fun(int x, int pp[], int *n), 它的功能是：求出能整除 x 且不是偶数的各整数，并按从小到大的顺序放在 pp 所指的数组中，这些除数的个数通过形参 n 返回。

【代码】

```c
#include <stdio.h>

void fun(int x, int pp[], int *n){
	int i, j = 0;
	for (i = 1; i < x; i++){
		if (x % i == 0 && i %2 != 0){
			pp[j++] = i;
		}
		*n = j;
	}
}

int main(){//main function is used to Test fun function
	int n = 0;
	int pp[1000];
	fun(6, pp, &n);
	printf("%d\n",n);
	return 0;
}
```

## 004 统计字母出现的次数

【题目】请编写一个函数 void fun(char *tt, int pp[]), 统计在 tt 字符中" a "到" z " 26 各字母各自出现的次数，并依次放在 pp 所指的数组中。

【代码】

```c
#include <stdio.h>
#include <string.h>

void fun(char *tt, int pp[]){
	int i, j = 0;
	for (i = 0; i < strlen(tt); i++){
		if (tt[i] >= 'a' && tt[i] <= 'z'){
			j = tt[i] - 'a' ;
			pp[j] = pp[j] + 1;
		}
	}
}

int main(){//main function is used to Test fun function
	char tt[] = {'a','b','a'}; 
	int i;
	int pp[26];
	//int pp[26] = {0};
	for (i = 0; i < 26; i++){
		pp[i] = 0;
	} 
	fun(&tt, pp);
	
	for (i = 0; pp[i] != '\0'; i++){
		if (pp[i] > 0){
			char c = i + 'a';
			printf("%c = %d\n", c, pp[i]);
		}
	}	
	return 0;
}
```



## 005 指定素数输入数组

【题目】请编写一个函数 void fun(int m, int k, int xx[]), 该函数的功能是：将大于整数 m 且紧靠 m 的 k 个素数存入 xx 所指的数组中。

【代码】

```c
#include <stdio.h>
#include <math.h>

void fun(int m, int k, int xx[]) {
	int i, j, count = 0;
	for (i = m + 1;count < k ; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			xx[count++] = i;
		}
	}
}

int main() {
	int a[100];
	fun(3,5,a);
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
}
```



## 006 删除指定下标的字符

【题目】请编写一个函数void fun(char a[],char[],int n),其功能是：删除以各字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。

【代码】

```c
#include <stdio.h>
#include <string.h>

 void fun(char a[], char b[], int n) {
 	int i, j = 0;
 	for (i = 0; i < strlen(a); i++) {
 		if (i != n) {
 			b[j++] = a[i];
		 }
	 }
	 b[j] = '\0';
 }
 
 int main() {
 	char a[] = "Hello";
 	char b[10];
 	fun(a, b, 2);
 	puts(b);
    return 0;
 }
```

## 007 元素下标存放k中

【题目】请编写一个函数int fun(int *s,int t,int *k),用来求出数组的最大元素在数组中的下标并存放在k所指的储存单元中。

【代码】

```c
#include <stdio.h>
#include <string.h>

int fun(int *s, int t, int *k) {
	int i, max;
	max = s[0];
	for (i = 1; i < t; i++) {
		if (s[i] > max) {
			max = s[i];
			*k = i;
		}
	}
	return 0;
}

int main() {
	int a[4];
	int i;
	for (i = 0; i < 4; i++) {
		scanf("%d", &a[i]);
	} 
	int value = 0;
	
	fun(&a, 4, &value);
	printf("%d", value);
	return 0;
}
```



## 008 计算并输出下列多项式值

【题目】编写函数fun,功能是：根据以下公式计算s,计算结果作为函数值返回；n通过形参传入。s=1+1/(1+2)+1/(1+2+3)+.......+1/(1+2+3+4+......+n)

【代码】

```c
#include <stdio.h> 

double fun(int n) {
	int i, j, t;
	double s = 0.0;
	for (i = 1; i <= n; i++) {
		t = 0;
		for (j = 1; j <= i; j++) {
			t += j;
		}
		s += 1.0/t;
	}
	return s;
}

int main() {
	printf("%lf\n", fun(10));
	return 0;
}
```

## 009 求值

【题目】编写一个函数fun，它的功能是：根据以下公式求P的值，结果由函数值带回。m与n为两个正整数，且要求m>n。p=m!/n!(m-n)!

【代码】

```c
#include <stdio.h>

double fun(int m, int n) {
	double p, t = 1.0;
	int i;
	for (i = 1; i <= m; i++) {
		t *= i;
	}
	p = t;
	for (t = 1.0, i = 1; i <= n; i++) {
		t *= i;
	}
	p /= t;
	for (t = 1.0, i = 1; i <= m - n; i++) {
		t *= i;
	}
	p /= t;
	return p;
}

int main() {
	printf("%lf",fun(10,9)); 
	return 0;
}
```

## 010 简单迭代

【题目】编写函数fun,它的功能是：利用以下的简单迭代方法求方程cos(x)-x=0的一个实根。

迭代步骤如下：(1)取x1初值为0.0；(2)x0=x1,把x1的值赋各x0;

(3)x1=cos(x0),求出一个新的x1;

(4)若x0-x1的绝对值小于0.000001，则执行步骤(5),否则执行步骤(2);

(5)所求x1就是方程cos(x)-x=0的一个实根，作为函数值返回。

程序将输出Root=0.739085。

【代码】

```c
#include <stdio.h>
#include <math.h> 

double fun() {
	double x0, x1 = 0.0;
	do {
		x0 = x1;
		x1 = cos(x0);
	} while (fabs(x0 - x1) >= 1e-6);
	return x1;
}

int main() {
	printf("%lf", fun());
	return 0;
}
```



11.下列程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N]),该函数的功能是：使数组左下半三角元素中的值全部置成0。

12.下列程序定义了N×N的二维数组，并在主函数中赋值。请编写函数fun,函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。

13.请编写一个函数void fun(int tt[M][N],int pp[N]),tt指向一个M行N列的二维函数组，求出二维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。

14.请别写函数fun,函数的功能使求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函数中赋予。

15.请编写一个函数unsigned fun(unsigned w),w使一个大于10的无符号整数，若w使n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。

16.请编写一个函数float fun(double h),函数的功能使对变量h中的值保留2位小树，并对第三位进行四舍五入(规定h中的值位正数)。

17.请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容拟置。

18.编写程序，实现矩阵(3行3列)的转置(即行列互换)。

19.编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理。

20.编写函数int fun(int lim,int aa[MAX]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。

21.请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ASCII码降序排列。

22.N名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：找出学生的最高分，由函数值返回。

23.请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函数中输出YES，否则返回0，主函数中输出NO。回文是指顺读和倒读都是一样的字符串。

24.请编写一个函数fun，它的功能是：将一个字符串转换为一个整数(不得调用C语言提供的将字符串转换为整数的函数)。

25.请编写一个函数fun，它的功能是：比较两个字符串的长度，(不得调用C语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。

26.请编写一个函数fun，它的功能是：根据以下公式求X的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：

X/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+...+1×2×3×...×n/3×5×7×(2n+1)

程序运行后，如果输入精度0.0005，则程序输出为3.14...。

27.请编写一个函数fun,它的功能是：求除1到m之内(含m)能北7或11整除的所有整数放在数组a中，通过n返回这些数的个数。

28.请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。

29.请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。

30.请编写一个函数fun，它的功能是：求除一个2×M整型二维数组中最大元素的值，并将此值返回调用函数。

31.请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、同时ASCII值也为偶数的字符外，其余的全都删除；串中剩余字符所形成的一个新串放在t所指的一个数组中。

32.请编写函数fun，其功能是：将s所指字符串中除了下标为奇数、同时ASCII值也为奇数的字符之外，其余的所有字符都删除，串中剩余字符所形成的一个新串放在t所指的一个数组中。

33.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。

34.学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。

35.请编写一个函数，用来删除字符串中的所有空格。

36.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。

37.某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。

38.请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。

39.请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。

40.请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。

41.请编写函数fun，该函数的功能是：将M行N列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。

42.下列程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int

a[][N],int n),该函数的功能是：将数组右上半三角元素中的值乘以m。

43.编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，并通过形参指针max传回该串地址(用****作为结束输入的标志)。

44.编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。

45.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：只删除字符串前导和尾部的*号，串中字母之间的*号都不删除。形参n给出了字符串的长度，形参h给出了字符串中前导*号的个数，形参e给出了字符串中最后的*个数。在编写时不得使用C语言给提供得字符串函数。

46.学生得记录由学号和成绩组称个，N名大学生得数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前。

47.请编写一个函数void fun(char *ss)，其功能时：将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。

48.请编写函数fun，其功能是：将两个两位数的正整数a,b合并成一个整数放在c中。合并的方式是：将a数的十位和个位依次放在c数的千位和十位上，b数的十位和个位数依次放在c数的百位和个位上。

49.请编写函数fun，其功能是：将s所指字符串中下标位偶数同时ASCII值为奇数的字符删除，s中剩余的字符形成的新串放在t所指的数组中。

50.已知学生的记录是由学号和学习成绩构成，N名学生的数据已存入a机构体数组中。请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。

51.请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回。

52.编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。

53.请编写函数fun,该函数的功能是：实现B=A+A'，即把矩阵A加上A的转置，存放在矩阵B中。计算结果在main函数中输出。

54.学生的记录由学号和成绩组称个，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把低于平均分的学生数据放在b所指的数组中，低于平均分的学生人数通过形参n传回，平均分通过函数值返回。

55.请编写函数fun，该函数的功能是：将M行N列的二维数组中的数据，按行的顺序依次放到一维数组中，一维数组中数据的个数存放在形参n所指的储存单元中。

56.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了尾部的*号之外，将字母串中其他*号全部删除。形参p已指向字符串中最后的一个字母。不使用c的字符串函数。

57.学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。

58.编写函数藏服那，它的功能是：求n以内(不包括n)同时能被3与7整除的所有自然数之和的平方根s，并作为函数值返回。

59.请别写函数fun，该函数的功能是：将放在字符串数组中的M个字符串(每串的长度不超过N)，按顺序合并组成一个新的字符串。

60.请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩一个。数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。

61.请编写函数fun，该函数的功能使：统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数的age数组中；要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，把20至29岁的人数放在d[2]中，其余以此类推，把100岁(含100以上年龄的人数都放在d[10]中。结果在主函数中输出。

62.请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。一行字符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。

63.请编写一个函数fun，它的功能是：计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。

64.请编写函数fun，其功能是：将s所指字符串中ASCII值为奇数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。

65.请编写函数fun，其功能是：将两位数的正整数a、b合并成一个整数放在c中。合并的方式是：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的十位和千位上。

66.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：删除字符串中所有*号。在编写函数时，不得使用C语言提供的字符串函数。

67.学生的记录时由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。若没找到指定学号，在结构体变量中给学号置空串，给成绩置-1,作为函数值返回(用于字符串比较的函数时strcmp)。

68.请编写函数fun，其功能时：计算并输出下列多项式的值：

sn=1+1/1!+1/2!+1/3!+1/4!+...+1/n!

69.请编写一个函数fun，它的功能时：求Fibonacci数列中大于t的最小的一个数，结果由函数返回。其中Fibonacci数列F(n)的定义为：

F(0)=0,F(1)=1,F(n)=F(n-1)+F(n-2)

70.编写函数fun，它的功能时：计算并输出下列级数和：

S=1/1*2+1/2*3+...+1/n(n+1)

71.请编写函数fun，其功能时：将两个两位数的正整数a、b合并形成一个整数放在c中，合并的方式是：将a数的十位和个位数依次放在c数的十位和千位上，b的十位和个位整数依次放在c数的百位和个位上。

72.请编写函数fun，其功能是：将s所指字符串中下标为偶数的字符删除，串中剩余字符形成新串放在t所指数组中。

73.假定输入的字符串中只包含字母和*号，请编写函数fun，它的功能是：除了字符串前导和尾部的*号之外，将串中其他*号全部删除。形参h已指向字符串第一个字符，形参p已指向字符串中最后一个字母。在编写程序时，不得使用C语言提供的字符串函数。

74.学生的记录由学号和成绩组成N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能时：把分数最低的学生数据放在h所指的数组中，注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。

75.请编写函数fun，该函数的功能：将M行N列的二维数组中的数据，按列的顺学依次放到一维数组中。

76.请编写函数fun，其功能时：计算并输出当x<0.97时下列多项式的值，直到｜Sn-S(n-1)｜<0.000001为止。

Sn=1+0.5x+0.5(0.5-1)/2!x(2)+...+0.5(0.5-1)(0.5-2).....(0.5-n+1)/n!x(n)

77.请编写一个函数fun，其功能是：将两个两位数的正整数ab合并形成一个整数放在c中。合并方式是：将a数的十位和个位数依次放在c数的个位和百位上，b数的十位和个位数依次放在c数的十位和千位上。

78.请编写函数fun，其功能是：将s所指字符串中ASCII值为偶数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。

79.已知学生的记录由学号和学习成绩构成，N名学生的数据已存入a结构体数组中。请编写函数fun，该函数的功能是：找出成绩最低的学生记录，通过形参返回主函数(规定只有一个最低分)。

80.程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun,该函数的功能是：使数组左下半三角元素中的值乘以n。

81.请编写函数fun，其功能使：将两个两位正整数a b合并形成一个整数放在c中。合并的方式使：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的千位和十位上。

82.请编写一个函数fun，它的功能使：计算n门课程的平均分，计算结果作为函数值返回。

83.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能使：将字符串尾部的*号全部删除，前面和中间的*号不删除。

84.请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c中，合并的方式是：将a数的十位和个位数依次放在c的个位和百位上，b数的十位和个位数依次放在c数的千位和十位上。

85.N名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：求出平均分，由函数值返回；

86.请编写函数fun，计算并输出给定10个数的方差：

87.请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c中。合并的方式是：将a数的十位和个位数依次放在c数的千位和十位上，b数的十位和个位数依次放在c数的个位和百位上。

88.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了字符串前导的*号之外，将串中其他*号全部删除。在编写函数亚时，不得使用C语言提供的字符串函数。

89.学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。

90.请编写函数fun，其功能是：计算并输出下列多项式值:Sn=(1-1/2)+(1/3-1/4)+...+(1/(2n-1)1/2n).

91.请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c中。合并的方式是：将a数的十位和个位数依次放在c的十位和千位上，b数的十位和个位数依次放在c数的个位和百位上。

92.请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+...+ln(m))(0.5),s作为函数值返回。

93.请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。

s=1+x+x(2)/2!+x(3)/3!+...x(n)/n!

94.规定输入字符串中只包含字母和*号。请编写函数fun，它的功能是：将函数字符串中的前导*号全部删除，中间和尾部的*号不删除。

## 095 使字符串的前导 * 号不得多于n个

【题目】假定输入的字符串中只包含字母和 * 号。请编写函数fun，它的功能是：使字符串的前导 * 号不得多于n个；若多于n个，则删除多于的 * 号；若少于或等于n个，则什么也不做。字符串中间和尾部的 * 号不删除。

【代码】



## 096 相邻两个元素之平均值的平方根之和

【题目】请编写函数fun，其功能使：计算并输出给定数组(长度为9)中每相邻两个元素之平均值的平方根之和

【代码】

```c
#include <stdio.h> 
#include <math.h>

double fun(double a[9]) {
	int i, j = 1;
	double s = 0.0;
	for (i = 0; i < 9; i++) {
		if (j <= 8) {
			s += sqrt((a[i] + a[i + 1]) / 2);
			j++;
		}
	}
	return s;
}

int main() {
	double a[9] = {1,1,1,1,1,1,1,1,1};
	printf("%lf\n", fun(a));
	return 0;
}
```



## 097 计算并输出下列多项式值

【题目】请编写函数fun，其功能是：计算并输出下列多项式值：s=1+1/(1+2)+1/(1+2+3)+..1/(1+2+3...+50)

【代码】

```c
#include <stdio.h> 

double fun(int n) {
	int i, j, t;
	double s = 0.0;
	for (i = 1; i <= n; i++) {
		t = 0;
		for (j = 1; j <= i; j++) {
			t += j;
		}
		s += 1.0/t;
	}
	return s;
}

int main() {
	printf("%lf\n", fun(10));
	return 0;
}
```



## 098 倒数之和

【题目】请编写函数fun，它的功能是：计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和。

【代码】

```c
#include <stdio.h> 
#include <math.h>

double fun(int n) {
	int i;
	double s = 0.0;
	for (i = 1; i <= n; i++) {
		if (i % 5 == 0 || i % 9 == 0) {
			s += 1.0 / i;
		}
	}
	return s;
}

int main() {
	printf("%lf\n", fun(10));
	return 0;
}
```



## 099 素数的平方根之和

【题目】请编写函数fun，其功能是：计算并输出3到n之间所有素数的平方根之和。

【代码】

```c
#include <stdio.h> 
#include <math.h>

double fun(int n) {
	int i, j;
	double s = 0.0;
	for (i = 3; i <= n; i++) {
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			} 
		}
		if (j > sqrt(i) ) {
			s += sqrt(i);
		}
	}
	return s;
}

int main() {
	printf("%lf\n", fun(5));
	return 0;
}
```



## 100 计算并输出 s

【题目】请编写函数fun，其功能是：计算并输出s=1+(1+2^(0.5))+(1+2 ^ (0.5)+3 ^ (0.5))+...+(1+2 ^ (0.5)+3 ^ (0.5)+...+n ^ (0.5))

【代码】

```c
#include <stdio.h> 
#include <math.h>

double fun(int n) {
	int i;
	double s = 1.0, p = 1.0;
	for (i = 2; i <= n; i++) {
		p += pow(i, 0.5);
		s += p;
	}
	return s;
}

int main() {
	printf("%lf\n", fun(2));
	return 0;
}
```



## 南开 100 题 End