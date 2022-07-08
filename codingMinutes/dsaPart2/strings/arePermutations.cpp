#include<bits/stdc++.h>
using namespace std;

bool arePermutations(string s1, string s2) {
    if(s1.size() != s2.size()) return false;
    unordered_map<char,int> um;

    for(auto e: s1) {
        if(um.find(e) == um.end()) {
            um[e] = 1;
        } else {
            um[e]++;
        }
    }

    for(auto e: s2) {
        if(um.find(e) == um.end() || um[e] == 0) {
            return false;
        } else {
            um[e]--;
        }
    }

    for(auto p:um) {
        if(p.second != 0) return false;
    }

    return true;
}

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    cout << arePermutations(s1,s2) << endl;
    return 0;
}