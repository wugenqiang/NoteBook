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
