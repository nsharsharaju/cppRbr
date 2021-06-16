#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    list<int> l;
    for(int i=1;i<=10;i++)
        l.push_front(i);

    for(auto it = l.begin();it != l.end();it++)
        cout << " " << *it;

    return 0;
}