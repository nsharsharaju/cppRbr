#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int stop) {
    int i = start-1;
    int j = start;
    int pivot = arr[stop];
    while(j<=stop-1) {
        if(arr[j]<=pivot) {
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    swap(arr[i+1],arr[stop]);
    return i;
}

void quickSort(int arr[], int start, int stop) {
    if(start>=stop) return;
    else {
        int i = partition(arr, start, stop);
        quickSort(arr,start,i);
        quickSort(arr,i+2,stop);
        return;
    }
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