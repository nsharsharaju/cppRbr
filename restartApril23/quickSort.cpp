#include<bits/stdc++.h>
using namespace std;

int partition(int* arr, int begin, int end) {
    int pv = arr[end];
    int p = begin-1;
    int i = begin;
    while(i<end) {
        if(arr[i]<pv) {
            p++;
            swap(arr[i],arr[p]);
        }
        i++;
    }
    swap(arr[p+1],arr[end]);
    return p+1;
}

void quickSort(int* arr, int begin, int end) {
    if(begin>=end) return;
    int p = partition(arr,begin,end);
    quickSort(arr,begin,p-1);
    quickSort(arr,p+1,end);
    return;
}

int main() {
    int arr[] = {4,2,1,9,5,8,7,6,10,3};
    int n = sizeof(arr)/sizeof(int);
    n = n-1;
    quickSort(arr,0,n);
    for(auto ele:arr) {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}