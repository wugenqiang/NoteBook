# 机试指南

## 前言

本人在练习 OJ 的过程中有些感想，觉得有本计算机上机指南很重要，故通过复习和代码实战整理了这本《机试指南》，参考了 CSDN 等相关博客看到的机试指南，内容比较齐全，源码以 C/C++ 等方式实现，在逐渐完善和补充中，如果在使用中出现任何疑问或者有更好的见解的话，可以右下角 OPEN CHAT 我，也可以右上角 邮我，当然还可以加入我的讨论组，如果觉得本书对你有帮助，可以打赏我，以鼓励我更好的创作，下面附微信支付二维码，再次谢谢您的大力支持！

<div ><img src="https://wugenqiang.gitee.io/notebook/images/pay/wechat-pay.png" width="200" height="200" /></div>

> 如果觉得文章有帮助，不妨请我喝杯 Coffee，祝福好心人年年高升！

---

## 第一章 从零开始

### OJ 网站

* [OJ-Websites](OJ/guide/OJ-websites)

### 做题结果反馈

* Accepted
  * 答案正确
* Wrong Answer
  * 答案错误：程序实现或者思路出现问题，也可能是数据范围边界没有考虑到
* Runtime Error
  * 运行时错误：数组越界或者递归过深导致栈溢出
* Presentation Error
  * 输出格式错误：一般是末尾多了或少了空格或少了换行
* Time Limit Exceeded
  * 程序运行超时：算法不够优秀，程序运行时间过长
* Memory Limit Exceeded
  * 运行内存超限：程序申请太大了空间，超过了题目规定的空间大小

* Compile Error
  * 编译错误：代码存在语法错误，检查是不是选择错误的语言提交了
* Output Limit Exceeded
  * 输出超限：程序输出过多的内容，一般是循环出了问题导致多次输出或者调试信息忘记删除了
* Submitting
  * 提交中，等待题目结果的返回，由于判题机有性能差异所以返回结果也不一样

### 输入输出技巧

#### 常见输入输出

```c
//输入int型变量
scanf("%d",&x);
//输入double型变量
scanf("%lf",&x);//不用float直接double
//输入char类型变量
scanf("%c",&x);
//输入字符串数组
scanf("%s",s);
//输出与输入表示方式一致
printf("%s\n",s);
```

* scanf 输入解析

  * 输入日期 2020 - 03 - 21

  * ```c
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    printf("%d %d %d\n",year,month,day);
    ```

  * 输入时间 18 : 21 : 30

  * ```c
    int hour,minute,second;
    scanf("%d:%d:%d",&hour,&minute,&second);
    printf("%d %d %d\n",hour,minute,second);
    ```

* scanf 和 gets

输入一行字符串带空格的话，使用 gets，scanf 遇到空格会自动结束

```c
char s[105];
gets(s);
printf("%s\n",s);
```

* getchar 和 putchar

读入单个字符和输出单个字符，一般在 scanf 和 gets 中间使用 getchar 用于消除回车 '\n' 的影响

> getchar() 和 putchar() 效率优于 scanf() 和 printf()

```c
char ch = getchar();
putchar(ch);

char ch1;
scanf("%c", &ch);
printf("%c", ch);
```



* 输出进制转换

```c
int a = 10;
printf("%x\n",a);//小写十六进制输出a
printf("%X\n",a);//大写十六进制输出A
printf("%o\n",a);//八进制输出答案12
```

* 输出增加前置0

```c
int a = 5;
printf("%02d\n",a);//2代表宽度，不足的地方用0补充
输出结果 05
printf("%04d\n",a);
输出结果 0005
```

* 输出保留小数

```c
double a = 3.6;
printf("%.2lf\n",a);//2表示保留两位小数
输出结果 3.60
```

注：有小数输出小数，没小数输出整数，前提是输入的类型浮点类型

```c
%g
```

Example：

```c
#include <stdio.h>
int main(){
	
	double a = 2;
	double b = 2.5467;
	printf("a = %g\n",a);
	printf("b = %g\n",b);
	
	return 0;
} 
```



* long long 的使用

很多情况下的计算会超过 int，比如求 N!，N 比较大的时候 int 就存不下了，这个时候我们就要使用 long long。

注：int 取值范围：-1e9 到 1e9，long long 取值范围：-1e18 到 1e18

```c
long long x;
scanf("%11d",&x);
printf("%lld\n",x);
```

* 字符的 ASCII 码

```c
printf("%d\n",'a');
```

注：若遇到需要 ASCII 码的题目，记住 char 字符和 int 值是可以相互转化的。

* cin 和 cout

很多时候使用 c++ 的输入输出更简单，在应对输入输出量不是很大的题目的时候，我们会采用 cin 和 cout 来提高我们的解题速度。

Example：求两个数之和

 ```cpp
#include <iostream>//输入输出函数的头文件 
using namespace std;

int main(){
	
	int a,b;
	cin >> a >> b;
	cout << a + b;
	
	return 0;
} 
 ```

> 注：平时练习的时候不要排斥混合编程，即 C 与 C++ 混用，然后用 C++ 提交。但是注意：printf 尽量不要和 cout 同时使用，会发生一些不可控的意外。

#### 字符串的输入输出

> 1 字符串的输入

示例 1：

```c
char s[maxSize];
gets(s);
scanf("%s", s);
```

示例 2：

```cpp
string s;
getline(cin, s);
```

> 2 字符串的输出

```c
puts(s);
//或者
printf("%s", s);
//C++中也可以用 cout << s;
```



### 头文件技巧

cpp 文件中推荐一个万能头文件：

```cpp
#include <bits/stdc++.h>
using namespace std;
```

注：要看考试的评测机型支不支持，绝大部分都是支持的，当然准备一个完整的头文件还是有必要的，作为备用。

```cpp
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	return 0;
} 
```

注：头文件可以多，但是不能少

### 数组使用技巧

> 数组除了可以存储数据以外，还可以用来进行标记

例题 01：

```cpp
#include <bits/stdc++.h>//万能头文件 
using namespace std;

int f[105]={0};//注意：尽量将数组开在全局 
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		f[x]++;
	} 
	for(int i=1;i<=100;i++){
		if(f[i]>0){
			printf("%d %d\n",i,f[i]);
		}
	}
	return 0;
} 
```

例题 02：

```cpp
#include <bits/stdc++.h>//万能头文件 
using namespace std;

int f[105] = {0};//注意：尽量将数组开在全局 
int p[105] = {0};//p[i]表示有 i个这样的数的最大值是多少 
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		f[x]++;
	} 
	for(int i=0;i<100;i++){
		p[f[i]] = i;
	} 
	for(int i=1;i<=100;i++){
		if(p[i]>0){
			printf("%d %d\n",p[i],i);
		}
	}
	return 0;
} 
```



例题 03：

【题目】二维数组实现存储地图

```
####
#.##
##@#
####
```

【代码实现】

```cpp
#include <bits/stdc++.h>//万能头文件 
using namespace std;

char mpt[10][10];
int main(){
	for(int i=0;i<4;i++){
		scanf("%s",mpt[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%c",mpt[i][j]);
		}
		printf("\n");
	}

	return 0;
} 
```

### 复杂度与是否可做

> 做好审时度势

|   算法   |   循环嵌套    | 时间复杂度 | 空间复杂度 |
| :------: | :-----------: | :--------: | ---------- |
| 冒泡排序 | 两个 for 循环 |   O(N^2​)   |            |

注：空间复杂度一般不会限制，如果遇到了再想办法优化空间。

> 时限 1 s 情况下的复杂度：

| 时间复杂度 | N 取值（时限 1 s） |
| ---------- | ------------------ |
| O(N)       | N 最大在 500w 左右 |
| O(NlogN​)   | N 最大在 20w 左右  |
| O(N^2​)     | N 最大在 2000 左右 |
| O(N^2logN​) | N 最大在 700 左右  |
| O(N^3​)     | N 最大在 200 左右  |
| O(N^4​)     | N 最大在 50 左右   |
| O(2^N​)     | N 最大在 24 左右   |
| O(N!)​      | N 最大在 10 左右   |

注：如果是 2S、3S 对应的乘以 2 和 3 就可以。

### C++ STL 的使用

?> C++ 的算法头文件里有很多实用的函数，我们可以直接拿来用，在调用库函数时，需要在程序中引入库文件 algorithm

```cpp
#include <algorithm>
```

#### 排序函数 

* sort()

* 依次传入三个参数，要排序区间的起点，要排序区间的终点 +1，比较函数。比较函数可以不填，则默认为从小到大排序

* 示例：

* ```cpp
  #include <bits/stdc++.h>
  using namespace std;
  
  int a[105];
  int main(){
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
      	scanf("%d",&a[i]);
  	}
  	sort(a,a+n);
  	for(int i=0;i<n;i++){
  		printf("%d ",a[i]);
  	}
      return 0;
  }
  ```

注明：可以自定 sort 的排序规则，定义一个新的 cmp 函数，只要记得，当 cmp 返回 true 的时候，表示 cmp 第一个参数排在第二参数前面。

* sort（buf,buf+n）（快排且升序排序，若降序则升序后再倒序）
*  sort（buf，buf+n，cmp）（cmp可定义降序）

降序排列的写法：

```cpp
#include <algorithm>

bool cmp(int x, int y){
    return x > y;
}

sort(a, a + n, cmp); //a是数组，n为排序元素个数
```



#### 查找函数

* lower_bound() 函数

* upper_bound() 函数

* lower_bound() 和 upper_bound() 都是利用二分查找的方法在一个排好序的数组中进行查找的。

* 在从小到大的排序数组中：

* lower_bound(begin,end,num)：从数组的 begin 位置到 end-1 位置二分查找第一个大于或等于 num 的数字，找到返回该数字的地址，不存在则返回 end。通过返回的地址减去起始地址 begin,得到找到数字在数组中的下标

* upper_bound(begin,end,num)：从数组的 begin 位置到 end-1 位置二分查找第一个大于 num 的数字，找到返回该数字的地址，不存在则返回 end。通过返回的地址减去起始地址 begin,得到找到数字在数组中的下标

* 重载 lower_bound() 和 upper_bound() 

* lower_bound(begin,end,num,greater< type >()):

* 从数组的 begin 位置到 end-1 位置二分查找第一个小于或等于 num 的数字，找到返回该数字的地址，不存在则返回 end。通过返回的地址减去起始地址 begin,得到找到数字在数组中的下标

* upper_bound(begin,end,num,greater< type >()):

* 从数组的 begin 位置到 end-1 位置二分查找第一个小于 num 的数字，找到返回该数字的地址，不存在则返回 end。通过返回的地址减去起始地址 begin,得到找到数字在数组中的下标

* 示例：

* ```cpp
  //查找函数
  #include <bits/stdc++.h>
  using namespace std;
  
  int cmp(int a,int b);
  int main(){
      int num[6]={1,2,4,7,15,34};
      sort(num,num+6);//按从小到大排序
      //返回数组中第一个大于或等于被查数的值
  	int pos1 = lower_bound(num,num+6,7)-num;
  	//返回数组中第一个大于被查数的值
  	int pos2 = upper_bound(num,num+6,7)-num;
  	cout<<pos1<<" "<<num[pos1]<<endl;
  	cout<<pos2<<" "<<num[pos2]<<endl;
  	sort(num,num+6,cmp);//按从大到小排序
  	//返回数组中第一个小于或等于被查数的值
  	int pos3 = lower_bound(num,num+6,7,greater<int>())-num;
  	//返回数组中第一个小于被查数的值
  	int pos4 = upper_bound(num,num+6,7,greater<int>())-num;
  	cout<<pos3<<" "<<num[pos3]<<endl;
  	cout<<pos4<<" "<<num[pos4]<<endl;
  	 
      return 0;
  }
  
  int cmp(int a,int b){
  	return a>b;
  }
  ```



#### 优先队列

* 通过 priority_queue< int >q 来定义一个储存整数的空的 priority_queue。当然 priority_queue 可以存任何类型的数据，比如 priority_queue< string >q 等等。

* 示例：

* ```cpp
  //#include <bits/stdc++.h>
  #include <iostream>
  #include <queue>
  using namespace std;
  
  int main(){
      priority_queue<int> q;//定义一个优先队列
  	q.push(1);//入队 
  	q.push(2);
  	q.push(3);
  	while(!q.empty()){//判读队列不为空 
  		cout << q.top() << endl; //队首元素 
  		q.pop();//出队 
  	} 
      return 0;
  }
  ```

> C++ 的 STL (标准模板库)是一个非常重要的东西，可以极大的帮助更快速的解决题目

#### vector

* 通过 vector< int >v 来定义一个储存整数的空的 vector。当然 vector 可以存任何类型的数据，比如 vector< string >v 等等

* 示例：

