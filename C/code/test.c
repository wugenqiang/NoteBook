#include <stdio.h> 
#define M 2
#define N 3

int main(){
	
	int a[M][N] = {{1,2,3},{4,5,6}};
	int b[N][M];
	int i,j;
	printf("array a£º\n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%5d",a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("array b£º\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
