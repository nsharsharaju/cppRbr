#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v) { // 1, 2, 5, 3, 4
    if(v.size() == 0 ) return {};
    if(v.size() == 1) return {-1};
    stack<int> s;
    reverse(v.begin(),v.end());
    s.push(-1);
    int prev = v[0];
    for(int i=1;i<v.size();i++) {
        if(v[i]<prev) {
            s.push(prev);
        } 
        else {
            if(v[i]<s.top())
            {
                s.push(s.top());
            }
            else {
                s.push(-1);
            }
        }
        prev = v[i];
    }
    v.clear();
    while(!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}

int main() {
    vector<int> v = {10,4,5,2,25};
    v = nextGreaterElement(v);
    for(auto ele: v) {
        cout << ele << " ";
    }
    return 0;
}