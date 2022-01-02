#include<bits/stdc++.h>
using namespace std;

int power(int a,int n) {
    if(n == 0) return 1;
    else if(n == 1) return a;
    else {
        return a * power(a, n-1);
    }
}

int main() {
    int a,n;
    cin >> a >> n;
    int ans = power(a,n);
    cout << ans << endl;
    return 0;
}