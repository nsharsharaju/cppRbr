#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(0);
    q.push(1);
    q.push(2);

    while(!q.empty()) {
        cout << '\t' << q.top();
        q.pop();
    }
    cout<<endl;
}