//Example of adjacent_find()

#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){

    int arr[] = {5,2,5,30,20,13,10,10,20};
    vector<int> v(arr,arr+8);
    vector<int>::iterator it;

    it = adjacent_find(v.begin(),v.end());
    if(it!=v.end())
        cout<<"Found : "<<*it<<endl;
    return 0;
}