#include <stdio.h>
#include <string.h> 

int main(){
	int i,j,a[3][3],s1,s2;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	s1 = a[0][0] + a[1][1] + a[2][2];
	s2 = a[0][2] + a[1][1] + a[2][0];
	printf("s1 = %d, s2 = %d\n",s1,s2);
	
	return 0;
}
