#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

bool myFunction(int i, int j) {
    return (i==j+3);
}

int main(){
    int arr[] = {5,20,23,30,30,20,13,10,10,20};
    vector<int> v(arr,arr+8);
    vector<int>::iterator it;

    it = adjacent_find(v.begin(),v.end(),myFunction);
    if(it!=v.end())
        cout<<"Found : "<<*it<<endl;
    return 0;
}