#include <stdio.h> 

int max(int x,int y,int z);

int main(){
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d = max(a,b,c);
	printf("max = %d\n",d);
	return 0;
} 
//求3个整数中较大者 
int max(int x,int y,int z){
	int t;
	if(x>y) {
		if(x>z){
			t = x;
		}else {
			t = z;
		}
	}else if(y<z){
			t = z;
		}else{
			t = y;
		}
	return t; 
}
