#include <bits/stdc++.h> //万能头文件 
using namespace std;
int main(){
	double a;
	scanf("%lf",&a);
	//使用%g可以自动去掉小数点后多余的0，如果是整数则显示整数
	if (a<1000){
		printf("discount=1,pay=%g\n",a);
	} 
	if (a>=1000 && a<2000){
		printf("discount=0.95,pay=%g\n",a*0.95);
	}
	if (a>=2000 && a<3000){
		printf("discount=0.9,pay=%g\n",a*0.9);
	}  
	if (a>=3000 && a<5000){
		printf("discount=0.85,pay=%g\n",a*0.85);
	}  
	if (a>=5000){
		printf("discount=0.8,pay=%g\n",a*0.8);
	} 	
	
	return 0;
}

