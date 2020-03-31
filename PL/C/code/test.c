#include <stdio.h>
#include <string.h>

int transform(char *a, int len);

int main(){
	char a[12], b[12];
	while(scanf("%s%s", a, b) != EOF){
		int A = transform(a, strlen(a));
		int B = transform(b, strlen(b));
		printf("%d\n", A + B); 
	}
	return 0;
} 

int transform(char *a, int len){
	int sum = 0;
	int i;
	for(i = 0; i < len; i++){
		if(a[i] >= '0' && a[i] <= '9'){
			sum = sum * 10 + a[i] - '0';
		}
	}
	if(a[0] == '-'){
		sum = -sum;
	}
	return sum;
}
