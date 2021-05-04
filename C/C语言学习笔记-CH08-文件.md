## 第八章 文件

### 8.1 文件输入输出

* linux 用 > 和 < 做重定向

![image-20200306180200439](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185336.png)

* 打开文件的标准代码：

  * ```c
    FILE *fp = fopen("file","r");
    if(fp){
        fscanf(fp,...);
        fclose(fp);
    }else{
        ...
    }
    ```

  * Example 01：

  * ```c
    #include <stdio.h> 
    
    int main(int argc,char const *argv[]){
    	FILE *fp = fopen("12.in","r");
    	if(fp){
    		int num;
    		fscanf(fp,"%d",&num);
    		printf("%d\n",num);
    		fclose(fp);
    	} else{
    		printf("无法打开文件\n");
    	}
    	
    	return 0;
    }
    ```

> fopen

![image-20200306181622981](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185344.png)



### 8.2 二进制文件

* 其实所有的文件最终都是二进制的
* 文本文件读写：
  * more、tail
  * cat
  * vi
* 二进制文件需要专门的程序来读写
* 文本文件的输入输出是格式化，可能经过转码



### 8.3 文件练习题

> 文件练习举例：

* Example 01：

  * student.h

  * ```c
    #ifndef _STUDENT_H_
    #define _STUDENT_H_
    
    //const int STR_LEN = 20;
    #define STR_LEN 20
    
    typedef struct _student{
    	char name[STR_LEN];
    	int gender;
    	int age;
    }Student;
    
    #endif
    ```

  * main.c

  * ```c
    #include <stdio.h>
    #include "student.h"
    
    void getList(Student aStu[],int number);
    int save(Student aStu[],int number);
    
    int main(int argc, char *argv[]) {
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
    ```

* 测试结果：

![image-20200306204450498](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185351.png)

### 8.4 文件中定位

![image-20200306204846477](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185754.png)

* Example 02：

  * read.c

  * ```c
    #include <stdio.h>
    #include "student.h"
    
    void read(FILE *fp,int index);
    
    int main(){
    	FILE *fp = fopen("student.data","r");
    	if(fp){
    		fseek(fp,0L,SEEK_END);
    		long size = ftell(fp);
    		int number = size / sizeof(Student);
    		int index = 0;
    		printf("有%d个数据，你要看第几个：",number);
    		scanf("%d",&index);
    		read(fp,index-1);
    		fclose(fp);
    	}
    	return 0;	
    }
    
    void read(FILE *fp,int index){
    	fseek(fp,index * sizeof(Student),SEEK_SET);
    	Student stu;
    	if(fread(&stu,sizeof(Student),1,fp) == 1){
    		printf("第%d个学生：",index+1);
    		printf("\t姓名：%s\n",stu.name);
    		printf("\t性别：");
    		switch(stu.gender) {
    			case 0:printf("男\n");break;
    			case 1:printf("女\n");break;
    			case 2:printf("其他\n");break;
    		}
    		printf("\t年龄：%d\n",stu.age);
    	}
    }
    ```

* Test Result:

![image-20200306210748268](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185358.png)

* 可移植性

![image-20200306211106200](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185404.png)

