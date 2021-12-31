#include<bits/stdc++.h>
using namespace std;

void printNumbers(int n) {
    if(n == 0) return;
    else {
        cout << n << " ";
        printNumbers(n-1);
        return;
    }
}

int main() {
    int n;
    cin >> n;
    printNumbers(n);
    cout << endl;
    return 0;
}