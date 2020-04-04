#include <stdio.h>

int st[1005];//定义一个栈
int main(){
	int A, B, C, D;
	for(A = 0; A <= 9; A++){
		for(B = 0; B <= 9; B++){
			for(C = 0; C <= 9; C++){
				for(D = 0; D <= 9; D++){
					if(A == 0){
						continue;
					}
					int s1 = A * 1000 + B * 100 + C * 10 + D;
					int s2 = D * 1000 + C * 100 + B * 10 + A;
					if(s1 * 4 == s2){
						printf("%d\n", s1);
					}
				}	
			}	
		}
	}
	return 0; 
} 
