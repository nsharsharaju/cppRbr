#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,n);
    for(auto e:arr)
        cout << e << " ";
    cout << endl;
    return 0;
}