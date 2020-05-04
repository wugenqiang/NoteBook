# 二叉树的基本操作（C 语言版）

## 1 二叉树的定义

二叉树的图长这样：

![image-20200422082300641](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200422082311.png)

二叉树是每个结点最多有两个子树的树结构，常被用于实现二叉查找树和二叉堆。二叉树是链式存储结构，用的是二叉链，本质上是链表。二叉树通常以结构体的形式定义，如下，结构体内容包括三部分：本节点所存储的值、左孩子节点的指针、右孩子节点的指针。

```c
struct TreeNode {//树的结点
	int data;//数据域
	struct TreeNode* lchild;//指向左孩子节点
	struct TreeNode* rchild;//指向右孩子节点 
};
```

当然，我们也可以为我们的的树节点结构体重新定义一下名字，使用 C 语言中的 typedef 方法就可以了。

```c
struct TreeNode {//树的结点
	int data;//数据域
	struct TreeNode* lchild;//指向左孩子节点
	struct TreeNode* rchild;//指向右孩子节点 
} BiNode, *BiTree;
```

## 2 二叉树的建立

二叉树的操作通常使用递归方法，二叉树的操作可以分为两类，一类是需要改变二叉树的结构的，比如二叉树的创建、节点删除等等，这类操作，传入的二叉树的节点参数为二叉树指针的地址，这种参入传入，便于更改二叉树结构体的指针（即地址）。

如下是二叉数创建的函数，这里我们规定，节点值必须为大于 0 的数值，如果不是大于 0 的数，则表示结束继续往下创建子节点的操作。然后我们使用递归的方法以此创建左子树和右子树。

比如说，建立这个二叉树：

```c
		5
       / \
      3   8
     /   / \   
    2   6   9 
```
首先根据这个二叉树，我们先模拟一下：

先序输入：5 3 2 0 0 0 8 6 0 0 9 0 0

先序遍历输出：5 3 2 8 6 9

中序遍历输出：2 3 5 6 8 9

后序遍历输出：2 3 6 9 8 5

层次遍历输出：5 3 8 2 6 9

> 下面通过先序的方式建立二叉树：

* 第一种建立二叉树：使用一级指针

```c
//先序建立二叉树
BiTree CreateTree() {
	int data;
	scanf("%d", &data);//根节点数据
	BiTree root;

	if (data <= 0) {
		return NULL;
	} else {
		root = (BiTree)malloc(sizeof(BiNode));
		root->data = data;
		root->lchild = CreateTree();
		root->rchild = CreateTree();
	}
	return root;
}
```

测试使用：

```c
//测试
int main() {
	//BiTree root;
	//CreateTree(&root);
	BiTree root = NULL; 
	root = CreateTree();//创建树 
	PreOrderTraverse(root);//先序遍历输出 
	return 0;
}
```



* 第二种建立二叉树：使用二级指针

```c
//先序建立二叉树
void CreateTree(BiTree* root) {
	int data;
	scanf("%d", &data);//根节点数据
	
	if (data <= 0) {
		*root = NULL;
	} else {
		(*root) = (BiTree)malloc(sizeof(BiNode));
		(*root)->data = data;
		CreateTree(&((*root)->lchild));
		CreateTree(&((*root)->rchild));
	}
} 
```

测试使用：

```c
//测试
int main() {
	BiTree root;
	CreateTree(&root);
	//BiTree root = NULL; 
	//root = CreateTree();//创建树 
	PreOrderTraverse(root);//先序遍历输出 
	return 0;
}
```

如果没有要求的话，我比较倾向于第一种！

## 3 二叉树的遍历

### 3.1 先序遍历

> 先序遍历的思路：

先序遍历的过程是首先访问根结点，然后先序遍历根的左子树，最后先序遍历根的右子树。对于根的左子树和右子树，遍历的过程相同。

> 方案一：递归

* 采用递归的方式来实现：

