#include <stdio.h>
//求阶乘n！ 
//题目：写一个程序，让用户输入n,然后计算输出n! 
int main()
{
	int n;
	int i=1;
	int fact = 1;//阶乘 
	
	printf("请输入一个任意数n："); 
	scanf("%d",&n); 
	
/*	while(i<=n)
	{
		fact *= i; 
		i++;
	}*/
	for(i=1;i<=n;i++)
	{
		fact *= i; 
	}
	
	printf("%d!= %d\n",n,fact);
    
    return 0;
}
