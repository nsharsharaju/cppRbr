#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(auto c: s) {
            if(c == '#') {
                if(!s1.empty()) s1.pop();
            } else {
                s1.push(c);
            }
        }

        for(auto c: t) {
            if(c == '#') {
               if(!s2.empty())  s2.pop();
            } else {
                s2.push(c);
            }
        }

        if(s1.size() != s2.size()) return false;

        while(!s1.empty()) {
            if(s1.top() != s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return true;
}

int main(){
    string s = "a#c";
    string t = "b";

    cout << backspaceCompare(s,t) << endl;
    return 0;
}