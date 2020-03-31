#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct node{
	double w, m;
}p[1005];

bool cmp(node a, node b){
	//按照每毫升的价格升序
	return a.w/a.m < b.w/b.m; 
}
int main(){
	int n, x;
	while(scanf("%d%d", &x, &n) != EOF){
		if(x == -1 && n == -1){
			break;
		}
		int i;
		for(i = 1; i <= n; i++){
			scanf("%lf%lf", &p[i].m, &p[i].w);
		}
		sort(p + 1, p + 1 + n, cmp);
		double ans = 0;
		for(i = 1; i <+ n; i++){
			if(x >= p[i].w){
				ans += p[i].m;
				x -= p[i].w;
			}else{
				ans += p[i].m * x / p[i].w;
				break;
			}
		}
		printf("%.3lf\n", ans);
	} 
	
	return 0;
}
