## 第五章 字符串

> 字符数组：char word[] = {'H','e','l','l','o','!'};
>
> 字符串：char word[] = {'H','e','l','l','o','!','\0'};

* 字符串以0结尾的一串字符，以数组的形式存在，以数组或指针的形式访问

### 5.1 字符串变量和常量

* char * str = "Hello";
* char word[] = "Hello";
* char line[10] = "Hello";

* Example 01：

```c
#include <stdio.h> 

int main(){
	char *s = "Hello World\0";
	char s1[] = "Hello World\0";
	s1[0] = 'B';
	
	printf("s=%s\n",s);
	printf("s1=%s\n",s1);
	printf("Here!s1[0]=%c\n",s1[0]); 
	return 0;
}
```

### 5.2 字符串输入输出

* scanf 读入一个单词（到空格、tab或回车为止）

```c
char string[8];
scanf("%s",string);
printf("%s",string);
```

### 5.3 空字符串

* char buffer[100] = "";	//这是一个空的字符串，buffer[0] == '\0'；
* char buffer[] = "";     //这个数组的长度只有1

字符串数组



### 5.4 字符串函数

putchar

* int putchar(int c);
* 向标准输出写一个字符
* 返回写了几个字符，EOF(-1)表示写失败

getchar

* int getchar(void)
* 从标准输入读入一个字符
* 返回类型时int是为了返回EOF(-1)
* windows-----ctrl+Z
* linux-----------ctrl+D

> 案例：

* Example 01：

```c
#include <stdio.h> 

int main(){
	int ch;
	while((ch = getchar()) != EOF){
		putchar(ch);
	}
	printf("EOF\n");
	
	return 0;
}
```

> 在使用字符串处理函数时，应当在程序文件的开头用 #include <string.h> 把 ”string.h“ 文件包含到本文件中，`string.h` 标准库中包含函数：

strlen

* 测字符串长度的函数

* size_t strlen(const char *s);
* 返回s的字符串长度（不包括结尾的0）

* Example 01：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char line[] = "Hello";
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	
	return 0;
}
```

* Example 02：用mylen自定义函数，替代库中strlen

```c
#include <stdio.h> 
#include <string.h>

int mylen(const char *s){
	
	int idx = 0;
	while(s[idx]!='\0'){
		idx++;
	}
	return idx;
}

int main(){
	char line[] = "Hello";
	printf("strlen=%lu\n",mylen(line));
	printf("sizeof=%lu\n",sizeof(line));
	
	return 0;
}
```

strcmp

* 字符串比较函数

* int strcmp(const char *s1,const char *s2);
* 比较两个字符串，返回：
  * 0：s1 == s2
  * 1：s1 > s2
  * -1：s1 < s2

* Example 01：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n",strcmp(s1,s2));
	
	return 0;
}
```

* Example 02：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",'a'-'A');
	
	return 0;
}
```

* Example 03：

```c
#include <stdio.h> 
#include <string.h>

int mycmp(const char *s1,const char *s2){
	int idx = 0;
	while(s1[idx] == s2[idx] && s1[idx] != '\0'){
//		if(s1[idx] != s2[idx]){
//			break;
//		}else if(s1[idx] == '\0'){
//			break;			
//		}
		idx++;
	}
	return s1[idx] - s2[idx];
}

int main(){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a'-'A');
	
	return 0;
}
```

* Example 04：

```c
#include <stdio.h> 
#include <string.h>

int mycmp(const char *s1,const char *s2){
		while(*s1 == *s2 && *s1 != '\0'){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main(){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a'-'A');
	
	return 0;
}
```

strcpy

* char *strcpy(char *restrict dst, const char *restrict src);
* 把src的字符串拷贝到dst
* restrict表明src和dst不重叠（C99）
* 返回dst，为了能链起代码

> 复制一个字符串

```c
//动态申请内存
char *dst = (char*)malloc(strlen(src)+1);
//拷贝src到dst
strcpy(dst,src);
```

* Example 01：自定义版本----数组

```c
#include <stdio.h> 
#include <string.h>

int mycpy(char *dst,char *src){
	int idx = 0;
	while(src[idx]){
		dst[idx] = src[idx];
		idx++;
	}
	//dst[idx] = src[idx];
	dst[idx] = '\0';
	return dst;
}

int main(){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%s\n",strcpy(s1,s2));
	
	return 0;
}
```

* Example 02：自定义版本----指针

```c
#include <stdio.h> 
#include <string.h>

int mycpy(char *dst,char *src){
	char *ret = dst;
//	while(*src){
////		*dst = *src;
////		dst++;
////		src++;
//		*dst++ = *src++;	
//	}	
	while(*dst++ = *src++){
	}	
	*dst = '\0';
	return ret;
}

int main(){
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%s\n",strcpy(s1,s2));
	
	return 0;
}
```

strncpy

* 将一个字符串2中前面n个字符复制字符串2中，但复制的字符个数不多于str1中原有的字符(不包括'\0')
* strncpy(str1,str2,2);

* Example 01：

```c
#include <stdio.h> 
#include <string.h>

int mycpy(char *dst,char *src){
	int idx = 0;
	while(src[idx]){
		dst[idx] = src[idx];
		idx++;
	}
	//dst[idx] = src[idx];
	dst[idx] = '\0';
	return dst;
}

int main(){
	char s1[] = "abc";
	char s2[] = "ACd";
	printf("%s\n",strncpy(s1,s2,2));
	
	return 0;
}
```

strcat

* 字符串连接函数

* char *strcat(char *restrict s1, const char *restrict s2);
* 把s2拷贝到s1的后面，接成一个长的字符串
* 返回s1
* s1必须具有足够的空间
* Example 01：

```c
#include <stdio.h>

int main(){
	char str1[30] = {"I am "};
	char str2[] = {"a senior."};
	puts(strcat(str1,str2));
	return 0;
} 
```

注： 用 puts 和 gets 函数只能输出或输入一个字符串，不能写成 puts(str1,str2); gets(str1,str2);

strchr

* 在字符串中找字符
* char * strchr(const char *s,int c);
* 返回NULL表示没有找到

* Example 01：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s[] = "hello";
	char *p = strchr(s,'l');
	p = strchr(p+1,'l');
	printf("%s\n",p);
	
	return 0;
}
```

* Example 02：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s[] = "hello";
	char *p = strchr(s,'l');
	char *t = (char*)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("%s\n",t);
	free(t);
	
	return 0;
}
```

* Example 03：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s[] = "hello";
	char *p = strchr(s,'l');
	char c = *p;
	*p = '\0';
	
	char *t = (char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	
	return 0;
}
```

strrchr

* Example 01：

```c
#include <stdio.h> 
#include <string.h>

int main(){
	char s[] = "hello";
	char *p = strchr(s,'l');
	p = strrchr(p,'l');
	printf("%s\n",p);
	
	return 0;
}
```

strstr

* 字符串中找字符串
* char *strstr(const char *s1, const char *s2);
* char *strcasestr(const char *s1, const char *s2);

strlwr

* 将字符串中大写字母转换为小写字母函数
* Example 01：

```c
#include <stdio.h> 

int main(){
	char c[]="ABCDefG";
	printf("%s\n",strlwr(c));
	return 0;
}
```

strupr

* 将字符串中小写字母转换为大写字母函数

* Example 01：

```c
#include <stdio.h> 

int main(){
	char c[]="ABCDefG";
	printf("%s\n",strupr(c));
	return 0;
}
```

安全问题

* 要考虑

