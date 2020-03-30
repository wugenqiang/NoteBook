#include <bits/stdc++.h> //万能头文件 
using namespace std;

struct node{
	string num;
	string name;
	string sex;
	int age;
};

int main(){
	int n,q;
	map<string,node> M;//定义一个map映射
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			node tmp;
			cin>>tmp.num>>tmp.name>>tmp.sex>>tmp.age;
			M[tmp.num]=tmp;//将学号指向对应的结构体 
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			string num;
			cin>>num;
			if((M.find(num))!=M.end()){//find查找
				cout<<M[num].num<<" "<<M[num].name<<M[num].sex<<" "<<M[num].age<<endl; 	
			}else{
				cout<<"No Answer!"<<endl;
			}
		} 
	} 
	return 0;
}