* ```cpp
  //#include <bits/stdc++.h>
  #include <iostream>
  #include <vector>
  using namespace std;
  
  int main(){
      vector<int> v;//定义一个空的 vector
  	for(int i=1;i<=10;i++){
  		v.push_back(i*i);//加入到 vector 中 
  	} 
  	for(int i=0;i<v.size();i++){
  		cout<<v[i]<<" ";//访问 vector 元素 
  	} 
  	cout << endl; 
      return 0;
  }
  ```

  
  

#### queue

* 通过 queue< int >q 来定义一个储存整数的空的 queue。当然 queue 可以存任何类型的数据，比如 queue< string >q 等等

* 示例：

* ```cpp
  #include <iostream>
  #include <queue>
  using namespace std;
  int main()
  {
  	queue<int> q;//定义一个队列
  	q.push(1);
  	q.push(2);
  	q.push(3);
  	while(!q.empty()){//当队列不为空 
  		cout << q.front() << endl;//取出队首元素
  		q.pop();//出队 
  	} 
  	
  	return 0;
  }
  ```

#### stack

* 通过 stack< int >S 来定义一个全局栈来储存整数的空的 stack。当然 stack 可以存任何类型的数据，比如 stack< string >S 等等。

* 示例：

* ```cpp
  #include <iostream>
  #include <stack>
  using namespace std;
  int main()
  {
  	stack<int> s;//定义一个栈 
  	s.push(1);
  	s.push(10);
  	s.push(7);
  	while(!s.empty()){//当栈不为空 
  		cout << s.top() << endl;//取出栈顶元素
  		s.pop();//出栈 
  	} 
  	
  	return 0;
  }
  ```

#### map

* 通过 map< string, int >dict 来定义一个 key:value 映射关系的空的 map。当然 map 可以存任何类型的数据，比如 map< int, int >m 等等

* 示例：

* ```cpp
  #include <iostream>
  #include <string>
  #include <map>
  
  using namespace std;
  int main()
  {
  	map<string, int> dict;//定义一个 map
  	dict["Tom"] = 1;//定义映射关系
  	dict["Jone"] = 2;
  	dict["Mary"] = 1;
  	if(dict.count("Mary")){//查找 map
  		cout << "Mary is in class " << dict["Mary"]; 
  	} 
  	//使用迭代器遍历map和value
  	for(map<string, int>::iterator it = dict.begin();it != dict.end();++it){
  		cout << it->first << " is in class " << it->second << endl;
  	} 
  	dict.clear();//清空 map 
  	return 0;
  }
  ```

#### set

* 通过 set< string >country 来定义一个储存字符串的空的 set。当然 set 可以存任何类型的数据，比如 set< int >s 等等。

* ```cpp
  #include<iostream>
  #include<set>
  using namespace std;
  int main(){
  	set<string> country;//定义一个存放string的集合
  	country.insert("China");//插入操作
  	country.insert("America");
  	country.insert("France");
  	set<string>::iterator it;
  	//使用迭代器遍历集合元素
  	for(it=country.begin();it!=country.end();++it){
  		cout<<*it<<" ";
  	}
  	cout<<endl;
  	country.erase("American");//删除集合内的元素
  	country.erase("England");
  	if(country.count("China")){//统计元素个数
  		cout<<"China in country."<<endl;
  	}
  	country.clear();//清空集合
  	return 0;
  }
  ```

### 多组输入的问题

> 即循环输入输出结果

【题目描述】输入两个数，输出两个数的和，要求多组输入

【代码实现】

* Example 01：C 循环读入代码

```cpp
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d\n",a+b);
	}
	return 0;
}
```

!> 不能使用 while(1) 这样死循环，!=EOF 的意思一直读取到文件末尾（Endoffile）另外，多组输入一定要注意初始化问题，数组和变量的初始化要放在 while 循环内，否则上一次的运算的结果会影响当前的结果。

* Example 02：C++ 循环读入代码

```cpp
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		cout << a + b << endl;
	}
	return 0;
}
```

* Example 03：Java 循环读入代码

```java
Scanner stdin = new Scanner(System.in);
while(stdin.hasnext()){
    String s = stdin.next();
    int n = stdin.nextInt();
    double b = stdin.nextDouble();
}
```

* Example 04：Python 循环读入代码

```python
while true:
    try:
        a, b = map(int, input().split())
        c = a + b
        print(c)
    except:#读到文件末尾抛出异常结束循环
        break
```

## 第二章 入门经典

### 简单模拟

> 不需要考虑什么算法，直接按照题目的意思进行模拟计算就可以了

#### 促销计算



```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;
int main(){
	double a;
	scanf("%lf",&a);
	//使用%g可以自动去掉小数点后多余的0，如果是整数则显示整数
	if (a<1000){
		printf("discount=1,pay=%g\n",a);
	} 
	if (a>=1000 && a<2000){
		printf("discount=0.95,pay=%g\n",a*0.95);
	}
	if (a>=2000 && a<3000){
		printf("discount=0.9,pay=%g\n",a*0.9);
	}  
	if (a>=3000 && a<5000){
		printf("discount=0.85,pay=%g\n",a*0.85);
	}  
	if (a>=5000){
		printf("discount=0.8,pay=%g\n",a*0.8);
	} 	
	
	return 0;
}
```

#### 害死人不偿命的（3 n + 1）猜想

【题目描述】

输入一个数，偶数时则砍掉一半；奇数时，则（3n+1）砍掉一半，最后直到得到1.问，进行了多少次？

【解题思路】

```c
#include <stdio.h>

int main() {
	int n, step = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = (3 * n + 1) / 2;
		}
		step++;
	}
	printf("%d\n", step);
	return 0;
} 
```



!> 简单模拟这类题目在考试中很常见，属于送分签到的题目，一定要确保做对。



### 进制转换

* 题型如下：
  * 反序数：输入一个整数如 123，将其转换为反序之后的整数 321
  * 10 进制转 2 进制：将一个 10 进制整数转化为一个 2 进制的整数
    * 如：7 转换为 111
  * 10 进制转 16 进制：将一个 10 进制整数转化为一个 16 进制的整数
    * 如：10 转换为 A
  * 10 进制转 x 进制：将一个 10 进制整数转化为一个 x 进制的整数
  * x 进制转 10 进制：将一个 x 进制整数转化为一个 10 进制的整数
  * x 进制转 y 进制：将一个 x 进制整数转化为一个 y 进制的整数
  * 字符串转浮点数
    * 如：31.25  先转整数部分，再转小数部分，最后相加即可
  * 浮点数转字符串
    * 如：23.45  将整数和小数拆开再合并成一个字符串
  * 字符串转整型和整型转字符串
    * 直接用 atoi 函数和 itoa 函数即可

> 进制转换代码如下：

#### 反序数代码

```c
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	while(n>0){
		ans = ans * 10 + n % 10;
		n /= 10;
	}
	printf("%d\n",ans);
	return 0;
}
```

 #### 10 进制转 x 进制代码(x < 10)

```c
#include <stdio.h>
int main(){
	int n,x,i;
	int s[105];
	//输入10进制n和要转换的x进制 
	scanf("%d%d",&n,&x);
	int cnt = 0;//数组下标
	while(n>0){//将n逐位分解
		s[cnt++] = n % x;
		n /= x; 
	} 
	//反序输出
	for(i=cnt-1;i>=0;i--){
		printf("%d",s[i]);
	} 
	printf("\n");
	
	return 0;
}
```

#### 10 进制转 x 进制代码(通用版)

```c
#include <stdio.h>
int main(){
	int n,x,i;
	char s[105];//十进制以上有字符，所以用char存储 
	//输入10进制n和要转换的x进制 
	scanf("%d%d",&n,&x);
	int cnt = 0;//数组下标
	while(n>0){//将n逐位分解
		int w = n % x;
		if(w<10){
			s[cnt++] = w + '0';//变成字符需要加'0' 
		} else{
			s[cnt++] = w-10 +'A';//若转换为小写，则加'a' 
		}
		n /= x; 
	} 
	//反序输出
	for(i=cnt-1;i>=0;i--){
		printf("%c",s[i]);
	} 
	printf("\n");
	
	return 0;
}
```

#### x 进制转 10 进制(x == 2)

```c
#include <stdio.h>
#include <string.h>
int main(){
	char s[105];
	//输入二进制字符串
	scanf("%s",&s);
	int ans = 0;
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		if(s[i] == '0'){
			ans *= 2;
		}else{
			ans = ans * 2 + 1;
		}
	} 
	printf("%d\n",ans);
	return 0;
}
```

#### x 进制转 10 进制(通用版)

```c
#include <stdio.h>
#include <string.h>
int main(){
	char s[105];
	int x;
	//输入x进制字符串和代表的进制x 
	scanf("%s%d",&s,&x);
	int ans = 0;
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		ans *= x;
		if(s[i] >= '0' && s[i] <= '9'){
			ans += s[i] - '0';
		}else{
			ans += s[i] - 'A' + 10;
		}
	} 
	printf("%d\n",ans);
	return 0;
}
```

#### x 进制转 y 进制(通用版)

```c
#include <stdio.h>
#include <string.h>
int main(){
	char s[105];
	int x,y;
	//输入x进制字符串和代表的进制x 和要转换的进制y 
	scanf("%s%d%d",&s,&x,&y);
	int ans = 0;
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		ans *= x;
		if(s[i] >= '0' && s[i] <= '9'){
			ans += s[i] - '0';
		}else{
			ans += s[i] - 'A' + 10;
		}
	} 
	char out[105];
	int cnt = 0;
	while(ans>0){
		int w = ans % y;
		if(w < 10){
			out[cnt++] = w + '0';
		}else{
			out[cnt++] = w - 10 + 'A';
		}
		ans /= y;
	}
	for(i = cnt-1;i>=0;i--){
		printf("%c",out[i]);
	}
	printf("\n"); 
	return 0;
}
```



### 排版类问题

题型如下：

（1）输出字符棱形、长方形、三角形、梯形等形状

（2）旋转数字输出

（3）矩阵顺/逆指针旋转

（4）矩阵翻转、轴对称翻转、中心对称翻转等

（5）杨辉三角形

（6）2048 问题

#### 字符棱形

【题目】输入一个整数n表示棱形的对角半长度，请你用*把这个棱形画出来。

【代码】

```c
#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	//上三角
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=n-i+1;j<n+i;j++){
			printf("*");
		}
		printf("\n");
	} 
	//下三角
	for(i=n-1;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=n-i+1;j<n+i;j++){
			printf("*");
		}
		printf("\n");
	} 
	return 0;
}
```

#### 杨辉三角形

```c
1	
1 1
1 2 1
1 3 3 1
```

```c
#include <stdio.h>
#define N 21
int main(){
	int a[N][N] = {0};//初始化为0 
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		a[1][1] = 1;
		for(i=2;i<=n;i++){
			for(j=1;j<=i;j++){
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	} 
	return 0;
}
```

### 日期类问题

题型如下：

（1）判断闰年

（2）某年某月某日是星期几

（3）某天之后 x 天是几月几日

（4）10 : 15 分之后 x 分钟是几点几分

#### 日期

【题目】定义一个结构体变量（包括年、月、日），编程序，要求输入年月日，计算并输出该日在本年中第几天。

【代码】

```c
#include <stdio.h>

struct node{
	int year,month,day;
}p;
int f[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	while(scanf("%d%d%d",&p.year,&p.month,&p.day)!=EOF){
		//判断是否闰年
		if((p.year%400==0)||(p.year%4==0)&&(p.year%100!=0)){
			f[2] = 29;
		} else{
			f[2] = 28;
		}
		int flag = 0;
		//判断月份输入是否合法
		if(p.month<1||p.month>12){
			flag = 1;
		} 
		//判断天的输入是否合法
		int i;
		for(i=1;i<=12;i++){
			if(p.day<0||p.day>f[i]){
				flag = 1;
			}
		} 
		if(flag){
			printf("Input error!\n");
			continue;
		}
		int ans = p.day;
		for(i=1;i<p.month;i++){
			ans += f[i];
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
```

!> 注意：一天之内时针和分针会重合 22 次，而不是 24 次

### 字符串类问题

题型如下：

（1）统计字符个数

（2）单词首字母大写

（3）统计子串出现次数：字符串遍历

（4）文本加密/解密：通过循环往后移动x位或直接给一个映射表是比较常见的考法

（5）文本中的单词反序：String

（6）删除字符串（大小写模糊）：如果大小写不模糊，那么就是直接找到之后删除。大小写模糊的话，只是多一个判断

#### 加密算法

【题目】

