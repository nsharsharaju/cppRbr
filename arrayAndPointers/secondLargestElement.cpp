#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void secondLargestElement(int *a,int size) {
   int first = INT_MIN;
   int second = INT_MIN;

    for(int i=0;i<size;i++) {
        if(first<a[i]) {
            second = first;
            first = a[i];
        }
        if(a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    if (second == INT_MIN)
        cout << "No Second Largest Element\n";
    else
        cout << second;
    return;
}

int main(){
    int arr[5] = {5,4,3,2,1};
    secondLargestElement(arr,5);
    return 0;
}