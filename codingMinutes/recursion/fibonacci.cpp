#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans << endl;
    return 0;
}