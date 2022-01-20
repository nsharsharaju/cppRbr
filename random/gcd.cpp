#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a>b) swap(a,b);
    while(b%a!=0) {
        int temp = b;
        b = a;
        a = temp % a;
    }
    cout << a << endl;
    return 0;
}