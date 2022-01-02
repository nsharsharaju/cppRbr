#include<bits/stdc++.h>
using namespace std;

void bubble_sort_rec(int arr[], int n) {
    if(n == 1){
        return;
    }
    else {
        for(int j = 0; j<=n-2;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
        bubble_sort_rec(arr, n-1);
    }
}

void bubble_sort_rec_2(int arr[], int n, int j) {
    if(n == 1 || n == 0){
        return;
    }
    if(j == n-1) {
        bubble_sort_rec_2(arr,n-1,0);
        return;
    }
    if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
    }
    bubble_sort_rec_2(arr,n,j+1);
}


int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort_rec(arr,n);

    for(auto number: arr) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}