```c
//先序遍历二叉树:递归实现 
void PreOrderTraverse(BiTree root) {
	if (root) {
		printf("%d ", root->data);
		PreOrderTraverse(root->lchild);
		PreOrderTraverse(root->rchild);
	}	
}
```

> 方案二：非递归

* 非递归实现：引入辅助栈

```c
//先序遍历二叉树:非递归实现 
void PreOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	if (root != NULL) {
		//根节点入栈
		top++;
		stack[top] = root;
		//栈不空时循环
		while (top > -1) {
			//出栈并访问该节点
			p = stack[top];
			top--;
			printf("%d ", p->data);
			//右孩子入栈
			if (p->rchild != NULL) {
				top++;
				stack[top] = p->rchild;
			}
			//左孩子入栈
			if (p->lchild != NULL) {
				top++;
				stack[top] = p->lchild;
			} 
		} 
	} 
}
```



### 3.2 中序遍历

> 中序遍历的思路

中序遍历的过程是首先中序遍历左子树，然后访问根结点，最后中序遍历根的右子树。对于根的左子树和右子树，遍历的过程相同。

> 方案一：递归

* 采用递归的方式来实现：

```c
//中序遍历二叉树:递归实现 
void InOrderTraverse(BiTree root) {
	if (root) {
		InOrderTraverse(root->lchild);
		printf("%d ", root->data);
		InOrderTraverse(root->rchild);
	}
} 
```

> 方案二：非递归

* 非递归实现：引入辅助栈

```c
//中序遍历二叉树:非递归实现 
void InOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	if (root != NULL) {
		p = root;
		while (top > -1 || p != NULL) {
			//扫描p的所有左节点并入栈
			while (p != NULL) {
				top++;
				stack[top] = p;
				p = p->lchild;
			} 
			if (top > -1) {
				//出栈并访问节点
				p = stack[top];
				top--;
				printf("%d ", p->data);
				//扫描右孩子
				p = p->rchild; 
			}
		}
	} 
}
```



### 3.3 后序遍历

> 后序遍历的思路

后序遍历的过程是首先后序遍历左子树，然后后序遍历根的右子树，最后访问根结点。

> 方案一：递归

* 采用递归的方式来实现：

```c
//后序遍历二叉树:递归实现 
void PostOrderTraverse(BiTree root) {
	if (root) {
		PostOrderTraverse(root->lchild);
		PostOrderTraverse(root->rchild);
		printf("%d ", root->data);
	}
} 
```

> 方案二：非递归

* 非递归实现：引入辅助栈

```c
//后序遍历二叉树:非递归实现 
void PostOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	int sign; 
	if (root != NULL) {
		do {
			//root节点入栈
			while (root != NULL) {
				top++;
				stack[top] = root;
				root = root->lchild;
			} 
			//p指向栈顶前一个已访问节点
			p = NULL;
			//置root为已访问
			sign = 1;
			while (top != -1 && sign) {
				//取出栈顶节点
		 		root = stack[top];
		 		//右孩子不存在或右孩子已访问则访问root
		 		if (root->rchild == p) {
		 			printf("%d ", root->data);
		 			top--;
		 			//p指向被访问的节点
					 p = root; 
				 } else {
				 	//root指向右孩子节点
					root = root->rchild;
					//置未访问标记
					sign = 0; 
				 }
			}
		} while (top != -1);
	} 
}
```



### 3.4 层次遍历

> 层次遍历的思路：

思路：在进行层次遍历时，对一层结点访问完后再按照它们的访问次序对各个结点的左孩子和右孩子顺序访问，这样一层一层地进行，先遇到的结点先访问，这棵二叉树的层次遍历序列为 5 3 8 2 6 9，先上到下，先左到右。实现层次遍历用队列比较方便，因为是先进先出（FIFO）。首先把 5 入队，然后再输出队首元素，并且把队首元素的左结点和右结点入队（如果有的话），以此类推，输出的序列就是层次遍历啦

* 采用非递归方式实现：引入队列

