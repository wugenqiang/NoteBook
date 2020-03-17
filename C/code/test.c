#include <stdio.h>
#include <string.h> 

int main(){
	int i,j,a[10],t;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<10;j++){
		for(i=0;i<10-j;i++){
			if(a[i]>a[i+1]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%5d",a[i]);
	}
	return 0;
}
