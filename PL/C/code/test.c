#include <stdio.h>
int reverse(int x);//函数声明 
int main(){
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF){
		int s = reverse(a) + reverse(b); 
		printf("%d\n",s);
	} 
	
	return 0;
}

int reverse(int x){//实现翻转函数 
	int result = 0;
	while(x){
		result = result * 10 + x % 10; //x%10表示取个位 
		x /= 10;//表示舍去个位 
	}
	return result;
} 
