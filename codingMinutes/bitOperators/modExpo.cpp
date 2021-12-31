#include<bits/stdc++.h>
using namespace std;

int power(int x, int y, int mod) {
    int res = 1;
    x = x % mod;
    if(x == 0 ) return 0;
    while(y>0) {
        int lastBit = (y&1);
        if(lastBit) {
            res = (res*x)%mod;
        }
        y = y >> 1;
        x = (x*x) % mod;
    }
    return res;
}

int main() {
    int x,y,mod;
    cin >> x >> y >> mod;
    int ans = power(x,y,mod);
    cout << ans << endl;
    return 0;
}

