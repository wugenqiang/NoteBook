#include <bits/stdc++.h>
//#include <iostream>
//#include <stack>
using namespace std;

int main(){
	char s[300];
	scanf("%s", &s);
	int len = strlen(s);
	stack<char> st;
	for(int i = 0; i < len; i++){
		if(!st.empty()){
			char now = st.top();
			if(s[i] == ')' && now == '(' || s[i] == ']' && now == '['){
				st.pop();
			}else{
				st.push(s[i]);
			}
		}else{
			st.push(s[i]);
		}
	}
	if(!st.empty()){
		printf("No\n");
	}else{
		printf("YES\n");
	}
	return 0;
}
