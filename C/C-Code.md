# C-Code

> C语言程序设计第四版——谭浩强著，此书中的代码题大部分已经在本文中展示，如果有作答不正确的地方或者可优化的地方，欢迎指正，谢谢！

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











