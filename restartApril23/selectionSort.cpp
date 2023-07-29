#include <bits/stdc++.h>
using namespace std;

int indexOfMax(int *arr, int begin, int end) {
    int max = INT_MIN;
    int indexOfMax = begin;

    for(int i=begin;i<=end;i++) {
        if(arr[i]>max) {
            max = arr[i];
            indexOfMax = i;
        }
    }
    return indexOfMax;
}

void selectionSort(int *arr,int begin,int end) {
    for(int i=end;i>=1;i--) {
        int maxIndex = indexOfMax(arr,begin,i);
        swap(arr[maxIndex],arr[i]);
    }
    return;
}

int main()
{
    int arr[] = {4, 2, 1, 9, 5, 8, 7, 6, 10, 3};
    int n = sizeof(arr) / sizeof(int);
    n = n - 1;
    selectionSort(arr,0,n);

    for(auto ele:arr) {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}