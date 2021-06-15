#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int intArr[] = {3,7,1,4,2,8,5,3};
    vector<int> v(intArr, intArr+8);

    sort(v.begin(),v.end());

    if(binary_search(v.begin(),v.end(),10))
        cout << "found!\n";
    else
        cout << "not found.\n";
    return 0;
}
