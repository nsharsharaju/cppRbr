#include<bits/stdc++.h>
using namespace std;

int partition(int* arr,int start, int end){
    int i = start-1;
    int j = start;

    while(j<=end-1) {
        if(arr[j]<arr[end]) {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

void quickSort(int* arr, int start, int end) {
    if(start>=end) return;

    int i = partition(arr,start,end);
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,end);
    return;
}

int main() {
    int arr[] = {10,1,9,5,4,3,2,6,7,1};
    int n = sizeof(arr)/sizeof(int);
    n = n-1;
    quickSort(arr,0,n);
    for(auto number: arr) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}