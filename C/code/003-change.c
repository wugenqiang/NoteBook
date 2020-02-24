#include "stdio.h" 
//找零钱

int main()
{
	int price = 0;
	
	printf("请输入金额（元）：");
	scanf("%d",&price);
	
	int change = 100 - price;
	
	printf("找您 %d 元。",change);
	
	return 0; 
}
 
