#include<bits/stdc++.h>
using namespace std;

void combine(int arr[], int start, int mid, int stop) {
    int *tempArray = new int[(stop - start) + 1];
    int i = start;
    int j = mid+1;
    int k = 0;
    while(i<=mid && j<=stop) {
        if(arr[i] == arr[j]) {
            tempArray[k] = arr[i];
            tempArray[k+1] = arr[j];
            k = k+2;
            i++;
            j++;
        }
        else if(arr[i] < arr[j]) {
            tempArray[k] = arr[i];
            i++;
            k++;
        }
        else {
            tempArray[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid) {
        tempArray[k] = arr[i];
        i++;
        k++;
    }
    while(j<=stop) {
        tempArray[k] = arr[j];
        j++;
        k++;
    }
    k = 0;
    i = start;
    while(k < ((stop - start) + 1)) {
        arr[i] = tempArray[k];
        i++;
        k++;
    }
    delete[] tempArray;
    return;
}

void mergeSort(int arr[],int start, int stop) {
    if(start == stop) return;
    int mid = (start+stop)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,stop);
    combine(arr,start,mid,stop);
    return;
}

int main() {
    int arr[] = {10,1,9,5,4,3,2,6,7,1};
    int n = sizeof(arr)/sizeof(int);
    n = n-1;
    mergeSort(arr,0,n);
    for(auto number: arr) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}