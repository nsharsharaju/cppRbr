#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int n, int key) {
    if(n == 0) return -1;
    int subIndex = lastOccurence(arr+1,n-1,key);
    if(subIndex == -1) {
        if(arr[0] == key) {
            return 0;
        }
        else {
            return -1;
        }
    }
    else {
        return subIndex + 1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    cout << lastOccurence(arr,n,1) << endl;
    return 0;
}