```c
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

【代码】

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

### 排序类问题

> 排序类的问题基本上是每个学校必考的知识点，所以它的重要性不言而喻

#### 封装排序函数的使用

> C 和 C++ 提供了现成的排序函数，在对于排序没有手写要求的情况下，可以使用，手写排序函数可以参考我写的数据结构与算法笔记：[点击跳转](专业有料/算法与数据结构/算法与数据结构笔记?id=第八章-排序)

##### qsort 函数（C 语言提供）

> 即快速排序算法
>
> void qsort(基地址，元素个数，元素大小，比较函数)
>
> int compare(当前比较元素1地址，当前比较元素2地址)

举例 1：对 int 类型数组排序

* C 语言解答

```c
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int L = *((int*)a);
	int R = *((int*)b);
	if (L > R) {
		return 1;
	} else if (L == R) {
		return 0;
	} else {
		return -1;
	}
}//递增

int main() {
	int arr[10] = {1,2,0,-1,-3,-9,-12,12,1,2};
	int n = 10;
	qsort(arr, n, sizeof(arr[0]), cmp);
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
} 
```

* C 语言解答（简化版）

```c
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *((int*)a) - *((int*)b);
}//递增

int main() {
	int arr[10] = {1,2,0,-1,-3,-9,-12,12,1,2};
	int n = 10;
	qsort(arr, n, sizeof(arr[0]), cmp);
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
} 
```

举例 2：对 char 类型数组排序

* C 语言解答

```c
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *((char*)a) - *((char*)b);
}

int main() {
	char s[] = "bdfssddfas";
	int n = 10;
	qsort(s, n, sizeof(s[0]), cmp);
	puts(s);
	return 0;
} 
```

举例 3：对二维 char 类型数组排序

* C 语言解答

```c
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	char *L = *((char**)a);
	char *R = *((char**)b);
	return strcmp(L, R);
}

int main() {
	char *words[10] = {
		"welcome",
		"to",
		"the",
		"new",
		"world"
	};
	int n = 5;
	qsort(words, n, sizeof(char*), cmp);
	int i;
	for (i = 0; i < 5; i++) {
		puts(words[i]);
	}
	return 0;
} 
```

举例 4：对结构体数组的排序

* C 语言解答

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct structTest {
	int a;
	int b;
} test;

int cmp(const void *a, const void *b) {
	int L = ((test*)a)->a;
	int R = ((test*)b)->a;
	return L - R;
}

int main() {
	test array[5] = {
		{1, 2},{0, 3},{2, 1},{5, 1},{-1, 0}
	};
	int n = 5;
	qsort(array, n, sizeof(array[0]), cmp);
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d, %d\n", array[i].a, array[i].b);
	}
	return 0;
} 
```

举例 5：对结构体数组的二级排序

* C 语言解答

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct structTest {
	int a;
	int b;
} test;

int cmp(const void *a, const void *b) {
	int L = ((test*)a)->a;
	int R = ((test*)b)->a;
	if (L < R) {
		return -1;
	} else if (L == R) {
		int l = ((test*)a)->b;
		int r = ((test*)b)->b;
		return l - r;
	} else {
		return 1;
	}
}

int main() {
	test array[5] = {
		{1, 2},{0, 3},{2, 1},{5, 1},{-1, 0}
	};
	int n = 5;
	qsort(array, n, sizeof(array[0]), cmp);
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d, %d\n", array[i].a, array[i].b);
	}
	return 0;
} 
```



##### sort 函数（C++ 提供）

sort 函数本质上是封装了快速排序，但是它做了一些优化，复杂度为：nlogn，所以 sort 可以对最大 30W 个左右的元素进行排序，可以应对考研机试中的 99.9% 的情况

> sort 函数的用法：void sort(基地址，基地址 + n);

依次传入三个参数，要排序区间的起点，要排序区间的终点 +1，比较函数。比较函数可以不填，则默认为从小到大排序

* sort 函数有两个常见的应用场景
  * 自定义函数排序
  * 多级排序

使用举例：

```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[10] = {4,1,3,2,4,7,8,-1,-5,4};
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
```

那么，sort 函数可以有比较函数吗，当然可以！

> sort(基地址, 基地址 + n, cmp);

使用举例：（递减排序）

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b; 
}

int main()
{
	int arr[10] = {4,1,3,2,4,7,8,-1,-5,4};
	sort(arr, arr + 10, cmp);
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
```





#### 成绩排序

!> 考点在于稳定排序，sort 排序是不稳定的，排序之后相对次序有可能发生改变。解决这个问题有两个方法，一个是用 stable_sort 函数，它的用法和 sort 一样，但是它是稳定的，所以如果我们遇到有稳定的需求的排序时，可以用它。另一个方法是给每一个输入增加一个递增的下标，然后二级排序，当值相同时，下标小的排在前面。

【题目】

```c
题目描述：
输入任意（用户，成绩）序列，可以获得成绩从高到低或从低到高的排列,
相同成绩都按先录入排列在前的规则处理。
    
示例：
jack     70
peter    96
Tom      70
    
输入描述：
输入多行，先输入要排序的人的个数，然后输入排序方法 0（降序）或者 1（升序）
再分别输入他们的名字和成绩，以一个空格隔开

输出描述：
按照指定方式输出名字和成绩，名字和成绩之间以一个空格隔开
```

【代码】

* 稳定排序版（stable_sort 函数）

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct Student{
	string name;
	int grade;
}stu[1005];

//从大到小排序
bool compareDesc(Student a,Student b){
	return a.grade > b.grade;
} 

//从小到大排序
bool compareAsc(Student a,Student b){
	return a.grade < b.grade;
} 

int main(){
	int n,order;
	while(cin>>n){
		cin>>order;
		for(int i=0;i<n;i++){
			cin>>stu[i].name>>stu[i].grade;
		}
		if(order==0){
			stable_sort(stu,stu+n,compareDesc);
		}else{
			stable_sort(stu,stu+n,compareAsc);
		}
		for(int i=0;i<n;i++){
			cout<<stu[i].name<<" "<<stu[i].grade<<endl;
		}
	}
	return 0;
}
```

* 标记 ID 版（sort 函数）

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct Student{
	string name;
	int grade;
	int id;
}stu[1005];

//从大到小排序
bool compareDesc(Student a,Student b){
	if(a.grade == b.grade){
		return a.id < b.id;
	}
	return a.grade > b.grade;
} 

//从小到大排序
bool compareAsc(Student a,Student b){
	if(a.grade == b.grade){
		return a.id < b.id;
	}
	return a.grade < b.grade;
} 

int main(){
	int n,order;
	while(cin>>n){
		cin>>order;
		for(int i=0;i<n;i++){
			cin>>stu[i].name>>stu[i].grade;
			stu[i].id = i;//通过标记ID进行判断 
		}
		if(order==0){
			sort(stu,stu+n,compareDesc);
		}else{
			sort(stu,stu+n,compareAsc);
		}
		for(int i=0;i<n;i++){
			cout<<stu[i].name<<" "<<stu[i].grade<<endl;
		}
	}
	return 0;
}
```

#### 奇偶排序

【题目】

```c
题目描述：
输入n个数进行排序，要求先按奇偶后按从小到大的顺序排序。
    
输入描述：
第一行输入一个整数n，表示总共有多少个数，n<=1000。第二行输入n个整数，用空格隔开
    
输出描述：
输出排序之后的结果。
    
输入样例#:
8
1 2 3 4 5 6 7 8

输出样例#:
1 3 5 7 2 4 6 8
```

【代码】

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

!> 注：一些特殊的排序题

* 如果题目给的数据量很大，上百万的数据要排序，但是值的区间范围很小，比如值最大只有 10 万，或者值的范围在 1000W 到 1010W 之间，对于这种情况，我们可以采用空间换时间的计数排序。
* 字符串的字典序排序是一个常见的问题，需要掌握，也是用 sort。下面两种情况了解即可，追求满分的同学需要掌握
* 如果题目给你一个数的序列，要你求逆序数对有多少，这是一个经典的问题，解法是在归并排序合并是进行统计，复杂度可以达到 nlogn。如果数据量小，直接冒泡排序即可。
* 如果题目让你求 top10，即最大或最小的 10 个数，如果数据量很大，建议使用选择排序，也就是一个一个找，这样复杂度比全部元素排序要低。
* 如果题目给的数据量有几百万，让你从中找出第 K 大的元素，这时候 sort 是会超时的。解法是利用快速排序的划分的性质，进入到其中一个分支继续寻找，

### 查找类问题

题型如下：

（1）数字查找：给你一堆数字，让你在其中查找 x 是否存在，如果 x 存在，请输出有几个。

（2）字符串查找：给你很多个字符串，让你在其中查找字符串 s 是否存在



#### 顺序查找

!> 不能使用顺序查找的情况：

* 数据量特别大的时候，比如有 10W 个元素。
* 查询次数很多的时候，比如要查询 10W 次。

常规解决办法：先 sort 排序，然后二分查找

推荐方法：使用 map 容器

> map 是 STL 的一种关联式容器，它的底层是红黑树实现的，也就意味着它的插入和查找操作都是 log 级别的。



#### 查找学生信息

【题目】

```
题目描述：
输入N个学生的信息，然后进行查询。

输入描述：
输入的第一行为N，即学生的个数(N<=1000)接下来的N行包括N个学生的信息，
信息格式如下：
01 李江 男 21
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
然后输入一个M(M<=10000),接下来会有M行，代表M次查询，每行输入一个学号，
格式如下：
02
03
01
04

输出描述：
输出M行，每行包括一个对应于查询的学生的信息。
如果没有对应的学生信息，则输出“NoAnswer!”
```

【代码】

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct node{
	string num;
	string name;
	string sex;
	int age;
};

int main(){
	int n,q;
	map<string,node> M;//定义一个map映射
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			node tmp;
			cin>>tmp.num>>tmp.name>>tmp.sex>>tmp.age;
			M[tmp.num]=tmp;//将学号指向对应的结构体 
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			string num;
			cin>>num;
			if((M.find(num))!=M.end()){//find查找
				cout<<M[num].num<<" "<<M[num].name<<M[num].sex<<" "<<M[num].age<<endl; 	
			}else{
				cout<<"No Answer!"<<endl;
			}
		} 
	} 
	return 0;
}
```

上面讲的是一类静态查找的问题，实际中为了增加思维难度或代码难度，会经过一定的改变变成动态查找问题

#### 动态查找

【题目】

```
题目描述：
有n个整数的集合，想让你从中找出x是否存在。

输入描述：
第一行输入一个正整数n（n<100000）
第二行输入n个正整数，用空格隔开。
第三行输入一个正整数q（q<100000），表示查询次数。
接下来输入q行，每行一个正整数x，查询x是否存在。

输出描述：
如果x存在，请输出find，如果不存在，请输出no，并将x加入到集合中。

输入样例#:
5
1 2 3 4 5
3
6
6
3

输出样例#:
no
find
find
```

【代码】

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

int main(){
	int n, q, x;
	map<int, int> M;//定义一个 map 映射
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &x);
		M[x]++;//记录集合中x有多少个 
	} 
	scanf("%d",&q);
	for(i = 0; i < n; i++){
		scanf("%d", &x);
		if(M[x] == 0){
			printf("no\n");
			M[x]++;//将 x 加入到集合中 
		}else{
			printf("find\n"); 
		}
	}
	return 0;
} 
```

#### 二分查找

!> 二分查找的原理，只不过。二分的前提是单调性，只要满足单调性就可以二分，不论是单个元素还是连续区间。下面我们也给出一个基本的二分查找代码，供大家参考。

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

int a[10005];
int main(){
	int n, x;
	scanf("%d", &n);
	int i;
	for(i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	sort(a+1, a+1+n);//排序保持单调性
	scanf("%d", &x);//查找x
	int l = 1, r = n;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			printf("find\n");
			return 0;
		}else if(a[mid] > x){
			r = mid - 1;
		}else{
			l = mid + 1; 
		}
	} 
	printf("not find\n");
	return 0;
} 
```





### 贪心类问题

!> 贪心类问题是很常见的考点，贪心算法更重要的是一种贪心的思想，它追求的是当前最优解，从而得到全局最优解。贪心类问题基本上算是必考题型之一，它能更好的考察出学生的思维能力以及对问题的分析能力，很多学校的出题人都非常爱出贪心类的题目。

!> 贪心算法的定义：贪心算法是指在对问题求解时，总是做出在当前看来是最好的选择。也就是说，不从整体最优上加以考虑，只做出在某种意义上的局部最优解。贪心算法不是对所有问题都能得到整体最优解，关键是贪心策略的选择，选择的贪心策略必须具备无后效性，即某个状态以前的过程不会影响以后的状态，只与当前状态有关。

!> 贪心可以很简单，简单到让所有人一眼就能看出来该怎么做。贪心也可以很难，难到让你没办法去证明这样贪心的正确性。所以要想解决贪心这类问题，主要还是看你的悟性，看你对题目的分析能力如何。

> 注：我们使用贪心的时候，往往需要先按照某个特性先排好序，也就是说贪心一般和sort一起使用。

#### 喝饮料

【题目】

```
题目描述：
商店里有n种饮料，第i种饮料有mi毫升，价格为wi。
小明现在手里有x元，他想吃尽量多的饮料，于是向你寻求帮助，怎么样买才能吃的最多。
请注意，每一种饮料都可以只买一部分。

