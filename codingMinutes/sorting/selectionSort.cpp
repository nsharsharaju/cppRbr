#include<bits/stdc++.h>
using namespace std;


int findMinEleIndex(vector<int> &a, int start, int end) {
    int min = start;
    for (int i = start + 1;i<=end;i++) {
        if(a[i]<a[min]) min = i;
    }
    return min;
}

int main() {
    vector<int> a = {3, 2, 1, 5, 4};
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minEleIndex = findMinEleIndex(a,i,n-1);
        swap(a[i],a[minEleIndex]);
    }
    for(auto ele: a) cout << ele << " ";
    cout << endl;
    return 0; 
}