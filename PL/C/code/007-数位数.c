#include <stdio.h>
//数位数 
int main()
{
	int x;
	int count = 0;
	
	printf("请输入一个任意数："); 
	scanf("%d",&x); 
	
	do
	{
		x /= 10;
		count++;
	}while(x>0);
	
	printf("该数有 %d 位！\n",count);
    
    return 0;
}
