# 堆的基本操作（C 语言版）

> 复习堆的基本操作的C语言实现，以小顶堆为例。因为大顶堆和小顶堆实现的方式差不多，会小顶堆，大顶堆也就会了吧哈哈！

## 堆的介绍

### 堆的定义

> 堆（Heap）就是用数组实现的二叉树，所以它没有使用父指针或者子指针。堆根据“堆属性”来排序，“堆属性”决定了树中节点的位置。常见的堆有二叉堆、左倾堆、斜堆、二项堆、斐波那契堆等等。

堆的常用方法：

* 构建优先队列
* 支持堆排序
* 快速找出一个集合中的最小值（或者最大值）

### 堆的属性

堆分为两种：最大堆和最小堆，两者的差别在于节点的排序方式。

最大堆（大顶堆）：① 根的值大于左右子树的值  ② 子树也是最大堆

最小堆（小顶堆）：① 根的值小于左右子树的值  ② 子树也是最小堆

![最大堆](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200428183029.png)

这是一个最大堆，，因为每一个父节点的值都比其子节点要大。`10` 比 `7` 和 `2` 都大。`7` 比 `5` 和 `1`都大。

> 堆属性非常的有用，因为堆常常被当做优先队列使用，因为可以快速的访问到“最重要”的元素。

我们准备将上面的例子中的树这样存储：

```c
[ 10, 7, 2, 5, 1 ]
```

> 注意：堆有两个性质

 * 结构性：堆必须是一棵完全二叉树
 * 堆序性：堆的父节点要么都大于子节点，要么小于子节点，前者叫大顶堆，后者叫小顶堆；

> 由此，堆可以用一个数组来表示，并有如下性质：

 * 对于任意 i 位置的元素，他的左子节点在 2 * i 位置，右子节点在 2 * i + 1位置；
 * 2.他的父节点（假如有）在i/2位置

下面以小顶堆的方式对上图进行处理：

## 小顶堆的实现方式(一)

### 堆的结构体

```c
//创建一个小顶堆,size代表的是实际元素的个数
typedef struct MinHeap {
    int size;
    int data[MAX_SIZE];
} heap;
```

### 初始化堆

```c
//初始化：数组0位置要空着
void init(heap* h ) {
    h->size = 0;
}
```



### 插入元素

```c
//插入元素x 
int insert(heap* h, int x) {
	int flag = 1;
    if (h->size == MAX_SIZE) {
        printf("heap is full!");
        flag = 0;
    }
    int i;
    h->size++;
    for (i = h->size; i >= 1; i /= 2) {
        if(x < h->data[i / 2]) {
            h->data[i] = h->data[i/2];
        } else {
            break;
        }
    }
    h->data[i] = x;
    return flag;
}
```

### 删除最小元素

```c
//删除最小元素，在小顶堆即意味着删除根节点
int deleteMin(heap* h) {
    int child;
    int result = h->data[1];
    h->data[1] = h->data[h->size];
    h->size--;
    int i = 1;
    int temp = h->data[1];
    for (i = 1; 2 * i <= h->size; i = child) {
        child = 2 * i;
        if (child != h->size && h->data[child] > h->data[child+1]) {
			//如果左子节点非最后元素且>右子节点,则右子节点最小
            child++;
        }
        if (temp > h->data[child]) {
			//如果temp大于当前元素的最小子节点，则将最小子节点赋值给父节点，否则跳出
            h->data[i] = h->data[child];
        } else {
            break;
        }
    }
    h->data[i] = temp;//将缓冲区值赋给当前游标
    return result;
}
```

### 堆排序

```c
//堆排序
void heap_sort(int a[], int n) {
    int i;
    heap* h = (heap*)malloc(sizeof(heap));//给堆指针分配空间
    init(h);//初始化堆
    for (i = 0; i < n; i++) {//将数组的元素依次插入堆
        insert(h, a[i]);
    }
    for (i = 0; i < n; i++) {
        a[i] = deleteMin(h);
    }
}
```

### 遍历输出数组

```c
//遍历数组
void traverse_array(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}
```

### 完整代码

```c
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20

//创建一个小顶堆,size代表的是实际元素的个数
typedef struct MinHeap {
    int size;
    int data[MAX_SIZE];
} heap;

//初始化：数组0位置要空着
void init(heap* h ) {
    h->size = 0;
}

//插入元素x 
int insert(heap* h, int x) {
	int flag = 1;
    if (h->size == MAX_SIZE) {
        printf("heap is full!");
        flag = 0;
    }
    int i;
    h->size++;
    for (i = h->size; i >= 1; i /= 2) {
        if(x < h->data[i / 2]) {
            h->data[i] = h->data[i/2];
        } else {
            break;
        }
    }
    h->data[i] = x;
    return flag;
}

//删除最小元素，在小顶堆即意味着删除根节点
int deleteMin(heap* h) {
    int child;
    int result = h->data[1];
    h->data[1] = h->data[h->size];
    h->size--;
    int i = 1;
    int temp = h->data[1];
    for (i = 1; 2 * i <= h->size; i = child) {
        child = 2 * i;
        if (child != h->size && h->data[child] > h->data[child+1]) {
			//如果左子节点非最后元素且>右子节点,则右子节点最小
            child++;
        }
        if (temp > h->data[child]) {
			//如果temp大于当前元素的最小子节点，则将最小子节点赋值给父节点，否则跳出
            h->data[i] = h->data[child];
        } else {
            break;
        }
    }
    h->data[i] = temp;//将缓冲区值赋给当前游标
    return result;
}

//堆排序
void heap_sort(int a[], int n) {
    int i;
    heap* h = (heap*)malloc(sizeof(heap));//给堆指针分配空间
    init(h);//初始化堆
    for (i = 0; i < n; i++) {//将数组的元素依次插入堆
        insert(h, a[i]);
    }
    for (i = 0; i < n; i++) {
        a[i] = deleteMin(h);
    }
}
//遍历数组
void traverse_array(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//主函数测试 
int main() {
    int a[] = {10,7,2,5,1};
    int n = sizeof(a) / sizeof(int);
    traverse_array(a, n);
    heap_sort(a, n);
    traverse_array(a, n);
}
```



