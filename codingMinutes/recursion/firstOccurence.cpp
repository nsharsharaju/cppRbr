#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    if(n == 0) return -1;
    if(arr[0] == key) return 0;
    else {
        int occurence = firstOccurence(arr + 1, n - 1, key);
        if(occurence == -1) return -1;
        else return 1+occurence;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int index = firstOccurence(arr,n,20);
    cout << index << endl;
    return 0;
}