#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin >> n >> i;
    int mask = (1<<i);
    n = (n|mask);
    cout << n << endl;
    return 0;
}