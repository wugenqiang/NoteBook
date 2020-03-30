#include <stdio.h>
#include <string.h>

int main(){
	char s[105];
	gets(s);
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 3;
			if(s[i] > 'Z'){
				s[i] -= 26;//溢出循环 
			}
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] += 3;
			if(s[i] > 'z'){
				s[i] -= 26;//溢出循环 
			}
		} else{
			continue;
		} 
	}
	puts(s);
	return 0;
}
