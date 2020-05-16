# N 诺题库刷题

> N 诺题库地址：[DreamJudge](http://noobdream.com/DreamJudge/Issue/page/0/)

## P1000 - A+B 问题

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1000/)

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

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1001/)

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

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1002/)

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

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1003/)

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

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1005/)

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

## P1006 - 字符串翻转

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1006/)

* C 语言版

```c
/*给定一个字符串，反序输出。*/

#include <stdio.h>
#include <string.h>
#define N 100

int main(){
	char s[N];
	gets(s);
	int i,len = strlen(s);
	for(i=len-1;i>=0;i--){
		printf("%c",s[i]);
	}

	return 0;
}
```

* C++ 版

```cpp
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = s.length()-1; i >= 0; i--) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
```

* 考虑算法版：栈的使用

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {'0'}, c;
    int top = 0;

    while (scanf("%c", &c) != EOF && c != '\n')
    {
        s[top] = c;
        top++;
    }

    while (top--)
    {
        printf("%c", s[top]);
    }

    return 0;
}
```

* 考虑算法版：递归的使用

```c
#include <stdio.h>

void PrintReverseString()
{
    char c;
    scanf("%c", &c);
    if ('\n' == c)
        return;
    else
    {
        PrintReverseString();
        printf("%c", c);
    }

}

int main()
{
    PrintReverseString();     
    return 0;
}
```

## P1007 - 整除

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1007/)

* C 语言版

```c
/*输出100到1000之间能被5和6同时整除的数，
输出格式为每10个数为一行。相邻两个数之间用空格隔开（注意每一行末尾没有空格）*/ 

#include <stdio.h>
int main(){
	int i,cnt=0;
	for(i=100;i<=1000;i++){
		if(i%5==0&&i%6==0){
			cnt++;
			if(cnt%10==0){
				printf("%d\n",i);
			}else{
				printf("%d ",i);
			}	
		}
	}
	return 0;
}
```

* C++ 版

```cpp
#include <iostream>
using namespace std;
int main()
{
	int count = 1;//计数，用于控制输出格式 
	for (int num = 100; num <= 1000; num++) {
		if (num%5 == 0 && num%6 == 0) {
			if (count%10 == 0)
				cout << num << endl;
			else
				cout << num << " ";
			count++;
		}
	}
	return 0;
}
```

## P1008 - 0 和 1 的个数

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1008/)

* C 语言版

```c
/*给定一个int型整数，输出这个整数的二进制的0和1的个数。
输入样例：15  输出样例：count0=28 count1=4*/ 

#include <stdio.h>
int main(){
	int n; 
	scanf("%d",&n);//输入int整数
	int cnt = 0;//定义1的个数 
	while(n > 0){
		if(n % 2){
			cnt++;//记录1的个数 
		}
		n /= 2;
	} 
	printf("count0=%d count1=%d\n",32-cnt,cnt);
	return 0;
}
```

* C++ 版

```cpp
#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int count = 0;
	//int有32位，需要保证0和1的总数为32,所以只需要记录1的个数即可 
	while (num > 0) {
		if (num%2 == 1)//该二进制位为1 
			count++;
		num /= 2;
	}
	cout << "count0=" << 32-count << " count1=" << count << endl;
	return 0;
}
```



## P1009 - 随机数

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1009/)

* 符合题意版

```c
/*从1—20之间随机抽取5个数，输出抽取出来的5个数之和
与剩余未被抽取的15个数之和的总和。
输入描述：无  输出描述：输出一个答案在单独的一行*/ 

