//#include<bits/stdc++.h>
//using namespace std;

#include<iostream>
using namespace std;
int reverse(int num)
{
	int result = 0;//翻转结果 
	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}
int main()
{
	int a, b;
	while (cin >> a >> b) {//EOF结束输入
		int c = reverse(a);
		int d = reverse(b);
		cout << c + d << endl;
	}
	return 0;
}
