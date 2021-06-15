#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

bool IsEven(int i) { return ((i%2) == 0); }

int main(){
    vector<int> v;
    for(int i=0;i<10;i++) v.push_back(i);
    auto it = find_if(v.begin(),v.end(),IsEven);
    if(it != v.end())
        cout << "Even number is found in v";
    else
        cout << "Even number NOT found in v";
    return 0;
}