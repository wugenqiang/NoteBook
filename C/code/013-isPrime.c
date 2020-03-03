#include <stdio.h>

//主函数 
int main(){
	
	int x;
	int i;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			break;
		}
	}
	
	if(i<x){
		printf("%d 不是素数",x);
	}else{
		printf("%d 是素数",x);
	}
	
	return 0;
}

