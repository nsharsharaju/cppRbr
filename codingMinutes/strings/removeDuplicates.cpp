#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    unordered_map<char,bool> um;
    for(auto c: s) {
        if(um.find(c) == um.end()) {
            um[c] = true;
        }
    }
    string ans;
    for(auto p: um) {
        ans.push_back(p.first);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {
    string input;
    cin >> input;
    string output = removeDuplicate(input);
    cout << output << endl;
    return 0;
}