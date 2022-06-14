#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<char,char> um;
    
    Solution() {
        this->um[')'] = '(';
        this->um['}'] = '{';
        this->um[']'] = '[';
    }
    
    bool isValid(string s) {
        stack<char> st;
        for(auto c: s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(top!=um[c]) return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};