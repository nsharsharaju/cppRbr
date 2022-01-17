#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int x) {
    if(!s.empty()) {
        int top = s.top();
        s.pop();
        insertAtBottom(s,x);
        s.push(top);
        return;
    }
    s.push(x);
}

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    insertAtBottom(s,5);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}