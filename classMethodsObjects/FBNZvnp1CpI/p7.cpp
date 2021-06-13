#include<iostream>
using namespace std;

void gun(string s){
    if(s[0]=='\0') return;
    gun(s.substr(1));
    cout<<s[0];
}

int main(){
    string s;
    cin>>s;
    gun(s);
    cout<<endl;
    return 0;
}