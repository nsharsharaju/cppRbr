#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int intArr[] = {1,2,3,3,2,1,1,2};
    vector<int> v(intArr,intArr+8);
    int c = count (v.begin(),v.end(),1);
    cout << "1 Occurs " << c << " times.";
    return 0;
}