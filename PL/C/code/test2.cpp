//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q;//定义一个优先队列
	q.push(1);//入队 
	q.push(2);
	q.push(3);
	while(!q.empty()){//判读队列不为空 
		cout << q.top() << endl; //队首元素 
		q.pop();//出队 
	} 
    return 0;
}


