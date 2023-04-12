#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    while(n!=0) {
        s.push(n & 1);
        n = n >> 1;
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return 0;
 }