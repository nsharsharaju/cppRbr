#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i = 0;i< n;i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,15,9,12,6,4};
    int n = sizeof(arr)/sizeof(int);
    cout << linear_search(arr,n,12) << endl;
    return 0;
}