#include "stdio.h"
 
int recursion_fun(int n){
    if(n == 0) return 1;
	if(n == 1) return 1;//递归结束条件
	else	return n * recursion_fun( n-1 );  //自己调用自己
}
 
//主函数 
int main(){
	int n,res;
	 
	printf("请输入递归数字：");
	scanf("%d",&n);
	
	res = recursion_fun(n);			//n! 
	
	printf("\n %d! = %d",n,res);
	return 0;
}

