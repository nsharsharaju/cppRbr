#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    string ans;
    for(auto c: S) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ans.push_back(c);
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << vowel(s) << endl;
    return 0;
}