#include <stdio.h>
#include <math.h>
int main(){
	int i,a[5],sum1=0,sum=0;
	for(i=0;i<5;i++){
		sum1 += rand()%20+1;
	}
	for(i=1;i<=20;i++){
		sum += i;
	}
	sum = sum - sum1 + sum1;
	printf("%d",sum);
	return 0;
} 
```

* C 语言版

```c
#include <stdio.h>
int main(){
	int sum = 0;
	int i; 
	for(i = 1; i <= 20; i++){//遍历 
		sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
```

* C++ 版

```cpp
#include <iostream>
using namespace std;
int main()
{
	int ans = 0;
	for (int i = 1; i <= 20; i++)
		ans += i;
	cout << ans << endl;
	return 0;
}
```

## P1010 - 排序

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1010/)

* C 语言版：直接排序

```c
/*输入n个数进行排序，要求先按奇偶后按从小到大的顺序排序。*/

#include <stdio.h>

void sort(int arr[], int n);

int main(){
	int n, i;
	int a[1000];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}	
	sort(a, n);//升序排序 
	for(i = 0; i < n; i++){//输出奇数 
		if(a[i] % 2){
			printf("%d ",a[i]);
		}
	}
	for(i = 0; i < n; i++){//输出偶数 
		if(a[i] % 2 == 0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	return 0; 
} 

void sort(int arr[], int n){//升序排序 
	int i, j, k, tmp;
	for(i = 0; i < n - 1; i++){
		k = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[k]){
				tmp = arr[k];
				arr[k] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
```

* C 语言版：冒泡排序

```c
/*输入n个数进行排序，要求先按奇偶后按从小到大的顺序排序。*/

#include <stdio.h>

void sort(int arr[], int n);

int main(){
	int n, i;
	int a[1000];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}	
	sort(a, n);//升序排序 
	for(i = 0; i < n; i++){//输出奇数 
		if(a[i] % 2){
			printf("%d ",a[i]);
		}
	}
	for(i = 0; i < n; i++){//输出偶数 
		if(a[i] % 2 == 0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	return 0; 
} 

void sort(int arr[], int n){//升序排序 
	int i, j, tmp;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
```

* C++ 版

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

bool cmp(int a,int b){
    if(a%2==b%2){//若同奇同偶 
        return a<b;//直接从小到大排序 
    }else{
        return (a%2) > (b%2);//奇数在偶数前 
    } 
} 

int main(){
    int n;
    int a[1005] = {0};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    } 
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
```

## P1011 - 日期

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1011/)

【题目】

```
今天是2012年4月12日星期四，编写程序，
输入今天开始到12月31日之间的任意日期，输出那一天是星期几。
例如输入“5（回车）20（回车）”（5月20日），
输出应为“Sunday”。
```

【代码】

* C 语言版：使用二维数组 (字符数组)

```c
#include<stdio.h>
int main(){
	int m[]={0,30,31,30,31,31,30,31,30},mon,day,week,i,sum=0;
	char Eweek[][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};//字符数组真的忘完了
	scanf("%d",&mon);
	scanf("%d",&day);
	for(i=5;i<=mon;i++)
	    sum+=m[i-4];
	week=(sum+day-12+4)%7;
	printf("%s",Eweek[week]);
    return 0;
}
```



* C 语言版：使用 switch

```c
#include<stdio.h>
int main()
{
    int month, day, sum=0;
    int mon[13] = {0,0,0,0,30,31,30,31,31,30,31,30,31};//从4月开始，1，2,3不用算 
    scanf("%d", &month);
    scanf("%d", &day);
    int i;
    for(i = 4; i < month; i++)
    {
        sum += mon[i];
    }
    sum += day - 12;//总天数 
    switch(sum % 7)
    {
         case 0:printf("Thurstay");break;
         case 1:printf("Friday");break;
         case 2:printf("Saturday");break;
         case 3:printf("Sunday");break;
         case 4:printf("Monday");break;
         case 5:printf("Tuesday");break;
         case 6:printf("Wednesday");break;
    }
    printf("\n");
    return 0;
}
```

* C++ 版

```cpp
#include<iostream>
using namespace std;
int days[] = {0, 30, 31, 30, 31, 31, 30, 31, 30, 31};//4月之后每月的天数，第一个元素为0便于计数 
string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int cal_days(int y, int d)
{
	//计算该日期与4月12相隔的天数 
	int num = 0;
	for (int i = 0; i <= y-4; i++)
		num += days[i];
	num += d;
	num -= 12;
	return num;
}
int main()
{
	int ans = 4;
	int y, d;
	cin >> y >> d;
	ans += cal_days(y, d);
	ans %= 7;//计算星期 
	cout << week[ans] << endl;
	return 0;
}
```

## P1012 - 字符移动

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1012/)

【题目】

```
输入一个字符串，将其中的数字字符移动到非数字字符之后，
并保持数字字符和非数字字符输入时的顺序。
例如：输入字符串“ab4f35gr#a6”,输出为“abfgr#a4356”。
```



【代码】

* C 语言版：最初思路

```c
#include <stdio.h>
#include <string.h>

int main(){
	char a[100], b[100], tmp[100];
	scanf("%s", a);
	int i, cnt_tmp = 0, cnt = 0;
	for(i = 0; i < strlen(a); i++){
		if(a[i] >= '0' && a[i] <= '9'){
			tmp[cnt_tmp++] = a[i];
		}else{
			b[cnt++] = a[i];
		}
	}
	for(i = cnt; i < cnt + cnt_tmp; i++){
		b[i] = tmp[i - cnt];
	}
	puts(b);
	
	return 0;
}
```



* C 语言版：完善

```c
#include <stdio.h>
#include <string.h>

int main(){
	static char a[101], b[101];
	gets(a);
	int i, cnt = 0;
	for (i = 0; a[i] != '\0'; i++){
		if (a[i] < '0' || a[i] > '9'){
			b[cnt++] = a[i];
		}
	}
	for (i = 0; a[i] != '\0'; i++){
		if (a[i] >= '0' && a[i] <= '9'){
			b[cnt++] = a[i];
		}
	}
	puts(b);
	
	return 0;
}
```

* C++ 版：string 类型有个好处就是可以直接做加法

```cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, s1 = "", s2 = "";//保存完整字符串、字符、数字 
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			s2 += s[i];
		else
			s1 += s[i];
	}
	cout << s1 << s2 << endl;
    // cout << s2 + s1;
	return 0;
}
```

## P1013 - 判断素数

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1013/)

【题目】

```
输入一个整数，判断该整数是否为素数，
若是，输出该整数，
若否，输出大于该整数的第一个素数。
（例如，输入为14，输出17，因为17是大于14的第一个素数）
```

【代码】

* C 语言版：初版

```c
#include <stdio.h>
#include <math.h>

int isPrime(int x);//声明函数，判断是否为素数 

int main(){
	int x, i;
	scanf("%d", &x);
	for (i = x; ; i++){
		if (isPrime(i)){
			break;
		} 
	} 
	printf("%d\n",i);
}

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

* C 语言版：简化变量

```c
#include <stdio.h>
#include <math.h>

int isPrime(int x);//声明函数，判断是否为素数 

int main(){
	int x;
	scanf("%d", &x);
	while(!isPrime(x)){
		x++;
	}
	printf("%d\n",x);
}

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



* C++ 版

```cpp
#include<iostream>
using namespace std;
bool fun(int num)
{
	//判断num是否是素数 
	if (num == 1)//1不是素数 
		return false;
	for (int i = 2; i < num; i++) {
		if (num%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int num;
	cin >> num;
	while(!fun(num))	//找素数 
		num++;
	cout << num << endl;
	return 0;
}
```

## P1014 - 加密算法

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1014/)

【题目】

```
题目描述：
编写加密程序，加密规则为：
将所有字母转化为该字母后的第三个字母，
即A->D、B->E、C->F、......、Y->B、Z->C。小写字母同上，其他字符不做转化。
输入任意字符串，输出加密后的结果。
例如：输入"Ilove007"，输出"Loryh007"
    
输入描述：输入一行字符串，长度小于100。
    
输出描述：输出加密之后的结果。
    
输入样例#:Ilove007
    
输出样例#:Loryh007
```

【代码实现】

* C 语言版

```c
#include <stdio.h>
#include <string.h>

int main(){
	char s[105];
	gets(s);
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 3;
			if(s[i] > 'Z'){
				s[i] -= 26;//溢出循环 
			}
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] += 3;
			if(s[i] > 'z'){
				s[i] -= 26;//溢出循环 
			}
		} else{
			continue;
		} 
	}
	puts(s);
	return 0;
}
```

* C++ 版

```cpp
#include<iostream>
#include<cstring>
using namespace std;
const int M = 1024;
int main()
{
	char line[M], ans[M];
	cin.getline(line, M);
	int i = 0;
	while (line[i]) {
		if (line[i] >= 'A' && line[i] <= 'Z')
			ans[i] = 'A' + (line[i] + 3 - 'A')%26;
		else if (line[i] >= 'a' && line[i] <= 'z')
			ans[i] = 'a' + (line[i] + 3 - 'a')%26;
		else
			ans[i] = line[i];
		i++;
	}
	ans[i] = '\0';
	cout << ans << endl;
	return 0;
}
```

## P1015 - 单链表

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1015/)

【题目】

```
设节点定义如下

struct Node {
    int Element; // 节点中的元素为整数类型
    struct Node * Next; // 指向下一个节点
};

从键盘输入5个整数，将这些整数插入到一个链表中，并按从小到大次序排列，最后输出这些整数。
```

【代码实现】

* C 语言版

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Element; // 节点中的元素为整数类型
    struct Node * Next; // 指向下一个节点
};

int main(){
	struct Node *head,*p,*q;
	head = (struct Node *)malloc(sizeof(struct Node));
	head->Next = NULL;
	int number, i;
	for(i = 0; i < 5; i++){
		scanf("%d",&number);
		p = head;
		while(p->Next && p->Next->Element < number){
			p = p->Next;
		}
		q = (struct Node *)malloc(sizeof(struct Node));
		//将节点插入
		q->Element = number;
		q->Next = p->Next;
		p->Next = q; 
	}
	p = head->Next;
	while(p->Next){
		printf("%d ",p->Element);
		p = p->Next;
	}
	printf("%d",p->Element);
	return 0;
} 
```

* C++ 版

```cpp
#include<iostream>
using namespace std;
struct Node {
    int Element; // 节点中的元素为整数类型
    struct Node * Next; // 指向下一个节点
};
int main()
{
	struct Node* head = new struct Node;
	struct Node *p, *q;
	head->Next = NULL;
	int num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		p = head;
		while (p->Next != NULL && p->Next->Element < num)//找到合适的插入位置
			p = p->Next;
		q = new struct Node;
        //将节点插入相应位置
		q->Element = num;
		q->Next = p->Next;
		p->Next = q;
	}
	p = head->Next;
	while (p->Next) {
		cout << p->Element << " ";
		p = p->Next;
	}
	cout << p->Element << endl;
	return 0;
}
```

## P1016 - 字符分类

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1016/)

【题目】

```
从键盘上输入一个字符串，将该字符串分为数字、字母、其他字符三个部分输出。

