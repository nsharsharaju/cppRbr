#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main() {
    string str = "Jay Bansal";
    for(char x: str)
        cout<<x<<" ";
    
    cout<<endl;

    for(int x: {1,2,3,4,5})
        cout<<x<<" ";

    cout<<endl;
    return 0;
}