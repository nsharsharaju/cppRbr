#include<bits/stdc++.h>
using namespace std;

void helper(unordered_map<int,vector<char>> &cm,stack<int> s, string output) {
    if(s.empty()) {
        cout << output << endl;
        return;
    }
    char num = s.top();
    s.pop();
    for(auto ch: cm[num]) {
        helper(cm,s,output+ch);
    }
    return;
}

void generateStrings(int n){
    unordered_map<int,vector<char>> charMap;
    charMap[2] = {'A','B','C'};
    charMap[3] = {'D','E','F'};
    charMap[4] = {'G','H','I'};
    charMap[5] = {'J','K','L'};
    charMap[6] = {'M','N','O'};
    charMap[7] = {'P','Q','R','s'};
    charMap[8] = {'T','U','V'};
    charMap[9] = {'W','X','Y','Z'};

    stack<int> s;
    while(n) {
        int r = n%10;
        s.push(r);
        n = n/10;
    }
    helper(charMap,s,"");
    return;
}

int main() {
    int n;
    cin >> n;
    generateStrings(n);
    return 0;
}