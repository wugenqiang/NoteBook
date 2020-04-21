# 二叉树的基本操作（C 语言版）

## 1 二叉树的定义

二叉树的图长这样：

![image-20200421184005011](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200421184013.png)

二叉树通常以结构体的形式定义，如下，结构体内容包括三部分：本节点所存储的值、左孩子节点的指针、右孩子节点的指针。这里需要注意，子节点必须使用指针，就像我们定义结构体链表一样，下一个节点必须使用地址的方式存在在结构体当中。

```c
struct TreeNode {//树的结点
	int data;//数据域
	struct TreeNode *lchild;
	struct TreeNode *rchild;
};
```

当然，我们也可以为我们的的树节点结构体重新定义一下名字，使用 C 语言中的 typedef 方法就可以了。

```c
struct TreeNode {//树的结点
	int data;//数据域
	struct TreeNode *lchild;
	struct TreeNode *rchild;
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

> 下面通过先序的方式建立二叉树：

* 第一种建立二叉树：无参

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
	PreOrderTree(root);//先序遍历输出 
	return 0;
}
```



* 第二种建立二叉树：有参

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
	PreOrderTree(root);//先序遍历输出 
	return 0;
}
```

如果没有要求的话，我比较倾向于第一种！

## 3 二叉树的遍历

### 3.1 先序遍历

```c
//先序遍历二叉树 
void PreOrderTree(BiTree root) {
	if (root) {
		printf("%d ", root->data);
		PreOrderTree(root->lchild);
		PreOrderTree(root->rchild);
	}	
}
```

### 3.2 中序遍历

```c
//中序遍历二叉树
void InOrderTree(BiTree root) {
	if (root) {
		InOrderTree(root->lchild);
		printf("%d ", root->data);
		InOrderTree(root->rchild);
	}
} 
```

### 3.3 后序遍历

```c
//后序遍历二叉树
void PostOrderTree(BiTree root) {
	if (root) {
		PostOrderTree(root->lchild);
		PostOrderTree(root->rchild);
		printf("%d ", root->data);
	}
} 
```

> 验证程序是否正确的主函数

```c
//测试
int main() {
    //含参建立二叉树
	//BiTree root;
	//CreateTree(&root);
    //不含参建立二叉树
	BiTree root = NULL; 
	root = CreateTree();//创建树 
	printf("\n先序遍历：");
	PreOrderTree(root);//先序遍历输出
	printf("\n中序遍历：");
	InOrderTree(root);//中序遍历输出 
	printf("\n后序遍历：");
	PostOrderTree(root);//中序遍历输出 
	return 0;
}
```

## 4 求二叉树的最大深度

> 一棵树的最大深度，左子树和右子树的最大深度 + 1 即可.

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

## 5 求二叉树叶子节点的个数

一个节点的度就是一个节点的分支数，二叉树中的节点按照度来分类的话，分为三类，度分别为 0、1、2 的节点，我们将其数量表示为 n0、n1、n2，且我们将一棵树的总结点数量用 N 来表示。那么一个数的叶子节点的数量即为 n0，且有 N = n0 + n1 + n2。

如果我们按照一棵树的子节点数来计算一棵树的总结点数，那么一棵二叉树树的总结点数 N = 2 * n2 + n1 + 1，最后一个 1 表示树的根节点。我们将关于 N 的两个等式合并，则有结论：n0 = n2 + 1。

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

## 6 求第 k 层节点的个数

采用递归的方式来实现

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

