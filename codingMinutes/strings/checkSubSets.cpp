#include<bits/stdc++.h>
using namespace std;

bool isSubSets(string s1, string s2) {
    int i = s1.length()-1;
    int j = s2.length()-1;
    while(j!=-1) {
        if(i==-1) return false;
        if(s1[i] == s2[j]) j--;
        i--;
    }
    return true;
}

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    cout << isSubSets(s1,s2) << endl;
    return 0;
}