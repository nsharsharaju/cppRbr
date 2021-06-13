#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v(5,15);
    for(int i=0;i<=4;i++){
        cout<<v.at(i)<<endl;
    }
    return 0;
}