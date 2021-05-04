# 作业3：C&C++函数实训

## 第1题：登月纸桥

### 任务描述

本关任务：编写一个函数，计算需要把纸折叠多少次（假设纸张足够大，可以无限次折叠），其厚度才能搭建一座登月纸桥，考虑到将来需要到更远的星球，所以函数需要根据具体距离计算纸张折叠的次数并返回。

### 编程要求

编写一个函数，给定一个距离和纸张的厚度（数据由平台提供，你需要获取后使用），计算需要把这张纸折叠多少次，其厚度才能搭建一座登月纸桥。考虑到将来需要到更远的星球，函数需要根据具体距离计算纸张折叠的次数并返回。

已知：月球离地球最近距离（近地点）为363300千米，最远距离（远地点）为405500千米，一张纸的厚度一般为0.088到0.114毫米。

### 测试用例

测试输入：`363300  0.088` 

预期输出：`需要折叠42次`

测试输入：`405500  0.088` 

预期输出：`需要折叠43次`

### 实现代码

```cpp
#include <iostream>
using namespace std;

// foldTimes-计算建纸桥的折叠次数
// 参数：dis-星际距离（千米），thick-纸的厚度（毫米）
// 返回值：建桥需要折叠的次数
int foldTimes(double dis, double thick);

int main()
{
    double dis, thick;
    cin >> dis >> thick;
    cout << "需要折叠" << foldTimes(dis,thick) << "次" << endl;
    return 0;
}

int foldTimes(double dis, double thick)
{
    // 请在这里补充代码，实现函数foldTimes
    /********** Begin *********/
    
    int i;
    dis *= 1000;
    thick *= 0.001;
    for(i = 0; dis > thick; i++){
            thick *= 2;
    }
    return i;
    
    /********** End **********/
}
```



## 第2题：几点几分了？

### 任务描述

本关任务：编写一个函数 whatTime，该函数通过秒表显示的秒数，计算当前的时间（几点几分几秒），计算得到的时间通过参数返回。

### 编程要求

编写函数 whatTime，该函数通过秒表显示的秒数（该数据由平台提供，你需要获取后使用），计算当前的时间（几点几分几秒），计算得到的时间通过参数返回。

### 测试用例

测试输入：`23456` 

预期输出：`6:30:56`

测试输入：`34567` 

预期输出：`9:36:7`

### 实现代码

```cpp
#include <iostream>
using namespace std;

void whatTime(int secs, int &h, int &m, int &s)
{
    // 请在这里补充代码，设计并实现函数whatTime,使main函数中的函数调用正确
    /********** Begin *********/
    
    h = secs / 3600;
    m = secs % 3600 / 60;
    s = secs % 3600 % 60;
    
    /********** End **********/
}

int main()
{
    int secs;     // secs秒表上的秒数   
    int h, m, s;     // 当前时间:h-小时，m-分，s-秒
    cin >> secs;     // 输入秒表上的秒数
    whatTime(secs,h,m,s);     // 计算当前时间
    cout << h << ":" << m << ":" << s << endl;     // 输出当前时间
    return 0;
}
```



## 第3题：这天星期几?

### 任务描述

本关任务：编写函数 whatDay，计算某年某月的1号是星期几并返回。

### 编程要求

计算输入数据年月份的1号是星期几并返回（周一到周日分别返回整数1到7）。

其中该函数的参数为输入的两个整数数据：年和月。

### 测试用例

测试输入：`2016 1` 

预期输出：`2016年1月1日是星期5`

测试输入：`2017 7` 

预期输出：`2017年7月1日是星期6`

### 实现代码

```cpp
#include <iostream>
using namespace std;

// 函数leapYear
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay：计算某年某月某日是星期几
// 参数：year-年，month-月
// 返回值：--7分别表示星期一到星期日
int whatDay(int year, int month)
{
    // 请在这里补充代码，实现函数whatDay
    /********** Begin *********/
    
    int iWeek = 0;
    int y = 0, c = 0, m = 0;
    if ( month == 1 || month == 2 )
    {
        c = ( year - 1 ) / 100;
        y = ( year - 1 ) % 100;
        m = month + 12;
    }
    else
    {
        c = year / 100;
        y = year % 100;
        m = month;
    }
    iWeek = y + y / 4 + c / 4 - 2 * c + 26 * ( m + 1 ) / 10;    //蔡勒公式
    iWeek = iWeek >= 0 ? ( iWeek % 7 ) : ( iWeek % 7 + 7 );    //iWeek为负时取模
    if ( iWeek == 0 )    //星期日不作为一周的第一天
    {
        iWeek = 7;
    }

    return iWeek;

    /********** End **********/
}

int main()
{
    int y, m, xq;     // 年、月、星期几
    cin >> y >> m;     // 输入年月
    xq = whatDay(y,m);     // 计算星期几
    cout << y << "年" << m << "月1日是星期";     // 输出星期
    if(xq == 7)
        cout << "日" << endl;
    else
        cout << xq << endl;
    return 0;
}
```



## 第4题：打印日历

### 任务描述

本关任务：根据输入的年份和月份来输出该年月的日历。

### 编程要求

根据输入的年月（函数printMonth 的两个参数）打印该年该月的日历。日历输出格式要求如下：