例如：
输入：Thdad29#@12aH;77
输出：
ThdadaH
291277
#@;
```

【代码实现】

* C 语言版

```c
#include <stdio.h>
#define N 100 

int main(){
	char s[N];
	char a[N], b[N], c[N];
	int cnt_a = 0, cnt_b = 0, cnt_c = 0;
	int i;
	gets(s);
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
			a[cnt_a++] = s[i];
		}else if(s[i] >= '0' && s[i] <= '9'){
			b[cnt_b++] = s[i];
		}else{
			c[cnt_c++] = s[i];
		}		
	}
	puts(a);
	puts(b);
	puts(c);
	
	return 0;
}
```

* C++ 版

```cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string sstr = "", snum = "", sother = "";//存字符、数字和其他字符 
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
			sstr += s[i];
		else if (s[i] >= '0' && s[i] <= '9')
			snum += s[i];
		else
			sother += s[i];
	}
	cout << sstr << endl;
	cout << snum << endl;
	cout << sother << endl;
	return 0;
}
```

## P1017 - 幂次方

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1017/)

【题目描述】

对任意正整数 N，求 X ^ N % 233333 的值。

【解题思路】

这道题关键的地方就是 x 和 n 的数据类型：long long

* C 解答：

```c
#include <stdio.h>
/*
* @author:wugenqiang
*/
int main(){
    long long x, n, sum = 1;
    scanf("%lld %lld", &x, &n);
    while (n > 0) {
    	if (n % 2 == 1) {
    		sum = sum * x % 233333;
		}
		x = x * x % 233333;
		n /= 2;
	}
	printf("%lld\n", sum);
    return 0;
}
```

## P1018 - 击鼓传花

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1018/)

【题目描述】

有 N 个小朋友围成一圈玩击鼓传花游戏，将小朋友编号为 1 ~ N，从 1 号开始传花，每次传 3 个，拿到花的小朋友表演节目后退出，任给 N，问最后一个表演的小朋友编号是多少？

【解题思路】

> 建立链表实现

* C 解答：

```c
#include <stdio.h>
#include <stdlib.h>
/*
* @author:wugenqiang
*/
typedef struct node {
	int num;
	struct Node *next;
}Node; 
int main() {
	int n;
	scanf("%d", &n);
	Node *pre = (Node *)malloc(sizeof(Node));
	Node *head = (Node *)malloc(sizeof(Node)); 
	pre = head;
	int i;
	for (i = 1; i <= n; i++) {
		Node *p = (Node *)malloc(sizeof(Node));
		p->num = i;
		pre->next = p;
		pre = pre->next;
	}
    pre->next = head->next;
    //删除节点
	while (n != 1) {
		for (i = 0; i < 2; i++) {
			head = head->next;
		}
		Node *temp = head->next;
		head->next = temp->next;
		free(temp);
		n--;
	} 
	printf("%d\n", head->num);
    return 0;
}
```

* C++ 解答：

```cpp
//#include <bits/stdc++.h>
#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct Node{
	int number;
	struct Node* next;
}LNode;

