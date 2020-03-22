#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//主函数 
int main(){
	
	srand(time(0));
	int number = rand()%100 + 1;//[0,100]
	int count = 0;
	int a = 0;
	
	printf("我已经想好了一个1到100之间的数。");
	 
	do{
		printf("请猜这个1到100之间的数：");
		scanf("%d",&a);
		
		count++;
		if(a>number){
			printf("你猜的数大了\n"); 
		} else if(a<number){
			printf("你猜的数小了\n"); 
		}
	}while(a!=number);
	
	printf("太好了，你用了 %d 次就猜到了答案。\n",count);
	
	return 0;
}