输入描述：
有多组测试数据。
第一行输入两个非负整数x和n。
接下来n行，每行输入两个整数，分别为mi和wi。所
有数据都不大于1000。x和n都为-1时程序结束。

输出描述：
请输出小明最多能喝到多少毫升的饮料，结果保留三位小数。

输入样例#:
233 6
6 1
23 66
32 23
66 66
1 5
8 5
-1 -1

输出样例#:
136.000
```

【代码】

```cpp
#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct node{
	double w, m;
}p[1005];

bool cmp(node a, node b){
	//按照每毫升的价格升序
	return a.w / a.m < b.w /b.m; 
}
int main(){
	int n, x;
	while(scanf("%d%d", &x, &n) != EOF){
		if(x == -1 && n == -1){
			break;
		}
		int i;
		for(i = 1; i <= n; i++){
			scanf("%lf%lf", &p[i].m, &p[i].w);
		}
		sort(p + 1, p + 1 + n, cmp);
		double ans = 0;
		for(i = 1; i <+ n; i++){
			if(x >= p[i].w){
				ans += p[i].m;
				x -= p[i].w;
			}else{
				ans += p[i].m * x / p[i].w;
				break;
			}
		}
		printf("%.3lf\n", ans);
	} 
	
	return 0;
}
```

> 注：

* 解题的通用步骤
  * 1、建立数学模型来描述问题；
  * 2、把求解的问题分成若干个子问题；
  * 3、对每一子问题求解，得到子问题的局部最优解；
  * 4、把子问题的局部最优解合成原来问题的一个解。

!> 题型总结：贪心问题在很多机试难度低的学校，可以成为压轴题，也就是通过人数最少的题目。在机试难度高的学校也是中等难度及以上的题目，为什么明明贪心看起来这么容易的题目，却成为大多数学生过不去的坎呢？原因有二，一是很多同学根本就没有想到这个题目应该用贪心算法，没能将题目抽象成数学模型来分析，简单说就是没有读懂题目隐藏的意思。二是读懂题了，知道应该是贪心算法解这个题目，但是排序的特征点却没有找准，因为不是所有题目都是这么明显的看出来从小到大排序，有的题目可能隐藏的更深，但是这种难度的贪心不常见。所以机试中的贪心题，你要你反应过来这是一个贪心，99% 的情况下都能解决。

### 链表类问题

!> 链表类问题属于选读章节，对于使用 OJ 测评的院校的同学来说，这类问题可以用数组来实现，没有必要用链表去实现，写起来慢不说，还容易出错，所以我们一般都直接用数组来实现，反正最后 OJ 能 AC 就行，建议这类同学跳过本节或仅做了解即可。但是对于非 OJ 测评的院校来说，链表类问题可以说是必考的题型。

题型考查如下：

（1）猴子报数解析：循环链表建立之后，按照题意删除节点。

（2）两个有序链表合并为一个解析：这个和两个有序数组合并为一个有序数组原理一样。

（3）链表排序解析：使用冒泡排序进行链表排序，因为冒泡排序是相邻两个元素进行比较交换，适合链表。

#### 猴子报数

【题目】

```
题目描述：
n个猴子围坐一圈并按照顺时针方向从1到n编号，从第s个猴子开始进行1到m的报数，
报数到第m的猴子退出报数，从紧挨它的下一个猴子重新开始1到m的报数，
如此进行下去知道所有的猴子都退出为止。
求给出这n个猴子的退出的顺序表。

输入描述：
有多组测试数据．每一组数据有两行，
第一行输入n（表示猴子的总数最多为100）
第二行输入数据s(从第s个猴子开始报数)和数据m(第m个猴子退出报数)．
当输入000时表示程序结束．

输出描述：
每组数据的输出结果为一行，中间用逗号间隔。

输入样例#:
10
2 5
5
2 3
0
0 0

输出样例#:
6,1,7,3,10,9,2,5,8,4
4,2,1,3,5
```

【题目解析】

我们需要创建一个首尾相连的循环链表，然后先走s步，再开始循环遍历链表，每走m步删除一个节点，知道链表中只能下一个节点时结束循环。只能一个节点的判断条件是，它的下一个指针指向的是它，说明它自循环了。

【代码】

```c
#include <stdio.h>
#include <malloc.h>

struct node{
	int num;
	struct node *next;
};

int n, s, m;

//创建循环链表
struct node* create(){
	struct node *head, *now, *pre;
	int i;
	for(i = 1; i <= n; i++){
		now = (struct node *)malloc(sizeof(struct node));
		if(i == 1){//第一个节点需要处理 
			head = now;//头结点指向第一个节点 
			pre = now;//上一个节点也指向它 
		}
		now->num = i;
		now->next = head;
		pre->next = now;
		pre = now;//将当前节点作为上一个节点 
	}
	return head; 
}; 


//按照题目要求输出
void print(struct node *head){
	struct node *p;
	p = head;
	while(s--){//先走 s 步 
		p = p->next;
	} 
	int i = 1;
	while(p != NULL){//只剩最后一个 
		if(p == p->next){
			printf("%d\n", p->num);
			break;
		}
		if((i + 1) % (m - 1) == 0){
			printf("%d,", p->next->num);
			p->next = p->next->next;//删除下一个节点 
		} 
		p = p->next;
		i++; 
	} 
} 

int main(){
	while(scanf("%d%d%d", &n, &s, &m) != EOF){
		if(n == 0 && s == 0 && m == 0){
			break;
		}
		struct node *head;
		head = create();
		print(head);
	}
	return 0;
}
```



## 第三章 数学问题

### 同模余定理

数学上的记法为：a ≡ b ( mod d )

对于同余有三种说法都是等价的,分别为:

(1) a 和 b 是模 d 同余的

(2) 存在某个整数 n,使得 a = b + n * d

(3) d 整除 a - b

#### 求 S(n)

【题目】

```
S(n) = n ^ 5;
求 S(n) 除以 3 的余数
```

【代码】

```c
#include <stdio.h>
int main(){
	long long int n;
	while(~scanf("%lld",&n)){
		long long int s = n;
		//同余模定理
		int i;
		for(i=0;i<4;i++){
			s = (s % 3) * (n % 3);
		} 
		printf("%lld\n",s%3);
	}
	
	return 0;
}
```

#### 大数取余

```
对于大数的求余，联想到进制转换时的方法，
得到举例如下，设大数m=1234,模n就等于
((((1*10)%n+2%n)%n*10%n+3%n)%n*10%n+4%n)%
```

【代码】

* C 语言版：大数取余

```c
#include <stdio.h>
char s[1000];
int main(){
	int i, j, k, m, n;
	while (~scanf("%s%d", s, &n)){
		m = 0;
		for (i = 0; s[i] != '\0'; i++){
			m = ((m * 10) % n + (s[i] - '0') % n) % n;
		}
		printf("%d\n", m);
	}
	return 0;
}
```

!> 特别提醒：同余模定理的运算不适用于除法，对于除法取模的运算我们一般使用逆元来解决问题，后面的章节中会详细给大家讲解。

### 最大公约数（GCD）

#### 求最大公约数

【题目】

求两个数x和y的最大公约数

【代码】

* C 语言版：递归

```c
#include <stdio.h>

int gcd(int a, int b);

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", gcd(x, y)); 
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

#### 最简真分数

【题目】

```
题目描述：
给出n个正整数，任取两个数分别作为分子和分母组成最简真分数，
编程求共有几个这样的组合。

输入描述：
每组包含n（n<=600）和n个数，整数大于1且小于等于1000。

输出描述：
每行输出最简真分数组合的个数。

输入样例#:
7
3 5 7 9 11 13 15

输出样例#:
17
```

【题目解析】

```
通过分析题意可以发现，最简真分数的必要条件就是不可以继续约分，那么不可以继续约分，
就说明分子和分母的最大公约数为1。
因此，我们只需要枚举所有组合的情况然后判断 GCD 即可。
```

【代码】

* C 语言版

```c
#include <stdio.h>

int gcd(int a, int b);

int main(){
	int buf[600];
	int ans, n, i, j;
	while(scanf("%d", &n) != EOF){
		for(i = 0; i < n; i++){
			scanf("%d",&buf[i]);
		}
		ans = 0;//答案个数
		for(i = 0; i < n; i++){
			for(j = i + 1; j < n; j++){
				if(gcd(buf[i], buf[j]) == 1){
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

#### 分数化简

另一种变形考法是：分数化简

例如：给你一个分数12/30，让你将它化简，很明显，我们都知道它的答案是2/5。

那么：如果给你一个分数x/y呢？如何化简？

我们可以得出：

x/y=(x/gcd(x,y))/(y/gcd(x,y))

那么只用求出他们的最大公约数，然后除一下就可以得到答案了。

### 最小公倍数（LCM）

对于求两个数的最小公倍数，只需要记住下面这个公式即可。

LCM ( x, y ) = x * y / GCD ( x, y )

翻译一下就是：两个数的最小公倍数等于两个数的乘积除以两个数的最大公约数。

所以要求两个数的最小公倍数，我们只需求出他们的最大公约数即可。

```c
int lcm(int a, int b){
    return a * b / gcd(a, b);
}
```



上面的式子经过变形，可以很容易得到下面这个式子

x * y = LCM ( x, y ) * GCD ( x, y )

### 斐波那契数列

> 斐波那契数列指的是这样一个数列  1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233.......
>
> 这个数列从第 3 项开始，每一项都等于前两项之和。
>
> 公式 F(n) = F(n-1) + F(n-2)



!> 注意：

（1）这个数列上升速度非常快，很容易超过 int 和 long long 的范围。

（2）如果对答案取模，题目就可能要求我们计算第 10000000 项的值，我们就可以直接使用公式求解，后面的章节也会讲到用矩阵快速幂求解的方法。

（3）如果给你一个数列：a(1) = 1，a(n+1) = 1 + 1 / a(n)。那么它的通项公式为：a(n) = fib(n+1) / fib(n)

### 素数判定

【题目】

```
输入一个整数，判断该整数是否为素数，
若是，输出该整数，
若否，输出大于该整数的第一个素数。
（例如，输入为14，输出17，因为17是大于14的第一个素数）
```

【代码】

* C 语言版：复杂度是 O(n*sqrt(n))，大概能处理到10000以内的数

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

### 素数筛选

> 线性复杂度的高效筛选法

* C 语言版：可以求前 1000000 中的前 10000 个素数，如果 flag[i] == true，说明是素数

```c
int prime[1000001];
int flag[1000001];
int size;

void getPrime() {
    size = 0;
    for (int i = 1; i <= 1000000; i++) {
        flag[i] = false;
    }
    for (int i = 2; i <= 1000000; i++) {
        if (flag[i]) {
            continue;
        }
        prime[size++] = i;
        if(i >= 10000) continue;
        for (int j = i * i; j <= 1000000; j += i) {
            flag[j] = true;
        }
    }
}
```



* C++ 版：

```cpp
#include <bits/stdc++.h>
using namespace std;

//线性素数筛选，prime[0] 存的是素数的个数
const int maxSize = 1000000 + 5;
int prime[maxSize];
void getPrime(){
	memset(prime, 0, sizeof(prime));
	for(int i = 2; i <= maxSize; i++){
		if(!prime[i]){
			prime[++prime[0]] = i;
		}
		for(int j = 1; j <= prime[0] && prime[j] * i <= maxSize; j++){
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0){
				break;
			}
		}
	}
} 

int main(){
	getPrime();
	for(int i = 0; i < sizeof(prime)/sizeof(int); i++){
		printf("%d\n", prime[i]);
	}
}
```



#### 质因数个数

【题目】

```
求正整数N(N>1)的质因数的个数。相同的质因数需要重复计算。
如120=2*2*2*3*5，共有5个质因数。
```

【代码】

```cpp
#include <bits/stdc++.h>
using namespace std;

//线性素数筛选，prime[0] 存的是素数的个数
const int maxSize = 1000000 + 5;
int prime[maxSize];
void getPrime(){
	memset(prime, 0, sizeof(prime));
	for(int i = 2; i <= maxSize; i++){
		if(!prime[i]){
			prime[++prime[0]] = i;
		}
		for(int j = 1; j <= prime[0] && prime[j] * i <= maxSize; j++){
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0){
				break;
			}
		}
	}
} 

