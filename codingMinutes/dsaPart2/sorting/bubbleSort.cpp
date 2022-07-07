#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v) {
    int n = v.size();

    for(int i=n-2;i>=0;i--) {
        bool isSorted = false;
        for(int j=0;j<=i;j++) {
            if(v[j] > v[j+1]) {
                isSorted = false;
                swap(v[j],v[j+1]);
            }
        }
        if(isSorted) return;
    }
    return;
}

int main() {
    vector<int> v = {10,2,100,4,20,2};
    bubbleSort(v);
    for(auto e:v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}