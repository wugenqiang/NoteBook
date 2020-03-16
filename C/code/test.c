#include <stdio.h>
#include <string.h> 

int main(){
	char str[3][20];	//定义二维字符数组 
	char string[20];	//定义一维字符数组，作为交换字符串时候的临时字符数组	 
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0){
		strcpy(string,str[0]);
	}else{
		strcpy(string,str[1]);
	}
	if(strcmp(str[2],string)>0){
		strcpy(string,str[2]);
	}
	printf("%s\n",string);
	
	return 0;
}
