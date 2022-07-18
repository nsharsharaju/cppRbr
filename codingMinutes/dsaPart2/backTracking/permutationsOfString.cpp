#include<bits/stdc++.h>
using namespace std;

void permutations(string s,int start,int end) {
    if(start == end) {
        cout << s << endl;
        return;
    }
    for(int i=start;i<=end;i++) {
        swap(s[start],s[i]);
        permutations(s,start+1,end);
        swap(s[start],s[i]);
    }
    return;
}

int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.size()-1;
    permutations(s,start,end);
    return 0;
}