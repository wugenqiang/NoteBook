#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int ans = 3*n;//停留时间 
		int pre = 1, next;//之前停留的楼层，接下来要去的楼层 
		while (n--) {
			cin >> next;
			if (pre > next)
				ans += 4*(pre-next);//下降 
			else if (pre < next)
				ans += 6*(next-pre);//上升 
			//else 上次要停留的楼层与这次相同
			pre = next; 
		}
		cout << ans << endl; 
	}
	return 0;
}
