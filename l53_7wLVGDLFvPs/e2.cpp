//Using Structures instead of Class

#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

struct A{
    void operator()(int i) {cout<<i+5<<" ";}
};

int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++) v[i] = i+1;

    struct A obj;
    for_each(v.begin(),v.end(),obj);
    cout<<endl;
    return 0;
}
