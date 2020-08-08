## 第十章 链表

### 10.1 可变数组

* Example 01：

  * array.h

  * ```c
    #ifndef _ARRAY_H_
    #define _ARRAY_H_
    
    typedef struct {
    	int *array;
    	int size;
    }Array;
    
    #define BLOCK_SIZE 20
    
    Array array_create(int init_size);
    void array_free(Array *a);
    int array_size(const Array *a);
    int *array_at(Array *a,int index);
    void array_inflate(Array *a,int more_size);
    int array_get(const Array *a,int index);
    void array_set(Array *a,int index,int value);
    
    #endif
    ```

  * array.c

  * ```c
    #include "array.h"
    #include <stdio.h>
    #include <stdlib.h>
    
    //typedef struct {
    //	int *array;
    //	int size;
    //}Array;
    
    Array array_create(int init_size){
    	Array a;
    	a.size = init_size;
    	a.array = (int *)malloc(sizeof(int)*a.size);
    	return a;
    }
    void array_free(Array *a){
    	free(a->array);
    	a->array = NULL;
    	a->size = 0;
    }
    int array_size(const Array *a){
    	return a->size;
    }
    int *array_at(Array *a,int index){
    	if(index>=a->size){
    		//array_inflate(a,index-a->size+1);
    		array_inflate(a,(index/BLOCK_SIZE +1)*BLOCK_SIZE-a->size);
    	}
    	return &(a->array[index]);
    }
    //可变字符自动按块增长 
    void array_inflate(Array *a,int more_size){
    	int *p = (int *)malloc(sizeof(int)*(a->size + more_size));
    	int i;
    	for(i=0;i<a->size;i++){
    		p[i] = a->array[i];
    	}
    	free(a->array);
    	a->array = p;
    	a->size += more_size;
    }
    int array_get(const Array *a,int index){
    	return a->array[index];
    }
    
    void array_set(Array *a,int index,int value){
    	a->array[index] = value;
    }
    
    int main(){
    	Array a = array_create(100);
    	printf("%d\n",array_size(&a));
    	printf("%d\n",a.size);
    	*array_at(&a,0) = 10;
    	printf("%d\n",*array_at(&a,0));
    	int number;
    	int cnt = 0;
    	while(number != -1){
    		scanf("%d",&number);
    		if(number!=-1){
    			*array_at(&a,cnt++) = number;
    		}
    	} 
    	
    	array_free(&a);
    	
    	return 0;
    }
    ```

> 可变数组的缺陷

* 要 copy，不能充分利用



### 10.2 链表存储数据

> 链表存储数据 add

* Example 01：

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

int main(){
	Node *head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			//	add to linkList
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next = NULL;
			//	find the last
			Node *last = head;
			if(last){
				while(last->next){
			    	last = last->next;
				}
				//	attach
				last->next = p;
			}else{
				head = p;
			}
		}
	} while(number != -1);
	
	return 0;
}
```

* Example 02：对 01 进行改进

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

Node* add(Node *head, int number);

int main(){
	Node *head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			head = add(head,number);
		}
	} while(number != -1);
	
	return 0;
}

Node* add(Node *head, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = head;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		head = p;
	}
	return head;
}
```

* Example 02：对 01 进行改进

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

Node* add(Node **pHead, int number);

int main(){
	Node *head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			head = add(&head,number);
		}
	} while(number != -1);
	
	return 0;
}

Node* add(Node **pHead, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = *pHead;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		*pHead = p;
	}
	return *pHead;
}
```

* Example 03：对 02 进行改进

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

typedef struct _list{
	Node *head;
}List; 

void add(List *pList, int number);

int main(){
	List list;
	list.head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			add(&list,number);
		}
	} while(number != -1);
	
	return 0;
}

void add(List *pList, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = pList->head;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		pList->head = p;
	}
}
```



* Example 04：对 03 进行改进

```c
typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

typedef struct _list{
	Node *head;
	Node *tail;
}List; 

void add(List *pList, int number);

int main(){
	List list;
	list.head = list.tail = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			add(&list,number);
		}
	} while(number != -1);
	
	return 0;
}
```

> 待完善：list.tail



### 10.3 链表输出数据

> 链表输出数据 print

* Example 01：

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

typedef struct _list{
	Node *head;
	Node *tail;
}List; 

void add(List *pList, int number);

int main(){
	List list;
	list.head = list.tail = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			add(&list,number);
		}
	} while(number != -1);
	Node *p;
	//遍历输出 
	for(p=list.head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
	
	return 0;
}

void add(List *pList, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = pList->head;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		pList->head = p;
	}
}
```

* Example 02：对 01 进行优化

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

typedef struct _list{
	Node *head;
	//Node *tail;
}List; 

void add(List *pList, int number);
void print(List *pList);

int main(){
	List list;
	list.head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			add(&list,number);
		}
	} while(number != -1);
	print(&list); 
	
	return 0;
}

void add(List *pList, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = pList->head;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		pList->head = p;
	}
}

void print(List *pList){
	Node *p;
	//遍历输出 
	for(p=pList->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}
```

* Test Result

![image-20200307142325721](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185436.png)

### 10.4 链表查找数据并删除

> 链表查找数据并删除

* Example 01：

```c
#include <stdio.h> 
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
	
}Node; 

typedef struct _list{
	Node *head;
	//Node *tail;
}List; 

void add(List *pList, int number);
void print(List *pList);

int main(){
	List list;
	list.head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			add(&list,number);
		}
	} while(number != -1);
	print(&list); 
	
	//查找数据 
	scanf("%d",&number);
	Node *p;
	int isFound = 0;
	for(p=list.head;p;p=p->next){
		if(p->value == number){
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}
	if(!isFound){
		printf("没有找到\n");
	}
	
	//删除某个数据 
	Node *q;
	for(q=NULL,p=list.head;p;q=p,p=p->next){
		if(p->value == number){
			if(q){
				q->next = p->next;
			}else{
				list.head = p->next;
			}
			
			free(p);
			break;
		}
	} 
	
	//删除所有数据
	for(p=list.head;p;p=q){
		q = p->next;
		free(p);
	} 
	
	return 0;
}

void add(List *pList, int number){
	//	add to linkList
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	//	find the last
	Node *last = pList->head;
	if(last){
		while(last->next){
	    	last = last->next;
		}
		//	attach
		last->next = p;
	}else{
		pList->head = p;
	}
}

void print(List *pList){
	Node *p;
	//遍历输出 
	for(p=pList->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}
```