int main(){
	getPrime();//先进行素数筛选预处理
	int n;
	while(~scanf("%d", &n)){
		int ans = 0;
		for(int i = 1; i <= prime[0]; i++){
			while(n % prime[i] == 0){
				n /= prime[i];
				ans++;
			}
		}	
		if(n > 1){
			ans++;
		}
		printf("%d\n", ans);
	} 
	return 0;
}
```

### 二分快速幂

> 求 (x^y)%p 举例：3 ^ 7 = 3 ^ 4 * 3 ^ 2 * 3 ^ 1

特点：

* 每一个数都是它前一个数的 2 倍
* 它的迭代速度超级快

模板举例：快速的求 a 的 b 次幂

```c
long long pow(int a, int b){
    long long ans = 1;
    while(b != 0){
        if(b % 2){
            ans *= a;
        }
        b /= 2;
        a *= a;
    }
    return ans;
}
```

可以换成下面的按位运算：

#### 幂次方

【题目】

```
对任意正整数N，求X^N%233333的值。
要求运算的时间复杂度为O(logN)。
例如
X30=X15*X15
X15=X7*X7*X
X7=X3*X3*X
X3=X*X*X
共7次乘法运算完毕
```

【代码】

```cpp
#include <bits/stdc++.h>
using namespace std;

long long mod_pow(long long x, long long y, long long mod){
	long long res = 1;
	while(y > 0){
		//如果二进制最低位为1、则乘上x^(2^i)
		if(y & 1){
			res = res * x % mod;
		} 
		x = x * x % mod;//将x平方
		y >>= 1; 
	}
	return res;
}

int main(){
	long long x, n;
	scanf("%lld%lld", &x, &n);
	printf("%lld\n", mod_pow(x, n, 233333));
	return 0;
}
```

### 常见数学公式总结

#### 错排公式问题：

十本不同的书放在书架上。现重新摆放，使每本书都不在原来放的位置。有几种摆法？

递推公式为：D ( n ) = ( n - 1 ) * [ D ( n - 1 ) + D ( n - 2 ) ]

#### 海伦公式

S = sqrt ( p * ( p - a ) * ( p - b ) * ( p - c ) )

公式描述：公式中a，b，c分别为三角形三边长，p为半周长，S为三角形的面积。

#### 卡特兰数



### 规律神器 OEIS

> 飞快解出那些所谓推公式的规律难题，网址：[OEIS](http://oeis.org/)

例题：

#### 01 字符串

【题目】

```cpp
题目描述：
给你一串长度为n的全为0的字符串，你可以进行一个压缩操作，将两个相邻的0压缩成一个1。
请问最多会有多少种组合出现？例如n为3则有下面3种组合：0001001
    
输入描述：
输入一个正整数n（1<=n<=10000）。
    
输出描述：
输出最多有多少种组合出现，由于结果可能过大，请将答案对2333333取模。
    
输入样例#:
3
    
输出样例#:
3
```

【代码】

```c
#include <stdio.h>

long long f[10005] = {0};
int main(){
	int n;
	scanf("%d", &n);
	f[0] = 1;
	f[1] = 1;
	int i;
	for(i = 2; i <= n; i++){
		f[i] = f[i-1] + f[i-2];
		f[i] %= 2333333;
	}
	printf("%lld\n", f[n]);
	return 0;
}
```



## 第四章 数据结构



### 顺序表

【代码实现】

```c
#include <stdio.h>
#define MaxSize 100
//定义数据类型 
typedef int DataType;
typedef struct{
	//线性数组 
    DataType list[MaxSize];
    //数组长度 
    int length;
}SeqList;
//初始化线性表 
void InitList(SeqList *L){
    L->length =0; //把线性表的长度设为0
}

int ListEmpty(SeqList L){
    if(L.length == 0)
        return 1;
    else
        return 0;
}

void ClearList(SeqList *L){//线性表清空。
	L->length =0; //把线性表的长度设为0
}

int GetElem(SeqList L, int i, DataType *e){
//查找线性表中第i个元素，查找成功将该值返回给e，并返回1表示成功，反正返回-1表失败。
    if(i < 1 || i > L.length){
    	return -1;
	}
    *e = L.list[i - 1];
    return 1;
}

int LocateElem(SeqList L, DataType e){
//查找线性表中元素值为e的元素
    int i;
    for (i = 0; i < L.length ; i++)
        if(L.list[i] == e){
        	return i + 1;
		}   
    return 0;//找不到返回0
}

//在顺序表的第i个位置插入元素e，成功返回1，失败返回-1，顺序表满了返回0
int InsertList(SeqList *L, int i, DataType e){
    int j;
    if(i < 1 || i > L->length + 1){
        return -1;
    }
    else if(L->length >= MaxSize){
        return 0;
    }else{
        for(j = L->length; j >= i; j--){
            L->list[j] = L->list[j-1];
        }
        L->list[i-1] =e ;//插入元素到i个位置
        L->length = L->length + 1;
        return 1;
    }
}

int DeleteList(SeqList *L, int i, DataType *e){
    int j;
    if(L->length <= 0){
        return 0;
    }
    else if(i < 1 || i > L->length){
        return -1;
    }else{
        *e = L->list[i-1];
        for(j = i;j <= L->length-1; j++){
            L->list[j-1] = L->list[j];
        }
        L->length = L->length - 1;
        return 1;
     }
}

int ListLength(SeqList L){//返回线性表L的元素个数。
	return L.length;
}

void PrintList(SeqList L){//打印线性表,即顺序表遍历
	int i;
	for(i = 0; i < L.length; i++){
		printf("%d\n", L.list[i]);
	}
} 
    
int main(){
	
	SeqList L;
	//L.length = 0;
	//L = (SeqList *)malloc(sizeof(SeqList));//申请内存空间
	//L->length = 10;
	printf("初始化数组------\n");
	//测试初始化数组长度为0 
	InitList(&L);
	printf("插入节点------\n");
	//测试插入数据元素
	InsertList(&L, 1, 55);
	InsertList(&L, 2, 57);	
	InsertList(&L, 3, 78);
	InsertList(&L, 2, 89);
	//查看线性表是否为空 
	if(ListEmpty(L) == 1){
		printf("线性表为空\n"); 
	}else{
		printf("线性表不为空\n"); 
	}
	
	//测试 打印线性表
	PrintList(L) ;
	int a = 123;
	int *p = &a;
	printf("删除节点------\n");
	//删除测试
	DeleteList(&L, 2, p); 
	printf("%d\n",*p);
	printf("删除节点后------\n");
	//测试 打印线性表
	PrintList(L) ;
	int l = ListLength(L);
	printf("线性表长度为%d\n",l);
	//查找元素
	//按内容查找 
	if(LocateElem(L, 55)){
		printf("找到\n"); 
	} 
	//按序号查找 
	GetElem(L, 2, p);
	printf("%d\n",*p); 
	return 0;
}
```



### 单链表

【代码实现】

* 分模块完整版

```c
#include <stdio.h>
#include <stdlib.h>

//定义数据类型 
typedef int DataType;
typedef struct Node{
    DataType data;//创建数据域 
    struct Node *next;//创建指针域 
}LinkList;

LinkList * InitList(LinkList *p){
	p = (LinkList *)malloc(sizeof(LinkList));
	if(!p){
		exit(-1);//exit函数，退出程序。
	}
	p->next = NULL;
	return p;
}

LinkList * CreateList(){ //函数返回值为LinkList * 类型。
	int len, i, x;
	//LinkList *p = (LinkList *)malloc(sizeof(LinkList));
	LinkList *p,*q;
	p = InitList(q);
	LinkList * r = p; //创建尾指针指向尾节点
	r->next = NULL;
 
	printf("请输入链表的节点个数：len = ");
	scanf("%d", &len);
 
	for (i=0; i<len; ++i){
		printf("请输入第%d个节点的值：", i+1);
		scanf("%d", &x);
 
		LinkList *q = (LinkList *)malloc(sizeof(LinkList)); //链表的不连续性在于它的内存空间在不断地一个个分配
		if (!q){
			printf("分配空间失败，程序终止！\n");
			exit(-1);
		}
		q->data = x;
		r->next = q;
		q->next = NULL;
		r = q; //递归
	}
	return p;
}

void PrintList(LinkList * p){//遍历输出
	LinkList *q;
	if (ListEmpty(p)){
		printf("链表为空！\n");
	}else{
		q = p->next; //使指针指向下一个节点
		printf("链表中的数据为：\n");
		while (q){//q!=NULL
			//printf("%d ", q->data);
			if(q->next){
				printf("%d->", q->data);
			}else{
				printf("%d", q->data);
			}
			q = q->next;
		}
		printf("\n");
	}
}

int InsertList(LinkList *head,int i,DataType e){
    LinkList *pre,*p;//定义第i个元素的前驱结点指针pre，新生结点指针p
    int j = 0;
    pre = head; //指针pre指向头结点
    while(pre->next != NULL && j < i-1){ //循环直到直到i元素前驱结点
        pre = pre->next;
        j++;
    }
    if(j != i-1)//如果没找到，插入位置出错
        return 0;
    //新生一个结点
    p = (LinkList *)malloc(sizeof(LinkList));
    if(!p){
        exit(-1);
    }
    p->data =e; //将e赋值给结点的数据域
    p->next = pre->next;
    pre->next =p;
    return 1;
}
 
 int DeleteList(LinkList *head,int i,DataType *e){
    LinkList *pre,*p;
    int j = 0;
    pre = head;
    while(pre->next!=NULL && pre->next->next != NULL && j<i-1){
        pre = pre->next;    
        j++;
    }
    if(j!=i-1){
        return 0;
    }
    //指针p指向单链表中的第i个结点,并将该结点数据域值赋值给e
    p = pre->next;
    *e =p->data;
    //将前驱结点的指针域指向要删除结点的下一个结点
    pre->next =p->next;
    free(p);//释放p指向的结点
    return 1; 
}

//按序号查找单链表中第i个结点
LinkList *GetElem(LinkList *head,int i){
    LinkList *p;
    int j = 0;
    if(ListEmpty(head)||i<1){ //如果链表为空
        return NULL;
    }
    p = head;
    while(p->next !=NULL && j<i-1){//保证p的下个结点不为空
        p = p->next;
        j++;
    }
    if(j==i-1)//找到第i个结点
        return p;
    else
        return NULL;
}
 
//按内容查找单链表中元素值为e的元素
int LocateElem(LinkList *head,DataType e){
	int flag = 0;
    LinkList *p;
    p = head->next; //指针p指向第一个结点
    while(p){
        if(p->data != e){
            p=p->next;//继续下一个
        }else{
        	flag = 1;
            break;
        }
    }
    return flag;
}

int LocatePos(LinkList *head,DataType e){
    LinkList *p;//定义一个指向单链表的结点的指针p
    int i;
    if(ListEmpty(head))//非空判断
        return 0;
    p = head->next;//指针p指向一个结点
    i =1;
    while(p){
        if(p->data==e)
            return i;
        else
        {
            p=p->next;//指向下一个结点
            i++;
        }
    }
    if(!p)//如果没有找到与e相等的元素
         return 0;
} 

int ListEmpty(LinkList *p){
	int flag = 0;
	if(!p){
		flag = 1;
	}
	return flag;
}

int main(){
	LinkList *p; //创建头指针，用来存放头结点的地址。
	p = CreateList(); //CreateList()函数动态创建链表并返回头结点的地址。
	
	PrintList(p); //打印单链表数据 
	InsertList(p, 1, 23);
    PrintList(p); //打印单链表数据 
    int x;
    DeleteList(p,2,&x);
    PrintList(p); //打印单链表数据 
    printf("删除 %d\n",x);
    LinkList *q;
	q = GetElem(p,2);
	printf("查找到%d\n",q->data);
	if(LocateElem(p,23)==1){
		printf("找到\n"); 
	}
	int i = LocatePos(p,23);
	printf("%d\n",i);
	return 0;
}
```

* 常规使用简化版

```c
#include <stdio.h>
#include <stdlib.h>

//定义数据类型 
typedef int DataType;
typedef struct Node{
    DataType data;//创建数据域 
    struct Node *next;//创建指针域 
}LinkList;

LinkList * CreateList(){ 
    //函数返回值为LinkList * 类型。
	int len, i, x;
	LinkList *q = (LinkList *)malloc(sizeof(LinkList));
	if (!q){
		printf("分配头结点空间失败，程序终止！\n");
		exit(-1); //exit函数，退出程序。
	}	
	LinkList * r = q; //创建尾指针指向尾节点
	r->next = NULL;
	printf("请输入链表的节点个数：len = ");
	scanf("%d", &len);
	for (i=0; i<len; ++i){
		printf("请输入第%d个节点的值：", i+1);
		scanf("%d", &x);
		LinkList *p = (LinkList *)malloc(sizeof(LinkList)); 
		//链表的不连续性在于它的内存空间在不断地一个个分配
		if (!p){
			printf("分配空间失败，程序终止！\n");
			exit(-1);
		}
		p->data = x;
		r->next = p;
		p->next = NULL;
		r = p; //递归
	}
	return q;
}

