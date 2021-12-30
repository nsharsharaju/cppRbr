#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin >> n >> i;
    int bitMask = ~(1 << i);
    n = (n&bitMask);
    cout << n << endl;
    return 0;
}