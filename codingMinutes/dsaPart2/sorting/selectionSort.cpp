#include<bits/stdc++.h>
using namespace std;

int minIndex(vector<int> &v,int i,int j) {
    int min = v[i];
    int minIndex = i;

    for(int k=i+1;k<=j;k++) {
        if(v[k] < min) {
            min = v[k];
            minIndex = k;
        }
    }
    return minIndex;
}

void selectionSort(vector<int> &v) {
    int n = v.size();

    for(int i=0;i<=n-2;i++) {
        int minI = minIndex(v,i,n-1);
        swap(v[i],v[minI]);
    }
    return;
}

int main() {
    vector<int> v = {10,2,100,4,20,2};
    selectionSort(v);
    for(auto e:v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}