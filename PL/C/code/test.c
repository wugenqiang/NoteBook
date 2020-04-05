#include <stdio.h>
#define N 100 

int main(){
	char s[N];
	char a[N], b[N], c[N];
	int cnt_a = 0, cnt_b = 0, cnt_c = 0;
	int i;
	gets(s);
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
			a[cnt_a++] = s[i];
		}else if(s[i] >= '0' && s[i] <= '9'){
			b[cnt_b++] = s[i];
		}else{
			c[cnt_c++] = s[i];
		}		
	}
	puts(a);
	puts(b);
	puts(c);
	
	return 0;
}
