#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p = 1, ans = 0;
    while(n>0) {
        int lastBit = (n&1);
        if(lastBit) {
            ans = ans + p;
        }
        p = 10*p;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}