#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int myop2(int x, int y) { return y%x;}
int myop1(int x, int y) { return x%y;}

int main(){
    int arr[] = {1,2,3,5,9,11,12};
    int out[7];

    adjacent_difference(arr, arr+7, out, myop1);
    for(auto x:out)
        cout<<x<<" ";
    cout<<endl;

    adjacent_difference(arr, arr+7, out, myop2);
    for(auto x:out)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}