int main()
{
	int n;
	cin >> n;
	LNode *head, *p, *pre = NULL;
	p = head = new LNode;
	for (int i = 1; i < n; i++) {
		p->number = i;
		p->next = new LNode;
		p = p->next;
	}
	p->number = n;
	p->next = head;//形成循环链表 
	//开始击鼓传花 
	p = head;
	int count = 1;//计数 
	while (p->next != p) {
		if (count % 3 == 0) {
			//出链表 
			pre->next = p->next;
			free(p);
			p = pre;
		}
		count++;
		pre = p;
		p = p->next;
	}
	cout << p->number << endl;
	return 0;
}
```



> vector 模拟环形链表实现

* C++ 解答：

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(~scanf("%d", &n)) {
        vector<int> v;
        for(int i = 1; i <= n; i++)
            v.push_back(i);

        for(int i = 2; v.size() != 1; i = (i + 3 - 1) % v.size()) {
            v.erase(v.begin() + i);
        }

        printf("%d\n", v[0]);
    }
}
```

## P1019 - 字母频率

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1019/)

【题目描述】

从键盘输入一个字符串（可能含有数字、字母、其他可见字符），输出出现频率最高的英文字母及次数，忽略字母的大小写（如大写 A 和小写 a 均视为 a ）。

【解题思路】

