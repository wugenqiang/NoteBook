#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int i;
	int isPrime = 1;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			isPrime = 0;
		}
	}
	
	if(isPrime == 1){
		printf("%d 是素数",x);
	}else{
		printf("%d 不是素数",x);
	}
	
	return 0;
}

