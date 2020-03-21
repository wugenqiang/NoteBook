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

## 1001 - 01 序列

【题目描述】

```
Time Limit: 1000 ms
Memory Limit: 256 mb
对于长度为6位的一个01串，每一位都可能是0或1，一共有64种可能。它的前几个是：
000000
000001
000010
000011
000100
请按从小到大的顺序输出这64种01串。
```

【输入描述】

```
无
```

【输出描述】

```
输出64行，每行一个01串。
```

【代码实现】

* Example 01：

```c
#include <stdio.h>

int main(){
	int i,temp,j;
	int a[6];
	for(i=0;i<64;i++){
		temp = i;
		for(j=0;j<6;j++){
			a[j] = temp%2;
			temp /= 2;
		}
		for(j=5;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	return 0;
} 
```

* Example 02：

```c
#include <stdio.h>
void func(int n);
int main(){
	int i;
	for(i=0;i<64;i++){
		func(i);
		printf("\n");
	}
	return 0;
} 

void func(int n){
	int j;
	int a[6];
	for(j=0;j<6;j++){
		a[j] = n%2;
		n /= 2;
	}
	for(j=5;j>=0;j--){
		printf("%d",a[j]);
	}
}
```

* Example 03：栈+C++

```cpp
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	for (int num = 0; num < 64; num++) {
		stack<int> s;
		int tmp = num;
		for (int i = 1; i <= 6; i++) {
			s.push(tmp%2);
			tmp /= 2;
		}
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
```

* Example 04：求和

```c
#include<stdio.h>
int main(){
    int i,j;     
    for(i=0;i<64;i++){
    	int res = 0;
        int temp = i;
		int cnt = 0;   
		int a[6]={0};
        while(temp>0){
            a[cnt] = temp % 2;
            temp /= 2;
            cnt++;
        }
        for(j = 5;j>=0;j--){
           res = res * 10 +a[j];
        }
        printf("%06d\n",res);
    }
    return 0;
}
```

* Example 05：

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){

    int A[6]={0};
    int i,j;
    
    for(i=0;i<64;i++)
    {
        printf("%d%d%d%d%d%d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
        A[5]++;
        for(j=5;j>0;j--)
        {
            if(A[j] == 2)
            {
                A[j]= 0;
                A[j-1]++;
            }
        }

    }
    
    return 0;
}
```

