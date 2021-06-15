#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

//unique

int main(){
    int intArr[] = {1,2,2,2,3,3,2,2,1};
    vector<int> v(intArr, intArr+9);
    vector<int>::iterator it;
    it = unique(v.begin(),v.end());
    v.resize(it-v.begin());
    for(it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}