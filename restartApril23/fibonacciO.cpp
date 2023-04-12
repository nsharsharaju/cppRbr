#include<bits/stdc++.h>
using namespace std;

int fibonnaci(int n,unordered_map<int,int> &um) {
    if(um.find(n) == um.end()) {
        um[n] = fibonnaci(n-1,um) + fibonnaci(n-2,um);
    }
    return um[n];
}

int main() {
    unordered_map<int,int> um;
    um[0] = 0;
    um[1] = 1;
    int n;
    cin >> n;
    int output = fibonnaci(n,um);
    cout << "Fibonacci is " << output << endl;
    return 0;
}