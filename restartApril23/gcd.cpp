#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a>b) {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    int r = b%a;
    while(r!=0) {
        b = a;
        a = r;
        r = b%a;
    }
    return a;
}

int main () {
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;
}