```c
//层次遍历:非递归实现 
void LevelOrderTraverseNonRec(BiTree root) {
	BiTree p;
	Push(root);
	while (!empty()) {//empty()判断队列是否为空
		p = Pop();//出队
		printf("%d ", p->data);//输出队首结点 
		if (p->lchild) {//把Pop掉的结点的左子结点加入队列 
			Push(p->lchild);
		}
		if (p->rchild) {//把Pop掉的结点的右子结点加入队列
			Push(p->rchild);
		}
	}
} 
```

附队列部分代码：

```c
//队列结构体 
typedef struct queue {
	struct TreeNode* numQueue[MaxSize];
	int front;
	int rear; 
} Queue; 

Queue queue;//声明全局变量 

//初始化队列
void initQueue() {
	queue.front = 0;
	queue.rear = 0;
} 

//入队
void Push(BiTree root) {
	queue.numQueue[++queue.rear] = root;
} 

//出队
BiTree Pop() {
	return queue.numQueue[++queue.front];
}

//判断队列是否为空
int empty() {
	return queue.rear == queue.front;
} 
```



## 4 求二叉树的最大深度

> 一棵树的最大深度，左子树和右子树的最大深度 + 1 即可.

* 采用递归的方式来实现：

```c
//二叉树的最大深度
int maxDepth(BiTree root) {
	if (root) {
		int maxLeft = maxDepth(root->lchild);
		int maxRight = maxDepth(root->rchild);
		if (maxLeft > maxRight) {
			return maxLeft + 1; 
		} else {
			return maxRight + 1;
		}
	}
	return 0;
} 
```

## 5 求二叉树的高度

* 采用递归的方式来实现

```c
//二叉树高度
int BiTreeHeight(BiTree root) {
	if (root) {
		int leftHeight = BiTreeHeight(root->lchild);
	    int rightHeight = BiTreeHeight(root->rchild); 
	    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1); 
	}
	return 0;
}
```



## 6 求二叉树叶子节点的个数

一个节点的度就是一个节点的分支数，二叉树中的节点按照度来分类的话，分为三类，度分别为 0、1、2 的节点，我们将其数量表示为 n0、n1、n2，且我们将一棵树的总结点数量用 N 来表示。那么一个数的叶子节点的数量即为 n0，且有 N = n0 + n1 + n2。

如果我们按照一棵树的子节点数来计算一棵树的总结点数，那么一棵二叉树树的总结点数 N = 2 * n2 + n1 + 1，最后一个 1 表示树的根节点。我们将关于 N 的两个等式合并，则有结论：n0 = n2 + 1。

* 采用递归的方式来实现

```c
//叶子节点
int LeafNodeNum(BiTree root) {
	if (root == NULL) {
		return 0;
	}
	if (root->lchild == NULL && root->rchild == NULL) {
		return 1;
	} else {
		return LeafNodeNum(root->lchild) + LeafNodeNum(root->rchild);
	}
} 
```

## 7 求第 k 层节点的个数

* 采用递归的方式来实现：

```c
//求第k层节点个数
int LevelNodeNum(BiTree root, int k) {
	if (root == NULL || k < 1) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return LevelNodeNum(root->lchild, k - 1) + LevelNodeNum(root->rchild, k - 1);
}  
```

## 8 求二叉树总节点个数

* 采用递归的方式来实现：

```c
//求二叉树总节点个数
int CountNode(BiTree root) {
	if (root) {
		if ((root->lchild == NULL) && (root->rchild == NULL)) {
			return 1;
		} else {
			return CountNode(root->lchild) + CountNode(root->rchild) + 1;
		}
	}
	return 0;
} 
```



## 9 查找元素为 x 的节点

* 采用递归的方式来实现：

```c
//查找元素为 x 的节点
BiTree SearchNode(BiTree root, int x) {
	if (root) {
		if (root->data == x) {
			return root;
		} else {
			BiTree p;
			p = SearchNode(root->lchild, x);
			if (!p) {
				p = SearchNode(root->rchild, x);
			}
			return p;
		}
	}
	return NULL;
}
```



