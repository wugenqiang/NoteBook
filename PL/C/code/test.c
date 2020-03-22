/*Time Limit: 1000 ms
Memory Limit: 256 mb
请统计某个给定范围[L, R]的所有整数中，数字 2 出现的次数。
比如给定范围[2, 22]，数字 2 在数 2 中出现了 1 次，在数 12 中出现 1 次，在数 20 中出现 1次，
在数 21 中出现 1次，在数 22 中出现 2 次，所以数字 2 在该范围内一共出现了 6次。*/

#include <stdio.h>

int main(){
	int i,j,temp,count=0;
	int l,r;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++){
		temp = i;
		while(temp>0){
			//获取个位
			if(temp%10==2){
				count++;
			}
			temp /= 10; 
		}

	}
	printf("%d\n",count);
	return 0;
}