* C 解答：

```c
#include <stdio.h>
#include <string.h>

int main(){
	int a[26] = {0};
	char s[1000];
	gets(s);
	int i;
	for (i = 0; i < strlen(s); i++){
		if ('A' <= s[i] && s[i] <= 'Z')
			a[s[i] - 'A']++;
		else if ('a' <= s[i] && s[i] <= 'z')
			a[s[i] - 'a']++;
	}
	int max = 0, maxi;
	for (i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			maxi = i;
		}	
	}
	printf("%c %d\n", ('a' + maxi), max);
	return 0;
}
```



> 读取整行用的 getline，获得最大值用的 "打擂台法"

* C++ 解答：

```cpp
//#include <bits/stdc++.h>
#include<string>//getline
#include<iostream>
using namespace std;
int a[26];
int main(){
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++){
		if ('A' <= s[i] && s[i] <= 'Z')
			a[s[i] - 'A']++;
		else if ('a' <= s[i] && s[i] <= 'z')
			a[s[i] - 'a']++;
	}
	int max = 0, maxi;
	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			maxi = i;
		}	
	}
	cout << char(maxi + 'a') << " " << max;
	return 0;
}
```

## P1020 - 最长连续因子

[题目地址](http://noobdream.com/DreamJudge/Issue/page/1020/)

【题目描述】

输入一个整数，输出其最长连续因子。

【解题思路】

* C 解答：

```c
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);//输入一个整数N，N<=10000。
	int factorMax = 0;
	int i, j, index;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			int cnt = 1;
			for (j = i + 1; j < n; j++) {
				if (n % j == 0) {
					cnt++;
				} else {
					break;
				}
			}
			if (cnt > factorMax) {
				index = i;
				factorMax = cnt;
			}
		}
	}
	for (i = index; i < index + factorMax; i++) {
		printf("%d ", i);
	}
	 
	return 0;
}
```

* C++ 解答：

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int> factor;
	for (int i = 2; i <= num; i++)//存储因子 
		if (num%i == 0)
			factor.push_back(i);
	int* dp = new int[factor.size()];
	dp[0] = 1;
	for (int i = 1; i < factor.size(); i++) {
		if (factor[i] == factor[i-1]+1)
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = 1;
	}
	int index = 0;
	for (int i = 1; i < factor.size(); i++) {
		if (dp[i] > dp[index])
			index = i;
	}
	for (int i = index-dp[index]+1; i < index; i++)
		cout << factor[i] << " ";
	cout << factor[index] << endl;
	return 0;
}
```



## P1021 - 复数

[题目地址](http://noobdream.com/DreamJudge/Issue/page/1021/)

【题目描述】

从键盘输入两个复数，做加法或乘法并输出结果。

【解题思路】

* C 解答：

```c
#include <stdio.h>
int main() {
	double a1, b1, a2, b2;
	double res1, res2;
	char c;//符号+*
	scanf("%lf %lf %lf %lf %c", &a1, &b1, &a2, &b2, &c);
	switch(c) {
		case '+':
			res1 = a1 + a2;
			res2 = b1 + b2;
			break;
		case '*':
			res1 = a1 * a2 - b1 * b2;
			res2 = a1 * b2 + b1 * a2;
			break;				
	} 
	printf("%.1lf %.1lf\n", res1, res2);
	return 0;
}
```



* C++ 解答：

```cpp
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a1, b1, a2, b2, ans_a, ans_b;
	string op;
	cin >> a1 >> b1 >> a2 >> b2 >> op;
	if (op == "+") {
		ans_a = a1 + a2;
		ans_b = b1 + b2;
	}
	else if (op == "*") {
		ans_a = a1 * a2 - b1 * b2;
		ans_b = a1 * b2 + a2 * b1;
	}
	printf("%.1f %.1f\n", ans_a, ans_b);
	return 0;
}
```

## P1022 - 删除最大最小数

[题目地址](http://noobdream.com/DreamJudge/Issue/page/1022/)

【题目描述】

给你 N 个整数，要求删除最大和最小的数之后按原顺序输出。

【解题思路】

* C 解答：

```c
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);//输入n个整数
	int a[n];
	int i, min = 0, max = n - 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	} 
	for (i = 0; i < n; i++) {
		if (a[min] > a[i]) {
			min = i;
		}
		if (a[max] < a[i]) {
			max = i;
		}
	} 
	int flag = 0;
	for (i = 0; i < n; i++) {
		if (i != max && i != min) {
			if (flag) {
				printf(" %d", a[i]);
			} else {
				printf("%d", a[i]);
			}
			flag = 1;	
		}
	}
	printf("\n");
	return 0;
}
```

* C++ 解答：

```cpp
#include<iostream>
using namespace std;
int main()
{
	int num[105];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int Max = 0, Min = n-1;
	for (int i = 0; i < n; i++) {
		if (num[i] > num[Max])
			Max = i;
		if (num[i] < num[Min])
			Min = i;
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (i != Max && i != Min) {
			if (flag)
				cout << " " << num[i];
			else
				cout << num[i];
			flag = true;
		}
	}
	cout << endl;
	return 0;
}
```

## P1023 - IP 地址

[题目地址](http://noobdream.com/DreamJudge/Issue/page/1023/)

【题目描述】

输入一串字符，判断该字符串是否为点分十进制的IP地址，若是则转换为16进制输出，否则输出“Error”

【解题思路】

> **合法的ip地址规则：**
>
> 1.ip地址只由**数字**和‘**.**’组成
>
> 2.ip地址有且只有**4段数字**，格式为 **a.b.c.d**
>
> 2.每一段的数字只能在**0~255**里面
>
> **我遇到的bug，掉进去的坑：**
>
> **1:有点连起来的是不行的！**
>
> **比如192..1.1**
>
> **2.最后结果转成16进制的格式是要补0的！**
>
> **比如9.9.9.9的答案是0x09090909，并不是0x9999**
>
> **3.最后答案的字母要大写！**

* C 解答：

```c
#include <stdio.h>
#include <string.h>
#define M 100

