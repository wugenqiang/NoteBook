#include <stdio.h>
#include <string.h>

void fun(char *tt, int pp[]){
	int i, j = 0;
	for (i = 0; i < strlen(tt); i++){
		if (tt[i] >= 'a' && tt[i] <= 'z'){
			j = tt[i] - 'a' ;
			pp[j] = pp[j] + 1;
		}
	}
}

int main(){//main function is used to Test fun function
	char tt[] = {'a','b','a'}; 
	int i;
	int pp[26];
	//int pp[26] = {0};
	for (i = 0; i < 26; i++){
		pp[i] = 0;
	} 
	fun(&tt, pp);
	
	for (i = 0; pp[i] != '\0'; i++){
		if (pp[i] > 0){
			char c = i + 'a';
			printf("%c = %d\n", c, pp[i]);
		}
	}	
	return 0;
}
