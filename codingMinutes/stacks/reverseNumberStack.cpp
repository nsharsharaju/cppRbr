#include<bits/stdc++.h>
using namespace std;

int reverse(int n) {
    string nS = to_string(n);
    stack<char> s;
    for(auto c: nS) {
        s.push(c);
    };
    nS = "";
    while(!s.empty()) {
        nS.push_back(s.top());
        s.pop();
    }
    return stoi(nS);
}

int main() {
    int n;
    cin >> n;
    n = reverse(n);
    cout << n << endl; 
}