int main() {
	char s[M];
	int num_x[M] = {0};//标记每一位上的ip，共4位
	int pot_count = 0;
	int flag = 0;//标记是否合法,0合法
	gets(s);//输入ip
	int i, j;
	for (i = 0; i < strlen(s); i++) {
		if ((s[i] > '9' || s[i] < '0') && s[i] != '.') {
			flag = 1;//错误标记 
		}
		if (s[i] == '.') {
			pot_count++;//标记点的个数 
		} else {
			num_x[pot_count] = num_x[pot_count] * 10 + s[i] - '0';
			//printf("%d ", num_x[pot_count]);
		} 
	} 
	//判断点的数量是不是3
	if (pot_count != 3) {
		flag = 1;//数目不对，错误 
	} 
	for (i = 0; i < 4; i++) {
		if (num_x[i] < 0 || num_x[i] > 255) {
			flag = 1;
		} 
	} 
	if (flag) {
		printf("Error");
	} else {
		printf("0x%02X%02X%02X%02X", num_x[0], num_x[1], num_x[2], num_x[3]);
	}
	
	return 0;
} 
```

## P1024 - 二元组整数

[题目地址](http://noobdream.com/DreamJudge/Issue/page/1024/)

【题目描述】

输入N个整数，输出这个整数两两组合且不重复的所有二元组，要求从小到大输出并且用括号的形式。

【解题思路】

* C 解答

```c
#include <stdio.h>

