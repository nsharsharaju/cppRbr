#include<bits/stdc++.h>
using namespace std;

bool arePermutations(string A, string B) {
    unordered_map<char,int> um1, um2;
    for(auto c: A) {
        if(um1.find(c) == um1.end()) {
            um1[c] = 1;
        }
        else {
            um1[c]++;
        }
    }
    for(auto c: B) {
        if(um2.find(c) == um2.end()) {
            um2[c] = 1;
        }
        else {
            um2[c]++;
        }
    }
    for(auto p: um1) {
        if(um2.find(p.first) == um2.end()) {
            return false;
        }
        if(um2[p.first] != um1[p.first]) {
            return false;
        }
    }
    return true;
}

int main() {
    string A,B;
    cin >> A >> B;
    cout << arePermutations(A,B) << endl;
    return 0;
}