## 10 二叉树的操作完整代码

```c
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100 

//树的结构 
typedef struct TreeNode {
	int data;//数据域
	struct TreeNode* lchild;//指向左孩子节点
	struct TreeNode* rchild;//指向右孩子节点 
} BiNode, *BiTree;

//队列结构体 
typedef struct queue {
	struct TreeNode* numQueue[MaxSize];
	int front;
	int rear; 
} Queue; 

Queue queue;//声明全局变量 

//初始化队列
void initQueue() {
	queue.front = 0;
	queue.rear = 0;
} 

//入队
void Push(BiTree root) {
	queue.numQueue[++queue.rear] = root;
} 

//出队
BiTree Pop() {
	return queue.numQueue[++queue.front];
}

//判断队列是否为空
int empty() {
	return queue.rear == queue.front;
} 


//构造二叉树
BiTree CreateTree() {
	int data;
	scanf("%d", &data);//根节点数据
	BiTree root;

	if (data <= 0) {
		return NULL;
	} else {
		root = (BiTree)malloc(sizeof(BiNode));
		root->data = data;
		//printf("请输入%d的左子树：", root->data);
		root->lchild = CreateTree();
		//printf("请输入%d的右子树：", root->data);
		root->rchild = CreateTree();
	}
	return root;
}


//先序遍历二叉树:递归实现 
void PreOrderTraverse(BiTree root) {
	if (root) {
		printf("%d ", root->data);
		PreOrderTraverse(root->lchild);
		PreOrderTraverse(root->rchild);
	}	
}

//先序遍历二叉树:非递归实现 
void PreOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	if (root != NULL) {
		//根节点入栈
		top++;
		stack[top] = root;
		//栈不空时循环
		while (top > -1) {
			//出栈并访问该节点
			p = stack[top];
			top--;
			printf("%d ", p->data);
			//右孩子入栈
			if (p->rchild != NULL) {
				top++;
				stack[top] = p->rchild;
			}
			//左孩子入栈
			if (p->lchild != NULL) {
				top++;
				stack[top] = p->lchild;
			} 
		} 
	} 
}

//中序遍历二叉树:递归实现 
void InOrderTraverse(BiTree root) {
	if (root) {
		InOrderTraverse(root->lchild);
		printf("%d ", root->data);
		InOrderTraverse(root->rchild);
	}
} 

//中序遍历二叉树:非递归实现 
void InOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	if (root != NULL) {
		p = root;
		while (top > -1 || p != NULL) {
			//扫描p的所有左节点并入栈
			while (p != NULL) {
				top++;
				stack[top] = p;
				p = p->lchild;
			} 
			if (top > -1) {
				//出栈并访问节点
				p = stack[top];
				top--;
				printf("%d ", p->data);
				//扫描右孩子
				p = p->rchild; 
			}
		}
	} 
}

//后序遍历二叉树:递归实现 
void PostOrderTraverse(BiTree root) {
	if (root) {
		PostOrderTraverse(root->lchild);
		PostOrderTraverse(root->rchild);
		printf("%d ", root->data);
	}
} 

//后序遍历二叉树:非递归实现 
void PostOrderTraverseNonRec(BiTree root) {
	BiTree stack[MaxSize];
	BiTree p;
	int top = -1;
	int sign; 
	if (root != NULL) {
		do {
			//root节点入栈
			while (root != NULL) {
				top++;
				stack[top] = root;
				root = root->lchild;
			} 
			//p指向栈顶前一个已访问节点
			p = NULL;
			//置root为已访问
			sign = 1;
			while (top != -1 && sign) {
				//取出栈顶节点
		 		root = stack[top];
		 		//右孩子不存在或右孩子已访问则访问root
		 		if (root->rchild == p) {
		 			printf("%d ", root->data);
		 			top--;
		 			//p指向被访问的节点
					 p = root; 
				 } else {
				 	//root指向右孩子节点
					root = root->rchild;
					//置未访问标记
					sign = 0; 
				 }
			}
		} while (top != -1);
	} 
}

//层次遍历:非递归实现 
void LevelOrderTraverseNonRec(BiTree root) {
	BiTree p;
	Push(root);
	while (!empty()) {//empty()判断队列是否为空
		p = Pop();//出队
		printf("%d ", p->data);//输出队首结点 
		if (p->lchild) {//把Pop掉的结点的左子结点加入队列 
			Push(p->lchild);
		}
		if (p->rchild) {//把Pop掉的结点的右子结点加入队列
			Push(p->rchild);
		}
	}
} 

//二叉树的最大深度
int maxDepth(BiTree root) {
	if (root) {
		int maxLeft = maxDepth(root->lchild);
		int maxRight = maxDepth(root->rchild);
		if (maxLeft > maxRight) {
			return maxLeft + 1; 
		} else {
			return maxRight + 1;
		}
	}
	return 0;
} 

//二叉树高度
int BiTreeHeight(BiTree root) {
	if (root) {
		int leftHeight = BiTreeHeight(root->lchild);
	    int rightHeight = BiTreeHeight(root->rchild); 
	    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1); 
	}
	return 0;
}

//叶子节点
int LeafNodeNum(BiTree root) {
	if (root == NULL) {
		return 0;
	}
	if (root->lchild == NULL && root->rchild == NULL) {
		return 1;
	} else {
		return LeafNodeNum(root->lchild) + LeafNodeNum(root->rchild);
	}
} 

//求第k层节点个数 
int LevelNodeNum(BiTree root, int k) {
	if (root == NULL || k < 1) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return LevelNodeNum(root->lchild, k - 1) + LevelNodeNum(root->rchild, k - 1);
}  

//求二叉树总节点个数
int CountNode(BiTree root) {
	if (root) {
		if ((root->lchild == NULL) && (root->rchild == NULL)) {
			return 1;
		} else {
			return CountNode(root->lchild) + CountNode(root->rchild) + 1;
		}
	}
	return 0;
} 

//查找元素为 x 的节点
BiTree SearchNode(BiTree root, int x) {
	if (root) {
		if (root->data == x) {
			return root;
		} else {
			BiTree p;
			p = SearchNode(root->lchild, x);
			if (!p) {
				p = SearchNode(root->rchild, x);
			}
			return p;
		}
	}
	return NULL;
} 

//测试
int main() {
	//测试数据：5 3 2 0 0 0 8 6 0 0 9 0 0 
	//BiTree root;
	//CreateTree(&root);
	BiTree root = NULL; 
	root = CreateTree();//创建树 
	printf("先序非递归遍历：");
    PreOrderTraverseNonRec(root);
    printf("\n中序非递归遍历：");
    InOrderTraverseNonRec(root);
    printf("\n后序非递归遍历：");
    PostOrderTraverseNonRec(root);
	printf("\n先序递归遍历：");
	PreOrderTraverse(root);//先序遍历输出
	printf("\n中序递归遍历：");
	InOrderTraverse(root);//中序遍历输出 
	printf("\n后序递归遍历：");
	PostOrderTraverse(root);//中序遍历输出 
	printf("\n层次非递归遍历：");
	LevelOrderTraverseNonRec(root);//层次遍历输出 
	printf("\n二叉树的深度为：%d",maxDepth(root));
	printf("\n二叉树的高度为：%d",BiTreeHeight(root));
	printf("\n叶子节点为：%d",LeafNodeNum(root));
	printf("\n总节点为：%d", CountNode(root));
	printf("\n第3层节点个数为：%d",LevelNodeNum(root, 3));
	BiTree q;
	q = SearchNode(root, 9);
	if (q) {
		printf("\n查找到了 ：%d", q->data);
	} else {
		printf("\n没有查找到 9 ");
	}
	
	return 0;
}
```

