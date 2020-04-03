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
 

 