## 小顶堆的实现方式(二)

### 堆的结构体

> 说明：有的时候不会像上面那样定义结构体，可能会用指针定义结构体，比如这样：

```c
typedef struct MinHeap{
    int *data;//表示堆的数组 大小要在用户输入的元素个数上+1
    int Size;//数组里已有的元素(不包含a[0]) 
    int Capacity; //数组的数量上限
}heap;//定义顶堆
```

如果这样定义，怎么做呢，其实和上面一样，只是定义的形式有区别而已，所以改动的主要就是创建、插入和删除部分。

### 创建堆(初始化堆)

当然堆的建立这部分要大改：

```c
//创建堆 
heap* init(int size){
    heap* h = (heap*)malloc(sizeof(heap));
    h->data = (int*)malloc(sizeof(int)*(size+1));//从a[1]开始保存数 所以数组数量要+1
    h->Size = 0;
    h->Capacity = size;
    h->data[0] = MinData;//岗哨
    return h;
}
```

### 插入元素

```c
 
//插入元素 
int insert(heap* h, int x){
    //判断是否满了
    if (h->Size == h->Capacity) {
        return 0;
    }
    int i = ++h->Size;
    for (; i >= 1; i/=2) {
		if (h->data[i/2] > x) {
			h->data[i] = h->data[i/2];
		} else {
			break;
		}  
    }
    h->data[i] = x;
    return 1;
}
```

### 删除元素

```c
//删除最小元素 
int deleteMin(heap* h){
    int top = h->data[1];
    int last = h->data[h->Size];
    h->Size--;
    int i,child;
    for (i = 1; i * 2 <= h->Size; i = child) {
        child = i*2;
            //注意这里是存在右子节点 并且 右子节点比左子节点小    
        if (child!=h->Size && h->data[child] > h->data[child+1]) {
            child++;
    	}
		//如果比右子节点还小
        if (h->data[child]>last) {
            break;
        }else{//下滤
            h->data[i] = h->data[child];
        }
    
    }
    h->data[i] = last;
    return top;
}
```

### 堆排序

```c
//堆排序
void heap_sort(int a[], int n) {
    int i;
    heap* h = init(n);//初始化堆
    for (i = 0; i < n; i++) {//将数组的元素依次插入堆
        insert(h, a[i]);
    }
    for (i = 0; i < n; i++) {
        a[i] = deleteMin(h);
    }
}
```

### 遍历输出数组

```c
//遍历数组
void traverse_array(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}
```

### 完整代码

```c
#include<stdio.h>
#include<stdlib.h>
#define MinData -1//哨兵元素的值
typedef struct MinHeap{
    int *data;//表示堆的数组 大小要在用户输入的元素个数上+1
    int Size;//数组里已有的元素(不包含a[0]) 
    int Capacity; //数组的数量上限
}heap;//定义顶堆

//创建堆 
heap* init(int size){
    heap* h = (heap*)malloc(sizeof(heap));
    h->data = (int*)malloc(sizeof(int)*(size+1));//从a[1]开始保存数 所以数组数量要+1
    h->Size = 0;
    h->Capacity = size;
    h->data[0] = MinData;//岗哨
    return h;
}
//插入元素 
int insert(heap* h, int x){
    //判断是否满了
    if (h->Size == h->Capacity) {
        return 0;
    }
    int i = ++h->Size;
    for (; i >= 1; i/=2) {
		if (h->data[i/2] > x) {
			h->data[i] = h->data[i/2];
		} else {
			break;
		}  
    }
    h->data[i] = x;
    return 1;
}
//删除最小元素 
int deleteMin(heap* h){
    int top = h->data[1];
    int last = h->data[h->Size];
    h->Size--;
    int i,child;
    for (i = 1; i * 2 <= h->Size; i = child) {
        child = i*2;
            //注意这里是存在右子节点 并且 右子节点比左子节点小    
        if (child!=h->Size && h->data[child] > h->data[child+1]) {
            child++;
    	}
		//如果比右子节点还小
        if (h->data[child]>last) {
            break;
        }else{//下滤
            h->data[i] = h->data[child];
        }
    
    }
    h->data[i] = last;
    return top;
}

//堆排序
void heap_sort(int a[], int n) {
    int i;
    heap* h = init(n);//初始化堆
    for (i = 0; i < n; i++) {//将数组的元素依次插入堆
        insert(h, a[i]);
    }
    for (i = 0; i < n; i++) {
        a[i] = deleteMin(h);
    }
}
//遍历数组
void traverse_array(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//主函数测试 
int main() {
    int a[] = {10,7,2,5,1};
    int n = sizeof(a) / sizeof(int);
    traverse_array(a, n);
    heap_sort(a, n);
    traverse_array(a, n);
}
```

