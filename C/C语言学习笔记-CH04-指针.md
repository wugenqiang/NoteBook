## 第四章 指针

指针

* 就是保存地址的变量
* %p 用来输出指针的值、输出地址符，以16进制的形式输出内存地址

```c
int i;
int* p = &i;
int* p,q;
int *p,q;
int *p,*q;
```

指针变量

* 指针变量的值是具有实际值的变量的地址

```c
void f(int *p);

int i=0;
f(&i);
```

* Example 01：

```c
#include <stdio.h>

void f(int *p);
 
int main(){
	int i = 6;
	printf("&i=%p\n",&i);
	f(&i);
	 
	return 0;
}

void f(int *p){
	printf("p=%p\n",p);
}
```

指针应用场景

* 场景一：交换两个变量的值 [ swap(&a,&b) ]

```c
void swap(int *pa,int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
```

* 场景二：求最大、最小值

```c
void minmax(int a[],int len,int *min,int *max){
    int i;
    *min = *max = a[0];
    for(i=1;i<len;i++){
        if(a[i]<*min){
            *min = a[i];
        }
        if(a[i]>*max){
            *max = a[i];
        }
    }
}
```

* 场景三：函数返回运算的状态，结果通过指针返回

```c
#include <stdio.h>

int divide(int a,int b,int *result);
 
int main(){
	int a = 5;
	int b = 2;
	int c;
	if(divide(a,b,&c)){
		printf("%d/%d=%d\n",a,b,c);
	}
	 
	return 0;
}

int divide(int a,int b,int *result){
	int ret = 1;
	if(b == 0){
		ret = 0;
	}else{
		*result = a/b;
	}
}
```

> 注：数组变量是特殊的指针

* 数组变量本身表达地址，所以
  * int a[10];int *p = a;	//  无需用&取地址
  * a == &a[0] 

指针计算

* Example 01：

```c
#include <stdio.h>
 
int main(){
	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
	char *p = &ac[0];
	char *p1 = &ac[5];
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("p1-p=%d\n",p1-p);
	
	return 0;
}
```

> *p++

* *的优先级虽然高，但是没有++高
* 取出p所指的那个数据来，完事之后顺便把p移到下一个位置去

* Example 02：

```c
#include <stdio.h>
 
int main(){
	char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
	char *p = &ac[0];
	int i;
	for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
		printf("%d\n",ac[i]);
	}
	while(*p != -1){
		printf("%d\n",*p++);
	}
	
	return 0;
}
```

>  0地址

* 内存中有0地址，但是不能随便碰
* 0地址用来表示特殊的事情：
  * 返回的指针是无效的
  * 指针没有被真正初始化(先初始化为0)
* NULL是一个预定定义的符号，表示0地址

动态内存分配

> 输入数据

* int * a = (int *)malloc(n * sizeof(int))
* 向 malloc 申请的空间的大小是以字节为单位的，返回的是void * ，需要类型转换为自己需要的类型 

* Example 01：

```c
#include <stdio.h>
#include <stdlib.h> 

int main(){
	int number;
	int *a;
	int i;
	printf("输入数量："); 
	scanf("%d",&number);
	a = (int *)malloc(number*sizeof(int));
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--){
		printf("%d ",a[i]);
	}
    free(a);
    
	return 0;
}
```

