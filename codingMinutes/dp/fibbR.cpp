#include<bits/stdc++.h>
using namespace std;

int fibb(int n, vector<int> &v){
    if (n<2) return n;
    if(v[n]!=0) return v[n];
    return v[n] = fibb(n-1,v)+fibb(n-2,v);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    cout << fibb(n,v) << endl;
}