#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int intArr[] = {3,7,1,4,2,8,5,3};
    vector<int> v (intArr, intArr+8);

    auto it = find(v.begin(),v.end(),5);
    if(it != v.end())
        cout << "Element found in V: " << it-v.begin()+1 << "\n";
    else
        cout << "Not found";
}