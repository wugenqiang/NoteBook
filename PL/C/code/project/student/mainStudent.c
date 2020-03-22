#include <stdio.h>
#include "student.h"

void getList(Student aStu[],int number);
int save(Student aStu[],int number);

int main1(int argc, char *argv[]) {
	int number = 0;
	printf("输入学生数量：");
	scanf("%d",&number);
	Student aStu[number];
	
	getList(aStu,number);
	if(save(aStu,number)){
		printf("保存成功\n");
	}else{
		printf("保存失败\n");
	}
	
	return 0;
}

void getList(Student aStu[],int number){
	char format[STR_LEN];
	//向字符串输出 
	sprintf(format,"%%%ds",STR_LEN-1);
	//%19s 
	int i;
	for(i=0;i<number;i++){
		printf("第%d个学生：\n",i);
		printf("\t姓名：");
		scanf(format,aStu[i].name); 
		printf("\t性别(0-男，1-女，2-其他)：");
		scanf("%d",&aStu[i].gender);
		printf("\t年龄：");
		scanf("%d",&aStu[i].age); 
	}
}

int save(Student aStu[],int number){
	int ret = -1;
	FILE *fp = fopen("student.data","w");
	if(fp){
		ret = fwrite(aStu,sizeof(Student),number,fp);
		fclose(fp);
	}
	return ret == number;
}
