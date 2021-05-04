## 第六章 结构类型

### 6.1 枚举

> 用枚举优化常量符号化，变得更加方便

* enum 枚举类型名字{名字0,...,名字n};

* Example 01：

```c
#include <stdio.h> 

enum color{
	red,
	yellow,
	green
};

void f(enum color c);

int main(){
	enum color t = red;
	scanf("%d",&t);
	f(t);
	
	return 0;
}

void f(enum color c){
	printf("%d\n",c);
}
```

> 枚举量

* 声明枚举量的时候可以指定值

* ```c
  enum color{
  	red = 1,
  	yellow,
  	green = 5
  };
  ```

> 枚举只是int
>
> 实际上很少用



### 6.2 结构体

> 声明结构类型

* Example 01：

```c
#include <stdio.h> 

struct date{
		int month;
		int day;
		int year;
	};
	
int main(){
	struct date today;
	today.month = 03;
	today.day = 05;
	today.year = 2020;
	printf("%i-%i-%i",today.year,today.month,today.day);
	//%i表示有符号十进制整数 
	return 0;
}
```

> 声明结构的形式

* 形式一：

```c
struct point{
    int x;
    int y;
};
struct point p1,p2;	// p1和p2都是point里面有x和y的值

```

* 形式二：

```c
struct{
    int x;
    int y;
}p1,p2;// p1和p2都是一种无名结构，里面有x和y
```

* 形式三：(推荐)

```c
struct point{
    int x;
    int y;
}p1,p2;
// p1和p2都是point里面有x和y的值
```

> 结构变量

```c
struct date today;
today.month = 03;
today.day = 05;
today.year = 2020;
```

![image-20200306092007788](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185249.png)

> 结构体的初始化

```c
struct date today = {03,05,2020};
```

> 结构成员

```c
today.day
```

> 结构运算

* 赋值、取地址、传递函数参数

* p1 = (struct point){5,10};  //相当于p1.x = 5,p1.y = 10;
* p1 = p2;  //相当于p1.x = p2.x; p1.y = p2.y;

![image-20200306092110362](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185253.png)

> 结构可作为函数参数

```c
bool isLeap(struct date d);
```

> 结构指针作为参数

* 指向结构的指针

```c
struct date{
    int month;
    int day;
    int year;
}myday;
struct date *p = &myday;
(*p).month = 12;
p -> month = 12;
```

`用->表示指针所指的结构变量中的成员`

> 结构数组

```c
struct date dates[100];
struct date dates[] = {{4,5,2005},{2,4,2005}};
```

> 结构中的结构

```c
struct dateAndTime{
    struct date sdate;
    struct time stime;
}
```

* Example 01：

![image-20200306092200846](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185259.png)



![image-20200306092243437](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185303.png)

>  Typedef

* typedef 自定义数据类型

![image-20200306092323697](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185307.png)

* ```c
  typedef struct{
      int month;
      int day;
      int year;
  }Date;
  ```

![image-20200305211317278](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185310.png)



### 6.3 联合体

```c
union AnElt{
    int i;
    char c;
}elt1,elt2;
elt1.i = 4;
elt2.c = 'a';
```

* sizeof(union ...) = 	//  sizeof (每个成员) 的最大值

```c
#include <stdio.h> 

typedef union{
	int i;
	char ch[sizeof(int)];
}Data;

int main(){
	Data data;
	int i;
	data.i = 1234;
	for(i=0;i<sizeof(int);i++){
		//对于%02hhx，hhx已经以一个字节打印了，加上02限制，不够两位的补成两位。 
		printf("%02hhX",data.ch[i]);
	}
	printf("\n");
	
	return 0;
}
```

