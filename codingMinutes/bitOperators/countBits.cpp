#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int bitsCount = 0;
    while(n>0) {
        int lastBit = (n&1);
        bitsCount = bitsCount + lastBit;
        n = n >> 1;
    }
    cout << bitsCount << endl;
    return 0;
}