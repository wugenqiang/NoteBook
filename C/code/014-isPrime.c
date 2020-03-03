#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int one,two,five;
	
	scanf("%d",&x);
	
	for(one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("%d 个1角 + %d 个2角 + %d 个5角 = %d 元\n",one,two,five,x);
				}
			}
		}
	}
		
	return 0;
}

