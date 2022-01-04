#include<bits/stdc++.h>
using namespace std;

void permute(string &s, int start, int end) {
    if(start == end) {
        cout << s << endl;
        return;
    } else {
        for(int i = start;i<=end; i++) {
            swap(s[start],s[i]);
            permute(s,start+1,end);
            swap(s[i],s[start]);
            return;
        }
    }
}

int main() {
    string input;
    cin >> input;
    int n = input.size()-1;
    permute(input,0,n);
    return 0;
}