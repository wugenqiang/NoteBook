#include <stdio.h>
#define N 80

void enterString(char str[]);
void deleteString(char str[],char ch);
void printString(char str[]);

int main(){
	char c,str[N];
	enterString(str);
	scanf("%c",&c);  //ÒªÇóÉ¾µÄ×Ö·û
	deleteString(str,c);
	printString(str);
	 
	return 0;
}

void enterString(char str[]){
	gets(str);
}

void deleteString(char str[],char ch){
	int i,j;
	for(i=0,j=0;str[i]!='\0';i++){
		if(str[i]!=ch){
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}

void printString(char str[]){
	printf("%s\n",str);
}
