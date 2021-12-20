#include<bits/stdc++.h>
using namespace std;

void printSubArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout << arr[k] << ",";
            }
            cout<< endl;
        }
        cout << endl;
    }
    return;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    printSubArray(arr,n);
    return 0;
}