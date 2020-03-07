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
	
	//删除数据 
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
