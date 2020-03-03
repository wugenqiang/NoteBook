#include <stdio.h>

//Ö÷º¯Êı 
int main(){
	
	int x,digit;
	int result = 0;
	
	scanf("%d",&x);
	
	while(x>0){
		digit = x%10;
		result = result*10 + digit;
		x /= 10;
	}
	
	printf("%d",result);
	
	return 0;
}

