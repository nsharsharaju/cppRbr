#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int fun(int i) {
    return ++i;
}

int main(){
    vector<int> v1,v2;
    for(int i=1;i<6;i++)
        v1.push_back(i);
    v2.resize(v1.size());
    transform(v1.begin(),v1.end(),v2.begin(),fun);
    
    for(auto it=v2.begin();it!=v2.end();it++)
        cout << " "<<*it;

    return 0;
}