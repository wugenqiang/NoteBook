# N 诺题库刷题

> N 诺题库地址：[DreamJudge](http://noobdream.com/DreamJudge/Issue/page/0/)

## P1000 - A+B 问题

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

## P1001 - 01 序列

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

* Example 06：递归

```cpp
#include<bits/stdc++.h>
using namespace std;

void Badd(char *s,int i); 

int main(){
    char s[6]={'0','0','0','0','0','0'};
    for(int i=0;i<64;i++){
        cout<<s<<endl;
        Badd(s,5);      
    }
    return 0;
}

void Badd(char *s,int i){   //二进制加法器 
    if(i==-1)return;
    if(s[i]=='0')s[i]='1';
    else{
        s[i]='0';
        return Badd(s,i-1);
    }    
}
```

## P1002 - 数字统计

【题目描述】

```c
Time Limit: 1000 ms
Memory Limit: 256 mb
请统计某个给定范围[L, R]的所有整数中，数字 2 出现的次数。
比如给定范围[2, 22]，数字 2 在数 2 中出现了 1 次，在数 12 中出现 1 次，在数 20 中出现 1次，
在数 21 中出现 1次，在数 22 中出现 2 次，所以数字 2 在该范围内一共出现了 6次。
```

【输入描述】

```c
2个正整数 L 和 R，之间用一个空格隔开。
1≤L≤R≤100000
```

【输出描述】

```c
数字 2 出现的次数。
```

【代码实现】

```c
#include <stdio.h>

int main(){
	int i,j,temp,count=0;
	int l,r;
	scanf("%d %d",&l,&r);//输入l,r 
	for(i=l;i<=r;i++){
		temp = i;
		while(temp>0){
			if(temp%10==2){//取个位值是否和2相等，count++ 
				count++;
			}
			temp /= 10;  
		}
	}
	printf("%d\n",count);
	
	return 0;
}
```

## P1003 - 翻转数的和

【题目描述】

```c
Time Limit: 1000 ms
Memory Limit: 256 mb
喜欢数学的Lucy经常向哥哥LF请教一些题目，哥哥总能很快就帮她解决。这不，Lucy又有难题要请教哥哥了Lucy的难题。
Lucy的难题是有关翻转数的：

翻转数就是把一个数的所有数字以相反顺序写出来，即原来的第一个数字成为最后一个，而原来的最后一个则成为第一个。我们把未翻转的数称为翻转数的原数。

例 如：6789的翻转数是9876，而6789就是9876的原数。

你一定注意到了，一个翻转数的原数可以有很多个，例如18的原数可以是81、810、8100等等。因此我们假定：通过翻转数求原数时，所求得的原数的个 位不为零。即18的原数就是81。

Lucy现在给出2个翻转数A、B。

这两个翻转数各自对应的原数是C、D，C 与D的和为 S ，Lucy想知道 S是多少？
```

【输入描述】

```c
输入为多组测试数据，每行一组，包含两个整数A、B，两数中间以空格分隔，0<A<100 000 000，0<B<100 000 000。
```

【输出描述】

```c
输出只有一个整数，即为S。
注意：请不要输出翻转数前面无用的零。例：对于0056，只需输出56。
```

【代码实现】

* Example 01：C 语言实现

```c
#include <stdio.h>
int reverse(int x);//函数声明 

int main(){
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF){
		int s = reverse(a) + reverse(b); 
		printf("%d\n",s);
	} 
	return 0;
}

int reverse(int x){//实现翻转函数 
	int result = 0;
	while(x){
		result = result * 10 + x % 10; //x%10表示取个位 
		x /= 10;//表示舍去个位 
	}
	return result;
} 
```

* Example 02：

```c
#include <stdio.h>
int main() {
    int a, b;
    while(~scanf("%d %d", &a, &b)) {
        int ans1 = 0, ans2 = 0;
        while(a) {
            ans1 = ans1 * 10 + a % 10;
            a /= 10;
        }
        while(b) {
            ans2 = ans2 * 10 + b % 10;
            b /= 10;
        }
        printf("%d\n", ans1 + ans2);
    }
    return 0;
}
```

* Example 03：

```cpp
#include<iostream>
using namespace std;
int reverse(int num)
{
	int result = 0;//翻转结果 
	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}
int main()
{
	int a, b;
	while (cin >> a >> b) {//EOF结束输入
		int c = reverse(a);
		int d = reverse(b);
		cout << c + d << endl;
	}
	return 0;
}
```

## P1005 - 博学楼的阶梯

【题目描述】

```c
Time Limit: 1000 ms
Memory Limit: 256 mb
众所周知，北校区的博学楼是有11层楼，并且有三个电梯。假设电梯上升一层需要6秒，下降一层需要4秒，在每在一层停留需要3秒。电梯初始在1楼，现在给你电梯要去楼层顺序，例如3，2，5代表电梯从1楼到达三楼，再从三楼到达2楼，再从2楼到达5楼。问通过这些操作，电梯需要花多少时间？例如3，2，5，从1楼到3楼需要2 * 6秒，然后停留3秒，再从3楼到2楼需要4秒，再停留3秒，再由2楼到5楼需要3 * 6秒，停留3秒。所以总共需要2 * 6 + 3 + 4 + 3 + 3 * 6 + 3 = 43。如果上次要停留的楼层与这次相同，则只需要再停留3秒即可。
```

【输入描述】

```c
输入：输入一个整数T（1 <= T <= 100），代表有T组样例。
每组样例有一个整数n（1 <= n <= 100），代表有n层楼是电梯需要去的。然后给出n个整数,给出的整数小于等于11，代表电梯到达楼层的顺序。
```

【输出描述】

```c
输出：对每组样例，输出一个整数，代表今天博学楼开放教室的总数。每个输出结果后面均包含换行符。
```

【代码实现】

* Example 01：

```c
#include <stdio.h>
int func(int a[],int n);//函数声明 
int main(){
	int t,n,i;
	scanf("%d",&t);//有t组数据输入
	while(t--){
		int result = 0;//耗时
		scanf("%d",&n);//记录每组数据的个数
		int a[n];//定义数组，存放每组数据
		i = n;
		while(i--){
			scanf("%d",&a[n-1-i]);//记录现在所在楼层 
		} 
		result = func(a,n);//计算耗时	
		printf("%d\n",result);//输出result 
	}
	return 0;
}

int func(int a[],int n){
	int sum = 0,i;
	int last = 1;//定义初始楼层
	int now;//定义现在所在楼层
	for(i=0;i<n;i++){
		now = a[i];//现在所在楼层 
		if(now>last){
			sum += 3 + (now - last) * 6;//电梯往上 
		}else{
			sum += 3 + (last - now) * 4;//电梯往下 
		}
		last = now;//重新修改上一层楼层 
	}
	return sum;
}
```

* Example 02：

```cpp
#include <iostream>
using namespace std;

int main(){
	int m;  //接受数据的组数
	int n;  //每组数据的个数
	cin >> m;
	while(m--){
		int count = 0; //所耗时间总数
		int last = 1;  //上一次电梯所在楼层 
		int now;  //目前电梯所在楼层数
		cin >> n;
		count += 3*n;  //电梯一共要停留n次，每次3秒
		int values[n];
		int j=0;   //记录数组元素已赋值个数
		/*---开始向数组赋值---*/
		 while (cin >> now && j<n ) {
        	values[j++] = now;
        	if (cin.get() == '\n')   //遇到回车，终止
           		break;
    	}
		
		/*---开始按楼层计算运动时间---*/
		for(int i=0;i<n;i++)
		{
			now=values[i];
			if(now > last)
				count += (now - last)*6;
			else
				count +=( last- now)*4;
			last = now;
		}
		cout << count << endl;
	}
	return 0;
}
```

* Example 03：

```cpp
#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int ans = 3*n;//停留时间 
		int pre = 1, next;//之前停留的楼层，接下来要去的楼层 
		while (n--) {
			cin >> next;
			if (pre > next)
				ans += 4*(pre-next);//下降 
			else if (pre < next)
				ans += 6*(next-pre);//上升 
			//else 上次要停留的楼层与这次相同
			pre = next; 
		}
		cout << ans << endl; 
	}
	return 0;
}
```

