#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v) { // 1, 2, 5, 3, 4
    stack<int> st;
    vector<int> nge(v.size(), 0);

    for (int i = 0; i < v.size(); i++)
    {
        while(!st.empty() && v[i]>v[st.top()]) {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main() {
    vector<int> v = {10,4,5,2,25};
    vector<int> nge = nextGreaterElement(v);
    for(auto ele: v) {
        cout << ele << " ";
    }
    cout << endl;
    for(auto index: nge) {
        if(index == -1) {
            cout << -1 << " ";
        } else {
            cout << v[index] << " ";
        }
    }
    cout << endl;
    return 0;
}