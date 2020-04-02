#include<iostream>
using namespace std;
int days[] = {0, 30, 31, 30, 31, 31, 30, 31, 30, 31};//4月之后每月的天数，第一个元素为0便于计数 
string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int cal_days(int y, int d)
{
	//计算该日期与4月12相隔的天数 
	int num = 0;
	for (int i = 0; i <= y-4; i++)
		num += days[i];
	num += d;
	num -= 12;
	return num;
}
int main()
{
	int ans = 4;
	int y, d;
	cin >> y >> d;
	ans += cal_days(y, d);
	ans %= 7;//计算星期 
	cout << week[ans] << endl;
	return 0;
}
