#include<bits/stdc++.h>
using namespace std;

void subsets(string &s,int start,int end,string &o) {
    if(start > end) {
        cout << o << endl;
        return;
    }
    o.push_back(s[start]);
    subsets(s,start+1,end,o);
    o.pop_back();
    subsets(s,start+1,end,o);
    return;
}

int main() {
    string s;
    cin >> s;
    string o = "";
    subsets(s,0,s.size()-1,o);
    return 0;
}