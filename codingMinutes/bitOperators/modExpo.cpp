#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, p;
    int res = 1;
    cin >> x >> y >> p;
    x = x % p;
    if(x == 0 ) return 0;
    while(y>0) {
        int lastBit = (y&1);
        if(lastBit) {
            res = (res*x)%p;
        }
        y = y >> 1;
        x = (x*x) % p;
    }
    cout << res << endl;
    return 0;
}