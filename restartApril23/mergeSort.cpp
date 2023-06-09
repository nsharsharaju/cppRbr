#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start, int mid, int end) {
    int *tempArray = new int[(end-start)+1];

    int i = start;
    int j = mid+1;
    int t = 0;

    while(i<=mid && j<=end) {
        if(arr[i]<=arr[j]) {
            tempArray[t] = arr[i];
            i++;
            t++;
        } else {
            tempArray[t] = arr[j];
            j++;
            t++;
        }
    }

    while(i<=mid) {
        tempArray[t] = arr[i];
        i++;
        t++;
    }

    while(j<=end) {
        tempArray[t] = arr[j];
        j++;
        t++;
    }

    t = 0;
    i = start;
    while(i<=end) {
        arr[i] = tempArray[t];
        i++;
        t++;
    }
    delete[] tempArray;
    return;
}

void mergeSort(int *arr,int start, int end) {
    if(start == end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    return;
}

int main() {
    int arr[] = {4,2,1,9,5,8,7,6,10,3};
    int n = sizeof(arr)/sizeof(int);
    n = n-1;
    mergeSort(arr,0,n);
    for(int i=0;i<=n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}