

#include <stdio.h>
int func(int a[],int n);//函数声明 
int main(){
	int t,n,i;
	scanf("%d",&t);//有t组数据输入
	while(t--){
		int result = 0;//耗时
		scanf("%d",&n);//记录每组数据的个数
		int a[n];//定义数组，存放每组数据
		i = n;
		while(i--){
			scanf("%d",&a[n-1-i]);//记录现在所在楼层 
		} 
		result = func(a,n);//计算耗时	
		printf("%d\n",result);//输出result 
	}
	
	return 0;
}

int func(int a[],int n){
	int sum = 0,i;
	int last = 1;//定义初始楼层
	int now;//定义现在所在楼层
	for(i=0;i<n;i++){
		now = a[i];//现在所在楼层 
		if(now>last){
			sum += 3 + (now - last) * 6;//电梯往上 
		}else{
			sum += 3 + (last - now) * 4;//电梯往下 
		}
		last = now;//重新修改上一层楼层 
	}
	
	return sum;
}