1. 每个汉字（一、二、…、日）占四个字节，右对齐，由于汉字显示本身就占2个字节，所以只需要在汉字前面多输出两个空格就好了；
2. 每个日期数字占4个字节，也是右对齐，这样能使输出的日历上下对齐。

### 测试用例

![image-20210404191453729](https://gitee.com/wugenqiang/images/raw/master/02/image-20210404191453729.png)

### 实现代码

```cpp
// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

// 函数printMonth：按要求的格式打印某年某月的日历
// 参数：year-年，month-月
// 返回值：无
void printMonth(int year, int month);

// leapYear：判断闰年
// 参数：y-年
// 返回值：1-是闰年，0-不是闰年
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay:计算某年某月的1号是星期几
// 参数：year-年，month-月
// 返回值：1到7--星期1到星期日
int whatDay(int year, int month)
{
    // 1年月日是星期一
    int w = 1;
    int i;

    // 1到year-1都是全年
    for(i = 1; i < year; i++)
    {
        if(leapYear(i))
            w += 366;
        else
            w += 365;
    }
    switch(month)
    {
    case 12: // 加月的
        w += 30;
    case 11: // 加月的
        w += 31;
    case 10: // 加月的
        w += 30;
    case 9:  // 加月的
        w += 31;
    case 8:  // 加月的
        w += 31;
    case 7:  // 加月的
        w += 30;
    case 6:  // 加月的
        w += 31;
    case 5:  // 加月的
        w += 30;
    case 4:  // 加月的
        w += 31;
    case 3:  // 加月的
        if(leapYear(year))
            w += 29;
        else
            w += 28;
    case 2:  // 加月的天
        w += 31;
    case 1:  // 1月不加了
        ;
    }

    // 得到-6，其中为星期天
    w = w % 7;

    // 调整星期天
    if(w == 0)
        w = 7;
    return w;
}

// 请在下面补充代码，实现函数printMonth
/*************** Begin **************/

void printMonth(int year, int month){
    int day_month;
    if(month == 12 || month == 10 || month == 8 || month == 7 || month == 5 || month == 3 || month == 1)
        day_month =31;
    if(month == 11 || month == 9 || month == 6 || month == 4)
        day_month = 30;
    if(month == 2){
        if(leapYear(year)){
            day_month =29;
        }
        else day_month = 28;
    }
    printf("  一  二  三  四  五  六  日\n");
    int day = 1;
    int order = whatDay(year, month);
    for(int j=1;j<order;j++){
        printf("%4s"," ");
    }
    for(int i = 0;i<day_month;i++){ //打印所有的日期
        printf("%4d",day);
        day++;
        order++;
        if(order==8){
            printf("\n");
            order=1;
        }

    }
    printf("\n");
}

/*************** End **************/

int main()
{
    // 年、月
    int y, m;

    // 输入年月
    cin >> y >> m;

    // 输出该年月的日历
    printMonth(y,m);

    return 0;
}
```

## 第5题：拆开了输出整数

### 任务描述

本关任务：输入一个正整数，然后把该整数的每一位数字从高位到低位顺序输出，每个数字占一行。

### 编程要求

输入一个正整数（数据由平台提供，已在主函数中获取），将该整数的每一位数字从高位到低位顺序输出，且每个数字占一行。

### 测试用例

测试输入：`132` 预期输出：

```
1
3
2
```

测试输入：`9876` 预期输出：

```
9
8
7
6
```

### 实现代码

```cpp
#include <iostream>
using namespace std;

// 递归函数splitNum：顺序输出n的各位数字，每个数字占一行
// 返回值：无
void splitNum(unsigned int n)
{
    // 请在这里补充代码，实现递归函数splitNum
    /********** Begin *********/
	
    if(n / 10 == 0 ){
        printf("%d\n", n % 10);
    }else{
        splitNum(n / 10);
        printf("%d\n", n % 10);
    }
    
    /********** End **********/
}

int main()
{
    unsigned n;
    cin >> n;     // 输入正整数n
    splitNum(n);     // 调用splitNum函数，顺序输出n的各位数字
    return 0;
}
```



## 第6题：递归求P函数

### 任务描述

本关任务：编写函数 funP，完成数学函数*P*(*n*,*x*)函数的计算，定义如下：

![image-20210404191748236](https://gitee.com/wugenqiang/images/raw/master/02/image-20210404191748236.png)

### 编程要求

要求使用递归求数学函数 P 函数的功能。

### 测试用例

测试输入：`12  2.34` 

预期输出：`P(12, 2.34)=5.1583`

测试输入：`9  9.8` 

预期输出：`P(9, 9.8)=25.8949`

### 实现代码

```cpp
#include <iostream>
using namespace std;

// 函数funP：实现数学函数P函数
// 返回值：返回P(n,x)的值
double funP(int n, double x)
{
    // 请在这里补充代码，实现递归函数funP
    /********** Begin *********/
    
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        return ((2 * n - 1) * funP(n - 1, x) - (n - 1) * funP(n - 2, x)) / n;
    }

    
    /********** End **********/
}

int main()
{
    int n;
    double x;
    cin >> n >> x;     // 输入n、x
    cout << "P("<<n<<", "<<x<<")=" << funP(n,x) << endl;
    return 0;
}
```

