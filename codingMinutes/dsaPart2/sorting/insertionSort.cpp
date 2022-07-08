#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int temp = v[i];
        int j = i-1;
        while(j>=0 && temp < v[j]) {
            j--;
        }
        int k = i;
        while(k>=j+2) {
            v[k] = v[k-1];
            k--;
        }
        v[j+1] = temp;
    }
    return;
}

int main() {
    vector<int> v = { 10, 14, 28, 11, 7, 16, 30, 50, 25, 18};
    insertionSort(v);
    for(auto e:v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}