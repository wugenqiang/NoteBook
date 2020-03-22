#include<bits/stdc++.h>
using namespace std;

void Badd(char *s,int i); 

int main(){
    char s[6]={'0','0','0','0','0','0'};
    for(int i=0;i<64;i++){
        cout<<s<<endl;
        Badd(s,5);      
    }
    return 0;
}

void Badd(char *s,int i){   //二进制加法器 
    if(i==-1)return;
    if(s[i]=='0')s[i]='1';
    else{
        s[i]='0';
        return Badd(s,i-1);
    }    
}
