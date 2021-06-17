//Range Based For Loop in C++>=11

#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v(5);
    for(int i=0; i<5; i++) v[i]=i+1;
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;

    int arr[5];
    for(int i=0;i<5;i++) arr[i] = i+5;
    for(int x: arr)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}