int main() {
	int n;//定义n个整数
	scanf("%d", &n);
	int a[n];//存数
	int b[n];//存不重复的数
	int c[n];//给重复的数添加标记 
	int i; 
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		c[i] = 0; 
	}
	//给a数组中数字排序
	int j;
	int temp;//作为转换使用 
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				 temp = a[i];
				 a[i] = a[j];
				 a[j] = temp; 
			}
		}
	} 
	b[0] = a[0];//把a[0]赋值给b[0] 
	int len = 0;
	for (i = 1; i < n; i++) {
		if (a[i] != b[len]) {
			b[++len] = a[i];
		} else {
			c[len] = 1;
		}
	}
	for (i = 0; i <= len; i++) {
		for (j = 0; j <= len; j++) {
			if (i != j) {
				printf("(%d,%d)\n", b[i], b[j]);
			} else if (c[i]) {
				printf("(%d,%d)\n", b[i], b[i]);
			}
		}
	}
	
	return 0;
} 
```

* C++ 解答：

```cpp
#include<iostream>
#include<cstdlib>
using namespace std;
int cmp(const void* c, const void* d)
{
	return (*(int*)c - *(int*)d);
}
int main()
{
	int n, x;
	cin >> n;
	int* a = new int[n];//存数 
	int* b = new int[n];//存不重复数 
	bool* c = new bool[n]; //给有重复的数添加标记 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		c[i] = false;
	}
	qsort(a, n, sizeof(a[0]), cmp);
	b[0] = a[0];
	int len = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] != b[len])
			b[++len] = a[i];
		else
			c[len] = true; 
	}
	for (int i = 0; i <= len; i++) {
		for (int j = 0; j <= len; j++) {
			if (i != j) {
				cout << "(" << b[i] << "," << b[j] << ")" << endl;
			}
			else if (c[i]) {
				cout << "(" << b[i] << "," << b[j] << ")" << endl;
			}
		}
	}
	return 0;
}
```





## P1180 - 最简真分数

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1180/)

【题目】

```
题目描述：
给出n个正整数，任取两个数分别作为分子和分母组成最简真分数，编程求共有几个这样的组合。

