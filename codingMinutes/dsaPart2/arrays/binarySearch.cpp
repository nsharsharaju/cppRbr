#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n, int k){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == k)
            return mid;
        else if(arr[mid]>k){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(int);
    cout << "Enter something to Search: ";
    int k;
    cin >> k;
    cout << binary_search(arr,n,k) << endl;
    return 0;
}