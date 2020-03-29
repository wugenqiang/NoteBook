#include <stdio.h>

struct node{
	int year,month,day;
}p;
int f[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	while(scanf("%d%d%d",&p.year,&p.month,&p.day)!=EOF){
		//判断是否闰年
		if((p.year%400==0)||(p.year%4==0)&&(p.year%100!=0)){
			f[2] = 29;
		} else{
			f[2] = 28;
		}
		int flag = 0;
		//判断月份输入是否合法
		if(p.month<1||p.month>12){
			flag = 1;
		} 
		//判断天的输入是否合法
		int i;
		for(i=1;i<=12;i++){
			if(p.day<0||p.day>f[i]){
				flag = 1;
			}
		} 
		if(flag){
			printf("Input error!\n");
			continue;
		}
		int ans = p.day;
		for(i=1;i<p.month;i++){
			ans += f[i];
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
