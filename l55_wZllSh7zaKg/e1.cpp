#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,9,11,12};
    int out[7];

    adjacent_difference(arr,arr+7,out);
    for(auto x:out)
        cout<<x<<" ";
    cout<<endl;

    adjacent_difference(arr,arr+7,out,multiplies<int>());
    for(auto x:out) // multiples return product ( return a*b )
        cout<<x<<" ";
    cout<<endl;

    return 0;
}