输入描述：
每组包含n（n<=600）和n个数，整数大于1且小于等于1000。

输出描述：
每行输出最简真分数组合的个数。

输入样例：
7
3 5 7 9 11 13 15

输出样例：
17
```



【代码】

* C 语言版

```c
#include <stdio.h>

int gcd(int a, int b);

int main(){
	int a[600];
	int ans, n, i, j;
	while(~scanf("%d", &n)){
		for(i = 0; i < n; i++){
			scanf("%d",&a[i]);
		}
		ans = 0;//答案个数
		for(i = 0; i < n; i++){
			for(j = i + 1; j < n; j++){
				if(gcd(a[i], a[j]) == 1){
					ans++;
				}
			}
		} 
		printf("%d\n", ans);
	}
	return 0;
}

int gcd(int a, int b){
	if (b == 0){
		return a;
	}else {
		return gcd(b, a % b);
	}
}
```



## P1355 - 素数判定

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1355/)

【题目】

```
题目描述：
给定一个数n，要求判断其是否为素数（0,1，负数都是非素数）。

输入描述：
测试数据有多组，每组输入一个数n。

输出描述：
对于每组输入,若是素数则输出yes，否则输入no。
```



【代码实现】

* C 语言版

```c
#include <stdio.h>

int isPrime(int x){
    int result = 1;
    int i;
    if(x < 0 || x == 1 || (x%2 == 0 && x != 2)){
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

int main(){
	int n;
	while(~scanf("%d", &n)){
		if(isPrime(n)){
			printf("yes");
		}else{
			printf("no");
		}
	}
}
```





## P1454 - 反序数

[n-nuo](http://noobdream.com/DreamJudge/Issue/page/1454/)

```c
/*设N是一个四位数，它的9倍恰好是其反序数
（例如：1234的反序数是4321）
求N的值*/

#include <stdio.h>
int reverse(int n); 

int main(){
	int i;
    for(i=1000;i<=9999;i++){
    	if((9*i)==reverse(i)){
    		printf("%d\n",i);
		}
	}  
    return 0;
}

int reverse(int n){//求反序数 
	int ans = 0;
    while(n>0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
```











