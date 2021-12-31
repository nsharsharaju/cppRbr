#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int n) {
    if(n == 0 || n == 1) return true;
    else {
        return (arr[0] < arr[1] && isArraySorted(arr+1,n-1));
    }
}

int main() {
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr)/sizeof(int);
    bool ans = isArraySorted(arr,n);
    cout << ans << endl;
    return 0;
}