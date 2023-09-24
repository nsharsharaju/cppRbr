#include<bits/stdc++.h>
using namespace std;

int firstUniqueCharacter(string &s){
    unordered_map<char,int> um;

    for(int i = 0; i < s.length();i++){
        if(um.find(s[i]) == um.end()) {
            um[s[i]] = 1;
        } else {
            um[s[i]]++;
        }
    }

    for(int i = 0; i < s.length();i++) {
        if(um[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main(){
    string input = "loveleetcode";
    int output = firstUniqueCharacter(input);
    cout << output << endl;
    return 0;
}