#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    while(n!=0) {
        int r = n % 2;
        n = n/2;
        s.push(r);
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return 0;
}