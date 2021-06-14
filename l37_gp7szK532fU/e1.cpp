#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0;i<10;i++){
        v.push_back(i);
    }
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
}