void PrintList(LinkList * p){//遍历输出
	LinkList *q;
	if (isEmpty(p)){
		printf("链表为空！\n");
	}else{
		q = p->next; //使指针指向下一个节点
		printf("链表中的数据为：\n");
		while (q){//q!=NULL
			printf("%d  ", q->data);
			q = q->next;
		}
		printf("\n");
	}
}
 
int isEmpty(LinkList *p){
	int flag = 0;
	if(!p){
		flag = 1;
	}
	return flag;
}

int main(){
	LinkList * p; //创建头指针，用来存放头结点的地址。
	p = CreateList(); //CreateList()函数动态创建链表并返回头结点的地址。	
	PrintList(p); //打印单链表数据 
	return 0;
}
```





### 栈的应用

栈是一种只能在一端进行插入和删除操作的数据结构，它满足先进后出的特性。

#### C++ 模板

我们通过 stack < int > S 来定义一个全局栈来储存整数的空的 stack。当然 stack 可以存任何类型的数据，比如 stack < string > S 等等。

```cpp
#include <bits/stdc++.h>
//#include <iostream>
//#include <stack>
using namespace std;

stack<int> S;
int main(){
	S.push(1);
	S.push(10);
	S.push(7);
	while(!S.empty()){
		cout << S.top() << endl;
		S.pop();
	}
	return 0;
}
```

#### C 模板

!> 若只能使用 C 语言机试的同学直接用数组模拟栈即可

```c
//栈和队列都可以使用数组模拟实现
#include <stdio.h>

int st[1005];//定义一个栈
int main(){
	int top = 0;//栈顶下标
	st[++top] = 1;//将1入栈
	st[++top] = 10;
	st[++top] = 7;
	while(top > 0){
		printf("%d\n", st[top]);//输出栈顶元素 
		top--;//出栈 
	} 
	return 0; 
} 
```

当然也可以定义 top = -1;

```c
int st[maxSize];//定义一个栈
int top = -1;//栈顶下标
st[++top] = a;//入栈
c = st[top--];//出栈
top == -1 //为真，表明栈空
```



#### 括号匹配

【题目】

```
题目描述：
假设表达式中允许包含两种括号:圆括号和方括号。
编写一个算法判断表达式中的括号是否正确配对。

输入描述：
由括号构成的字符串，包含”（“、”）“、”[“和”]“。

输出描述：
如果匹配输出YES，否则输出NO。

输入样例#:
[([][]())]

输出样例#:
YES
```

【代码】

```cpp
#include <bits/stdc++.h>
//#include <iostream>
//#include <stack>
using namespace std;

int main(){
	char s[300];
	scanf("%s", &s);
	int len = strlen(s);
	stack<char> st;
	for(int i = 0; i < len; i++){
		if(!st.empty()){
			char now = st.top();
			if(s[i] == ')' && now == '(' || s[i] == ']' && now == '['){
				st.pop();
			}else{
				st.push(s[i]);
			}
		}else{
			st.push(s[i]);
		}
	}
	if(!st.empty()){
		printf("No\n");
	}else{
		printf("YES\n");
	}
	return 0;
}
```

> 比较常见的应用方式：

* 计算表达式的值
* 带优先级的括号匹配问题

### 队列的使用

使用举例：

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	cout<<"empty?:"<<q.empty()<<endl;
	q.push(1);
	q.push(2);
	q.push(3);
	q.pop();
	q.pop();
	q.push(5);
	cout<<"empty?:"<<q.empty()<<endl;
	cout<<"first:"<<q.front()<<endl;
	cout<<"last:"<<q.back()<<endl;
	cout<<"elements:";
	while (!q.empty()) {
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}
```



### 哈夫曼树

> 基本概念：

给定 N 个权值作为 N 个叶子结点，构造一棵二叉树，若该树的带权路径长度达到最小，称这样的二叉树为最优二叉树，也称为哈夫曼树 (HuffmanTree)

哈夫曼树是带权路径长度最短的树，权值较大的结点离根较近

哈夫曼树题目一般有以下几种考点：

（1）直接要求构造哈夫曼树，输出 WPL，即带权路径长度

（2）考察概念的理解，如下面的例题，合并果子

（3）考察哈夫曼编码

#### 合并果子

【代码】

* C++ 版：使用优先队列

```cpp
#include <bits/stdc++.h>
using namespace std;

struct node {
	int x;
	node(int a) {
		x = a;//构造函数方便赋值 
	}
}; 

//定义优先队列的比较关系和sort的cmp类似
bool operator < (const node &a, const node &b) {
	return a.x > b.x;
} 

int main() {
	priority_queue<node> q;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		q.push(x);
	}
	int ans = 0;
	while (q.size() > 1) {
		node num1 = q.top();
		q.pop();
		node num2 = q.top();
		q.pop();
		ans += (num1.x + num2.x);
		q.push(node{num1.x + num2.x});
	}
	cout << ans;
	return 0;
}
```

* C 语言版：二叉排序数实现

待写









#### 哈夫曼编码

> 哈夫曼树的应用很广，哈夫曼编码就是其在电讯通信中的应用之一。广泛地用于数据文件压缩的十分有效的编码方法。其压缩率通常在 20%～90% 之间。在电讯通信业务中，通常用二进制编码来表示字母或其他字符，并用这样的编码来表示字符序列。

例如：如果需传送的电文为 ‘ABACCDA’，它只用到四种字符，用两位二进制编码便可分辨。假设 A, B, C, D的编码分别为 00, 01, 10, 11，则上述电文便为 ‘00010010101100’（共 14 位），译码员按两位进行分组译码，便可恢复原来的电文。

能否使编码总长度更短呢？

实际应用中各字符的出现频度不相同，用短（长）编码表示频率大（小）的字符，使得编码序列的总长度最小，使所需总空间量最少

数据的最小冗余编码问题

在上例中，若假设 A, B, C, D的编码分别为 0，00，1，01，则电文 ‘ABACCDA’ 便为 ‘000011010’（共 9 位），但此编码存在多义性：可译为：‘BBCCDA’、‘ABACCDA’、‘AAAACCACA’等。

译码的惟一性问题

要求任一字符的编码都不能是另一字符编码的前缀，这种编码称为前缀编码（其实是非前缀码）。在编码过程要考虑两个问题，数据的最小冗余编码问题，译码的惟一性问题，利用最优二叉树可以很好地解决上述两个问题

用二叉树设计二进制前缀编码

以电文中的字符作为叶子结点构造二叉树。然后将二叉树中结点引向其左孩子的分支标 ‘0’，引向其右孩子的分支标 ‘1’；每个字符的编码即为从根到每个叶子的路径上得到的 0, 1 序列。如此得到的即为二进制前缀编码。



编码：A：0，C：10，B：110，D：111

任意一个叶子结点都不可能在其它叶子结点的路径中。

用哈夫曼树设计总长最短的二进制前缀编码

假设各个字符在电文中出现的次数（或频率）为 wi，其编码长度为 li，电文中只有 n 种字符，则电文编码总长为：



设计电文总长最短的编码，设计哈夫曼树（以 n 种字符出现的频率作权）

由哈夫曼树得到的二进制前缀编码称为哈夫曼编码

例：如果需传送的电文为 ‘ABACCDA’，即：A, B, C, D的频率（即权值）分别为 0.43, 0.14, 0.29, 0.14，试构造哈夫曼编码。



编码：A：0，C：10，B：110，D：111。电文 ‘ABACCDA’ 便为 ‘0110010101110’（共 13 位）。

例：如果需传送的电文为 ‘ABCACCDAEAE’，即：A, B, C, D, E的频率（即权值）分别为 0.36, 0.1, 0.27, 0.1, 0.18，试构造哈夫曼编码。

编码：A：11，C：10，E：00，B：010，D：011，则电文 ‘ABCACCDAEAE’ 便为 ‘110101011101001111001100’（共 24 位，比 33 位短）。

译码

从哈夫曼树根开始，对待译码电文逐位取码。若编码是 “0”，则向左走；若编码是 “1”，则向右走，一旦到达叶子结点，则译出一个字符；再重新从根出发，直到电文结束。

电文为 “1101000”，译文只能是 “CAT”



### 二叉树

> 定义

二叉树是 n ( n >= 0 ) 个结点的有限集合，该集合或者为空集（称为空二叉树），或者由一个根结点和两棵互不相交的、分别称为根结点的左子树和右子树组成。下图展示了一棵普通二叉树：

![](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200422082311.png)

二叉树特点

由二叉树定义以及图示分析得出二叉树有以下特点：

* 1）每个结点最多有两棵子树，所以二叉树中不存在度大于 2 的结点。
* 2）左子树和右子树是有顺序的，次序不能任意颠倒。
* 3）即使树中某结点只有一棵子树，也要区分它是左子树还是右子树。



二叉树性质

* 1）在二叉树的第 i 层上最多有 $2^{i - 1}$ 个节点。（ i >= 1 ）
* 2）二叉树中如果深度为 k, 那么最多有 $2^{k - 1}$个节点。( k >= 1 ）
* 3）n0 = n2 + 1 ：n0 表示度数为 0 的节点数，n2 表示度数为 2 的节点数。
* 4）在完全二叉树中，具有 n 个节点的完全二叉树的深度为 [ log 2 n ] + 1，其中 [ log 2 n ] 是向下取整。
* 5）若对含 n 个结点的完全二叉树从上到下且从左至右进行 1 至 n 的编号，则对完全二叉树中任意一个编号为i的结点有如下特性：
  * (1) 若 i = 1，则该结点是二叉树的根，无双亲,否则，编号为 [i / 2] 的结点为其双亲结点;
  * (2) 若 2 i > n，则该结点无左孩子，否则，编号为 2 i 的结点为其左孩子结点；
  * (3) 若 2 i + 1 > n，则该结点无右孩子结点，否则，编号为 2 i + 1 的结点为其右孩子结点。

#### 满二叉树

> 满二叉树定义：在一棵二叉树中。如果所有分支结点都存在左子树和右子树，并且所有叶子都在同一层上，这样的二叉树称为满二叉树。

满二叉树的特点有：

1）叶子只能出现在最下一层。出现在其它层就不可能达成平衡。

2）非叶子结点的度一定是 2。

3）在同样深度的二叉树中，满二叉树的结点个数最多，叶子数最多。



#### 完全二叉树

> 完全二叉树定义：对一棵具有 n 个结点的二叉树按层编号，如果编号为 i ( 1 <= i <= n ) 的结点与同样深度的满二叉树中编号为 i 的结点在二叉树中位置完全相同，则这棵二叉树称为完全二叉树。

下图展示一棵完全二叉树：



特点：

* 1）叶子结点只能出现在最下层和次下层。
* 2）最下层的叶子结点集中在树的左部。
* 3）倒数第二层若存在叶子结点，一定在右部连续位置。
* 4）如果结点度为 1，则该结点只有左孩子，即没有右子树。
* 5）同样结点数目的二叉树，完全二叉树深度最小。

> 注：满二叉树一定是完全二叉树，但反过来不一定成立。

#### 二叉树的遍历

> 二叉树的遍历一个重点考查的知识点。

二叉树的遍历是指从二叉树的根结点出发，按照某种次序依次访问二叉树中的所有结点，使得每个结点被访问一次，且仅被访问一次。

二叉树的访问次序可以分为四种：

* 前序遍历
* 中序遍历
* 后序遍历
* 层序遍历

##### 前序遍历

前序遍历通俗的说就是从二叉树的根结点出发，当第一次到达结点时就输出结点数据，按照先向左再向右的方向访问。

##### 中序遍历

中序遍历就是从二叉树的根结点出发，当第二次到达结点时就输出结点数据，按照先向左再向右的方向访问。

##### 后序遍历

后序遍历就是从二叉树的根结点出发，当第三次到达结点时就输出结点数据，按照先向左再向右的方向访问。

##### 层次遍历

层次遍历就是按照树的层次自上而下的遍历二叉树。



!> 注：已知前序遍历序列和后序遍历序列，不可以唯一确定一棵二叉树。

#### 考查题型

##### 二叉树的建立与遍历

【题目描述】

建立以二叉链作为存储结构的二叉树，实现1）先序遍历；2）中序遍历；3）后序遍历；4）层序遍历；5）编程计算二叉树的叶子结点个数。

【输入描述】

按照先序遍历序列输入二叉树中数据元素的值，没有的输入 0 表示。

【输出描述】

第一行输出先序遍历序列，第二行输出中序遍历序列，第三行输出后序遍历序列，第四行输出叶子结点的个数。

【输入样例】

A B C 0 0 0 D E 0 F 0 0 G 0 0 

【输出样例】

A B C D E F G 

C B A E F D G 

C B F E G D A 

3

【代码实现】

* C++ 版

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
	char data;
	struct node *lchild, *rchild;
}*BitTree;

//先序遍历的方式创建二叉树
void CreatBitTree (BitTree &T) {
	char c;
	cin >> c;
	if (c == '0') {
		T = NULL;
	} else {
		T = new node;
		T->data = c;
		CreatBitTree(T->lchild);
		CreatBitTree(T->rchild); 
	}
}

