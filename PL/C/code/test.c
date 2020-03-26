#include <stdio.h>
int main(){
	int a = 100;
	int *p;
	p = &a;
	printf("*p = %d\n",*p);
	return 0;
}
