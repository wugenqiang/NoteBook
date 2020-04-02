#include <stdio.h>
#define MaxSize 100
//定义数据类型 
typedef int DataType;
typedef struct Node{
    DataType data;
    struct Node *next;
}ListNode,*LinkList;

//初始化单链表 
void InitList(LinkList *head){
    if((*head=(LinkList)malloc(sizeof(ListNode)))==NULL){
        //为头结点分配存储空间
        exit(-1);
    }
    (*head)->next = NULL; //将单链表的头结点指针域置为空
}
