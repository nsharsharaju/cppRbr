#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    
    int i = 0;
    int j = size-1;
    while(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}