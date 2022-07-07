#include<bits/stdc++.h>
using namespace std;

void printPairs(vector<int> &v) {
    int n = v.size();

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            cout << '{' << v[i] << ',' << v[j] << '}' << endl;
        }
    }
    return;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    printPairs(v);
    return 0;
}