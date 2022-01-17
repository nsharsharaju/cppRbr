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

void reverseStack(stack<int> &s) {
    if(!s.empty()) {
        int top = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s,top);
        return;
    }
    return;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseStack(s);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}