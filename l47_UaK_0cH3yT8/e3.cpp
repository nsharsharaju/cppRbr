#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v;
    
    for(int i=1;i<10;i++)
        v.push_back(i);

    rotate(v.begin(),v.begin()+3,v.end());

    for(auto it = v.begin(); it!=v.end(); it++)
        cout << ' ' << *it;

    return 0;
}