//将二叉树按照先序输出
void PreOrderTraverse(BitTree T) {
	if (T != NULL) {
		cout << T->data << ' ';
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
} 

//将二叉树按照中序输出
void InOrderTraverse(BitTree T) {
	if (T != NULL) {
		InOrderTraverse(T->lchild);
		cout << T->data << ' ';
		InOrderTraverse(T->rchild);
	}
}

//将二叉树按照后序输出
void PostOrderTraverse(BitTree T) {
	if (T != NULL) {
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		cout << T->data << ' ';
	}
}

//二叉树的叶子节点个数
int Leaf(BitTree T) {
	if (T == NULL) {
		return 0;
	} 
	if (T->lchild == NULL && T->rchild == NULL) {
		return 1;
	}
	return Leaf(T->lchild) + Leaf(T->rchild);
} 

//二叉树的深度 
int Deepth(BitTree T) {
	if (T == NULL) {
		return 0;
	}
	int x = Deepth(T->lchild);
	int y = Deepth(T->rchild);
	return max(x,y) + 1;
} 

int main() {
	BitTree T;
	CreatBitTree(T);
	PreOrderTraverse(T);
	cout << endl;
	InOrderTraverse(T);
	cout << endl;
	PostOrderTraverse(T);
	cout << endl;
	cout << Leaf(T) << endl;
	return 0;
}
```

##### 根据后序和中序确定二叉树

![image-20200508122049131](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200508122051.png)

如何通过后序遍历序列和中序遍历序列来确定一棵二叉树？？

- 根据后序遍历序列最后一个结点确定根结点；
- 根据根结点在中序遍历序列中分割出左右两个子序列；
- 对左子树和右子树分别递归使用相同的方式继续分解；

```c
//用后序和中序序列建立二叉树
BiTree createByPostAndMid(int len, char *post, char *mid) {
	BiTree root;
	int i;
	if (len == 0) {
		return NULL;
	} 
	root = (BiTree)malloc(sizeof(BiNode));
	root->data = post[len - 1];
	for (i = 0; i < len; i++) {//寻找根节点 
		if (post[len - 1] == mid[i]) {
			break;
		}
	}
	root->lchild = createByPostAndMid(i, post, mid);//建立左子树
	root->rchild = createByPostAndMid(len - i - 1, post + i, mid + i + 1);//建立右子树
	return root; 
} 
```

##### 根据前序和中序确定二叉树

如何通过前序遍历序列和中序遍历序列来确定一棵二叉树？？

- 根据前序遍历序列第一个结点确定根结点；
- 根据根结点在中序遍历序列中分割出左右两个子序列；
- 对左子树和右子树分别递归使用相同的方式继续分解；

```c
//用前序和中序序列建立二叉树
BiTree createByPreAndMid(int len, char *pre, char *mid) {
	BiTree root;
	int i;
	if (len == 0) {
		return NULL;
	} 
	root = (BiTree)malloc(sizeof(BiNode));
	root->data = pre[0];
	for (i = 0; i < len; i++) {//寻找根节点 
		if (pre[0] == mid[i]) {
			break;
		}
	} 
	root->lchild = createByPreAndMid(i, pre + 1, mid);//建立左子树
	root->rchild = createByPreAndMid(len - i - 1, pre + i + 1, mid + i + 1);//建立右子树
	return root; 
} 
```

> 完整版代码：

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BTNode {
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
} BiNode, *BiTree;

//用前序和中序序列建立二叉树
BiTree createByPreAndMid(int len, char *pre, char *mid) {
	BiTree root;
	int i;
	if (len == 0) {
		return NULL;
	} 
	root = (BiTree)malloc(sizeof(BiNode));
	root->data = pre[0];
	for (i = 0; i < len; i++) {//寻找根节点 
		if (pre[0] == mid[i]) {
			break;
		}
	} 
	root->lchild = createByPreAndMid(i, pre + 1, mid);//建立左子树
	root->rchild = createByPreAndMid(len - i - 1, pre + i + 1, mid + i + 1);//建立右子树
	return root; 
} 

//用后序和中序序列建立二叉树
BiTree createByPostAndMid(int len, char *post, char *mid) {
	BiTree root;
	int i;
	if (len == 0) {
		return NULL;
	} 
	root = (BiTree)malloc(sizeof(BiNode));
	root->data = post[len - 1];
	for (i = 0; i < len; i++) {//寻找根节点 
		if (post[len - 1] == mid[i]) {
			break;
		}
	}
	root->lchild = createByPostAndMid(i, post, mid);//建立左子树
	root->rchild = createByPostAndMid(len - i - 1, post + i, mid + i + 1);//建立右子树
	return root; 
} 

//前序遍历
void preOrder(BiTree root) {
	if (root) {
		printf("%c", root->data);
		preOrder(root->lchild);
		preOrder(root->rchild);
	}
} 

//中序遍历
void midOrder(BiTree root) {
	if (root) {
		midOrder(root->lchild);
		printf("%c", root->data);
		midOrder(root->rchild);
	}
} 

//后序遍历
void postOrder(BiTree root) {
	if (root) {
		postOrder(root->lchild);
		postOrder(root->rchild);
		printf("%c", root->data);
	}
} 

int main()
{
	BiTree root = NULL;
	int len;
	char *post = "DFEBGIHCA";
	char *pre = "ABDEFCGHI";
	char *mid = "DBFEAGCHI";
	len = strlen(post);
	//通过前序和中序创建二叉树
	root = createByPreAndMid(len, pre, mid); 
	//通过中序和后序创建二叉树
	//root = createByPostAndMid(len, post, mid);
	printf("前序遍历：\n");
	preOrder(root);
	printf("\n中序遍历：\n");
	midOrder(root);
	printf("\n后序遍历：\n");
	postOrder(root);
	system("pause"); 
	return 0;
}
```



### 二叉排序树

二叉排序树（Binary Sort Tree），又称为二叉查找树（Binary Search Tree），亦称二叉搜索树。

> 二叉排序树有两种考法：

* 考查定义，根据定义建立二叉排序树，然后输出其先序、中序和后序。
* 考查二叉排序树的应用，例如多次查找。



> 定义：

一棵空树，或者是具有下列性质的二叉树：

* （1）若左子树不空，则左子树上所有结点的值均小于它的根结点的值；
* （2）若右子树不空，则右子树上所有结点的值均大于它的根结点的值；
* （3）左、右子树也分别为二叉排序树；
* （4）没有键值相等的结点。

#### 二叉排序树的建立和遍历

【题目描述】

输入一系列整数，建立二叉排序树，并进行前序，中序，后序遍历。

【输入描述】

输入第一行包括一个整数 n ( 1 <= n <= 100 )。接下来的一行包括 n 个整数。

【输出描述】

可能有多组测试数据，对于每组数据，将题目所给数据建立一个二叉排序树，并对二叉排序树进行前序、中序和后序遍历。每种遍历结果输出一行。每行最后一个数据之后有一个空格。输入中可能有重复元素，但是输出的二叉树遍历序列中重复元素不用输出。

【输入样例】

5

1 6 5 9 8

【输出样例】

1 6 5 9 8

1 5 6 8 9

5 8 9 6 1

【代码实现】

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
	int data;
	struct node *lchild, *rchild;
}*BitTree;

//将元素插入到二叉排序树中
void InsertBitTree(BitTree &T, int x) {
	if (T == NULL) {
		T = new node;
		T->data = x;
		T->lchild = NULL;
		T->rchild = NULL;
	}
	if (x < T->data) {
		InsertBitTree(T->lchild, x);
	} else if (x > T->data) {
		InsertBitTree(T->rchild, x);
	}
} 
//将二叉树按照先序输出
void PreOrderTraverse(BitTree T) {
	if (T != NULL) {
		cout << T->data << ' ';
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
} 
//将二叉树按照中序输出
void InOrderTraverse(BitTree T) {
	if (T != NULL) {
		InOrderTraverse(T->lchild);
		cout << T->data << ' ';
		InOrderTraverse(T->rchild);
	}
}
//将二叉树按照后序输出
void PostOrderTraverse(BitTree T) {
	if (T != NULL) {
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		cout << T->data << ' ';
	}
}
int main() {
	int n, x;
	while (cin >> n) {
		BitTree T = NULL;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			InsertBitTree(T, x);
		}
		PreOrderTraverse(T);
		cout << endl;
		InOrderTraverse(T);
		cout << endl;
		PostOrderTraverse(T);
		cout << endl;
	}
	return 0;
}
```



### Hash 算法（散列问题）

散列（Hash）：由关键字值，通过某函数（Hash 函数）直接计算出它在表中的位置

> H(key) = address

注意：哈希算法在考研机试中的题目几乎都可以用 map 来解决。

使用举例：在字符串中找指定字符并输出

```c
#include <stdio.h>
#define maxSize 10001

