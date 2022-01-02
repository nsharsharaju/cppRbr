#include<bits/stdc++.h>
using namespace std;

int fastPower(int a,int n) {
    if(n == 0) return 1;
    else{
        int powerSquare = fastPower(a,n/2);
        if(n&1) {
            return a * powerSquare * powerSquare;
        }
        else {
            return powerSquare * powerSquare;
        }
    }
}

int main() {
    int a, n;
    cin >> a  >> n;
    int ans = fastPower(a,n);
    cout << ans << endl;
    return 0;
}