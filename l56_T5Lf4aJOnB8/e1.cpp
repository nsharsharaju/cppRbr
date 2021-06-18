#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
    return 0;
}