int main() {
	char s[maxSize];
	int count[200] = {};
	char dic[] = "PATest";
	gets(s);
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		++count[(int)s[i]];
	}
	while (1) {
		int flag = 0;
		for (i = 0; dic[i] != '\0'; i++) {
			if (count[(int)dic[i]] > 0) {
				printf("%c", dic[i]);
				count[(int)dic[i]]--;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	return 0;
} 
```

> 这是以空间换时间的方法



哈希的几种考法如下

* （1）输入 N 个数，统计某个数出现的次数。
  * 解：使用辅助数组进行标记
* （2）输入 N 个数，进行排序或求前 K 小的数，其中数值的区间范围小。
  * 解：使用辅助数组进行标记，如果值为负数或很大，将区间进行平移即可
* （3）有多段区间进行覆盖，问其中某个点被覆盖到的次数。
  * 解：使用辅助数组进行标记，直接遍历每一段区间累加上去。上面这几种勉强可列为哈希算法的范围，其实都是对数组的一种应用技巧，使用数组下标对应存储的值，数组存的值是出现的次数。
* (4）给一个等式 a + b + c + d = 0，其中 a, b, c, d的范围是 [ - 50, 50] ，求 a, b, c, d 使得等式成立的值。
  * 解：如果直接暴力枚举，那么复杂度是O(n ^ 4 )，我们可以将等式移项变成 a + b = - ( c + d )，我们分别枚举 a + b 的值存起来，- ( c + d )的值存起来，复杂度是 O ( n ^ 2 )，那么问题就转化成了，比较两个数组中相同的值的个数。可以用二分查找的方法，也可以用map，还可以自己构造哈希函数，最终的时间复杂度是 O (n ^2 log (n ^ 2 ) )。
* （5）输入 n 个字符串，问相同的字符串的个数
  * 解：很典型的字符串哈希，建议用 map，基本都能解决。



### 前缀树

定义

又称单词查找树，Trie 树，是一种树形结构，是一种哈希树的变种。

典型应用是用于统计，排序和保存大量的字符串（但不仅限于字符串），所以经常被搜索引擎系统用于文本词频统计。

它的优点是：利用字符串的公共前缀来减少查询时间，最大限度地减少无谓的字符串比较，查询效率比哈希树高。

考点分析

* （1）n 个字符串中找到某个字符串是否存在或出现了几次。
  * 解法：数据小直接顺序查找比较，数据大的时候可以直接用 map 来查找，如果只能用 C 语言，那么就需要用前缀树来解决。
* （2）n 个字符串中查找包含某个前缀的的字符串的个数。
  * 解法：这是非常典型的应用方法，建立前缀树即可知道每个前缀的单词个数。

#### 前缀字符串

【题目描述】

如果一个字符串 s1 是由另一个字符串 s2 的前面部分连续字符组成的，那么我们就说 s1 就是 s2 的前缀。比如 “ac” 是 “acm” 的前缀，“abcd” 是 “abcddfasf” 的前缀，特别的 “kdfa” 是 “kdfa” 的前缀。现在给你一些字符串，你的任务就是从这些字符串中找出一些字符串放到一个集合中，使得这个集合中任意一个字符串不是其他字符串的前缀，并且要使集合里的字符串尽可能的多。输出这个集合中字符串的个数。

【输入描述】

有多组测试数据。每组测试数据以一个整数 n 开头，随后有 n 个字符串。当 n = 0 时表示输入结束。0 < n < 100，字符串长度不大于 20。

【输出描述】

每组测试数据输出一个整数，即所求的最大值。每组数据占一行。

【输入样例】

6

acm

yuou

yuoufsdaf

acmmmdf

acmm

fdsf

0

【输出样例】

3

【题目分析】

其实这个题就是求前缀树的叶子结点的个数，因为只有是叶子结点才不会是其他字符串的前缀。

【代码实现】

```cpp
#include <bits/stdc++.h>
using namespace std;

const int MAX_NUMBER = 26;//26个字母，若包含大小写，改成52
typedef struct TrieNode {
	int count;//结点出现次数 
	struct TrieNode *next[MAX_NUMBER];
}Trie;
Trie root;
//初始化
void InitTrie() {
	for (int i = 0; i < MAX_NUMBER; i++) {
		root.next[i] = NULL;
	}
} 
//创建Trie树
void CreateTrie(char *str) {
	int len = strlen(str);
	Trie *p = &root, *q;
	for (int i = 0; i < len; i++) {
		int k = str[i] - 'a';
		if (p->next[k] == NULL) {
			q = (Trie *)malloc(sizeof(root));
			q->count = 1;
			for (int j = 0; j < MAX_NUMBER; j++) {
				q->next[j] = NULL;
			}
			p->next[k] = q;
			p = p->next[k];
		} else {
			p->next[k]->count++;
			p = p->next[k];
		}
	}
} 
//统计Trie树中叶子结点的个数
int sum;
void CountTrie() {
	queue<Trie *> q;
	q.push(&root);
	while (!q.empty()) {
		Trie *p = q.front();
		q.pop();
		int son = 0;
		for (int i = 0; i < MAX_NUMBER; i++) {
			int k = i;
			if (p->next[k] == NULL) {
				son++;
			} else {
				q.push(p->next[k]);
			}
		}
		if (son == MAX_NUMBER) {
			sum += 1;
		}
	}
} 

int main() {
	int n;
	while(cin >> n) {
		if (n == 0) {
			break;
		}
		char str[20];
		sum = 0;
		InitTrie();
		for (int i = 0; i < n; i++) {
			scanf("%s", str);
			CreateTrie(str);
		}
		CountTrie();
		printf("%d\n", sum);
	}
	return 0;
}
```

#### 通用模板

* 静态数组方式实现：

```cpp
#include <bits/stdc++.h> 
using namespace std;

const int MAX_NUMBER = 1000000 + 10;
int trie[MAX_NUMBER][26] = {0};
int num[MAX_NUMBER] = {0};
int pos = 1;
void InsertTrie(char word[]) {
	int c = 0;
	for (int i = 0; word[i]; i++) {
		int k = word[i] - 'a';
		if (trie[c][k] == 0) {
			trie[c][k] = pos++;
			c = trie[c][k];
			num[c]++;
		}
	}
}
int FindTrie(char word[]) {
	int c = 0;
	for (int i = 0; word[i]; i++) {
		int k  = word[i] - 'a';
		if (trie[c][k] == 0) {
			return 0;
		}		
		c = trie[c][k];	
	} 
	return num[c];
}
int main() {
	char str[15] = {0};
	while (gets(str) && str[0]) {
		InsertTrie(str);
	}
	while (gets(str)) {
		printf("%d\n", FindTrie(str));
	}
	return 0;
}
```



* 链式存储方式实现：

```cpp
#include <bits/stdc++.h>
using namespace std;

const int MAX_NUMBER = 26;//26个字母，若包含大小写，改成52
typedef struct TrieNode {
	int count;//结点出现次数 
	struct TrieNode *next[MAX_NUMBER];
}Trie;
Trie root;
//初始化
void InitTrie() {
	for (int i = 0; i < MAX_NUMBER; i++) {
		root.next[i] = NULL;
	}
} 
//创建Trie树
void CreateTrie(char *str) {
	int len = strlen(str);
	Trie *p = &root, *q;
	for (int i = 0; i < len; i++) {
		int k = str[i] - 'a';
		if (p->next[k] == NULL) {
			q = (Trie *)malloc(sizeof(root));
			q->count = 1;
			for (int j = 0; j < MAX_NUMBER; j++) {
				q->next[j] = NULL;
			}
			p->next[k] = q;
			p = p->next[k];
		} else {
			p->next[k]->count++;
			p = p->next[k];
		}
	}
} 
int FindTrie(char *str) {
	int len = strlen(str);
	Trie *p = &root;
	for (int i = 0; i < len; i++) {
		int k = str[i] - 'a';
		if (p->next[k] == NULL) {
			return 0;
		}
		p = p->next[k];
	}
	return p->count;
}

int main() {
	char str[15];
	InitTrie();
	while (gets(str) && str[0]) {
		CreateTrie(str);
	}
	while (gets(str)) {
		printf("%d\n", FindTrie(str));
	}
	return 0;
}
```



## 第五章 搜索

### 暴力枚举

> 定义

枚举算法是在分析问题时，逐个列举出所有可能情况，然后根据条件判断此答案是否合适，合适就保留，不合适就丢弃，最后得出一个结论。主要利用计算机运算速度快、精确度高的特点，对要解决问题的所有可能情况，一个不漏地进行检验，从中找出符合要求的答案，因此枚举法是通过牺牲时间来换区答案的全面性。

> 举例说明

【题目】

```
有一个整数ABCD，一定是四位数，A不能为0，其中ABCD*4=DCBA。
其中A、B、C、D都是一个数字，求ABCD是多少?
```

【代码实现】

* C 语言版

```c
#include <stdio.h>

int main(){
	int A, B, C, D;
	for(A = 0; A <= 9; A++){
		for(B = 0; B <= 9; B++){
			for(C = 0; C <= 9; C++){
				for(D = 0; D <= 9; D++){
					if(A == 0){
						continue;
					}
					int s1 = A * 1000 + B * 100 + C * 10 + D;
					int s2 = D * 1000 + C * 100 + B * 10 + A;
					if(s1 * 4 == s2){
						printf("%d\n", s1);
					}
				}	
			}	
		}
	}
	return 0; 
} 
```

!> 这种方法就是枚举，优点是直接了当，缺点是复杂度高。我们可以做一个最简单优化，看最高位可知，D >= A * 4，因此 A 只能取值 1 和 2

### 广度优先搜索（BFS）

广度优先搜索其实简单的理解就是从起点开始一层一层的扩散出去，要实现这个一层一层的扩散就要用到队列的先进先出的思想，所以一般我们都用队列来实现广度优先搜索算法。







### 递归及其应用





### 深度优先搜索（DFS）





### 搜索剪枝技巧





## 第六章 图论



### 并查集

并查集代码是通用的，背会就好。

```c
#define size 1000

int Tree[size];

void init(){
    for (int i = 1; i <= n; i++) {
        Tree[i] = -1;//归位
    }
}

int findRoot(int x) {
    if (Tree[x] == -1) {//如果找到了根元素
        return x;//返回的是当前的跟元素的数值，而不是-1
    } else {
        int temp = findRoot(Tree[x]);//找到根的值
        Tree[x] = temp;//把当前计算的这个值绑到根上
        return temp;
    }
}

void union(int x, int y){
    int aRoot = findRoot(a);//找到根的值
    int bRoot = findRoot(b);
    if (aRoot != bRoot) {//不在同一棵树上
        Tree[aRoot] = bRoot;//添加到一起
    }
}
```

#### 畅通工程

【题目】

```
题目描述：
某省调查城镇交通状况，得到现有城镇道路统计表，表中列出了每条道路直接连通的城镇。
省政府“畅通工程”的目标是使全省任何两个城镇间都可以实现交通
（但不一定有直接的道路相连，只要互相间接通过道路可达即可）。
问最少还需要建设多少条道路？

输入：
测试输入包含若干测试用例。
每个测试用例的第1行给出两个正整数，分别是城镇数目N ( < 1000 )和道路数目M；
随后的M行对应M条道路，每行给出一对正整数，分别是该条道路直接连通的两个城镇的编号。
为简单起见，城镇从1到N编号。
注意:两个城市之间可以有多条道路相通,也就是说
3 3
1 2
1 2
2 1
这种输入也是合法的
当N为0时，输入结束，该用例不被处理。

输出：
对每个测试用例，在1行里输出最少还需要建设的道路数目。

样例输入：
4 2
1 3
4 3
3 3
1 2
1 3
2 3
5 2
1 2
3 5
999 0
0

样例输出：
1
0
2
998
```

【代码实现】

```c
#include<stdio.h>

#define size 1000
int Tree[size];

int findRoot(int x) {
    if (Tree[x] == -1) {//如果找到了根元素
        return x;//返回的是当前的跟元素的数值，而不是-1
    } else {
        int temp = findRoot(Tree[x]);//找到根的值
        Tree[x] = temp;//把当前计算的这个值绑到根上
        return temp;
    }
}

int main() {
    int m, n;
    while (scanf("%d", &n) != EOF && n != 0) {
        scanf("%d", &m);
        for (int i = 1; i <= n; i++) {
            Tree[i] = -1;//归位
        }

        while (m-- != 0) {
            int a, b;
            scanf("%d%d", &a, &b);
            int aRoot = findRoot(a);//找到根的值
            int bRoot = findRoot(b);
            if (aRoot != bRoot) {//不在同一棵树上
                Tree[aRoot] = bRoot;//添加到一起
            }
        }
        int answer = 0;
        for (int i = 1; i <= n; i++) {
            if (Tree[i] == -1) {//单独的树还有answer棵
                answer++;
            }
        }
        printf("%d\n", answer - 1);//只需answer-1就可以把这些树连起来
    }
    return 0;
}
```



### 最小生成树（MST）

Kruskal算法：

* 初始时所有的节属于孤立的集合
* 按照边的权重递增遍历所有的边，若遍到的边两个顶点仍属于不同的集合，则确定该边为最小生成树上的一条边，并将这两个顶点分数的集合合并。
* 遍历完所有的边后，原图上所有节点属于同一集合则被选取的边和原图中所有节点构成最小生成树；否则原图不连通，最小生成树不存在。

```cpp
#include<stdio.h>
#include<algorithm>

using namespace std;
#define N 101
int Tree[N];

struct Edge {
    int a, b;
    int cost;

    bool operator<(const Edge &A) const {
        return cost < A.cost;
    }
} edge[6000];

int findRoot(int x) {
    if (Tree[x] == -1) {
        return x;
    } else {
        int temp = findRoot(Tree[x]);
        Tree[x] = temp;
        return temp;
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF && n != 0) {
        int m = n * (n - 1) / 2;
        for (int i = 1; i <= m; i++) {//等号
            scanf("%d%d%d", &edge[i].a,
                  &edge[i].b, &edge[i].cost);
        }
        sort(edge + 1, edge + m + 1);
        for (int i = 1; i <= N; i++) {//等号
            Tree[i] = -1;
        }
        int count = 0;
        for (int i = 1; i <= m; i++) {//等号
            int aRoot = findRoot(edge[i].a);
            int bRoot = findRoot(edge[i].b);
            if (aRoot != bRoot) {
                Tree[aRoot] = bRoot;
                count += edge[i].cost;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
```

#### 畅通工程

【题目】

```
题目描述：
某省调查乡村交通状况，得到的统计表中列出了任意两村庄间的距离。
省政府“畅通工程”的目标是使全省任何两个村庄间都可以实现公路交通
（但不一定有直接的公路相连，只要能间接通过公路可达即可），
并要求铺设的公路总长度为最小。请计算最小的公路总长度。

输入：
测试输入包含若干测试用例。每个测试用例的第1行给出村庄数目N ( < 100 )；
随后的N(N-1)/2行对应村庄间的距离，每行给出一对正整数，分别是两个村庄的编号，以及此两村庄间的距离。
为简单起见，村庄从1到N编号。
当N为0时，输入结束，该用例不被处理。

输出：
对每个测试用例，在1行里输出最小的公路总长度。

样例输入：
3
1 2 1
1 3 2
2 3 4
4
1 2 1
1 3 4
1 4 1
2 3 3
2 4 2
3 4 5
0

样例输出：
3
5
```

【代码实现】

```cpp
#include<stdio.h>
#include<algorithm>

using namespace std;
#define N 101
int Tree[N];

struct Edge {
    int a, b;
    int cost;

    bool operator<(const Edge &A) const {
        return cost < A.cost;
    }
} edge[6000];

int findRoot(int x) {
    if (Tree[x] == -1) {
        return x;
    } else {
        int temp = findRoot(Tree[x]);
        Tree[x] = temp;
        return temp;
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF && n != 0) {
        int m = n * (n - 1) / 2;
        for (int i = 1; i <= m; i++) {//等号
            scanf("%d%d%d", &edge[i].a,
                  &edge[i].b, &edge[i].cost);
        }
        sort(edge + 1, edge + m + 1);
        for (int i = 1; i <= N; i++) {//等号
            Tree[i] = -1;
        }
        int count = 0;
        for (int i = 1; i <= m; i++) {//等号
            int aRoot = findRoot(edge[i].a);
            int bRoot = findRoot(edge[i].b);
            if (aRoot != bRoot) {
                Tree[aRoot] = bRoot;
                count += edge[i].cost;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
```





## 第七章 动态规划



## 参考资料

[1] 率辉 - 天勤计算机复试上机辅导（:seedling: ）

[2] 王道 - 王道计算机考研复试机试课程（:seedling: ）

## 赞赏作者

