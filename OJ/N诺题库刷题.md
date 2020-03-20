# N 诺题库刷题

> N 诺题库地址：[DreamJudge](http://noobdream.com/DreamJudge/Issue/page/0/)

## 1000 - A+B 问题

【题目描述】

```
Time Limit: 1000 ms
Memory Limit: 256 mb
输入A,B
输出A+B
-1,000,000,000<=A,B<=1,000,000,000
```

【输入描述】

```
输入包含两个整数A,B，用一个空格分隔。
```

【输出描述】

```
输出一个整数，表示A+B的值。
```

【输入样例】

```
5 8
```

【输出样例】

```
13
```

【代码实现】

```c
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
	return 0;
}
```

