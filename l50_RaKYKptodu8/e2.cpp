#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

class Compare {
    public:
        bool operator() (int a, int b){
            return (a>b);
        }
};

int main(){
    priority_queue<int, vector<int>, Compare> q;
    q.push(2);
    q.push(0);
    q.push(1);
    while(!q.empty()){
        cout << q.top() <<" ";
        q.pop();
    }
    return 0;
}
