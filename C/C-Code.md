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





