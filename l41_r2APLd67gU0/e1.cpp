#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

bool comp(int a, int b){
    return (a>b);
}

int main(){
    int intArr[] = {3,7,1,4,2,8,5,3};
    vector<int> v(intArr,intArr+8);

    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    sort(v.begin(),v.end(),comp);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}