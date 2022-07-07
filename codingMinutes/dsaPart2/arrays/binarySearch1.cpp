#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int key) {
    int i = 0;
    int j = v.size() -1;

    while(i<=j) {
        int mid = (i+j)/2;
        if(v[mid] == key) return mid;
        if(v[mid]>key) {
            j = mid-1;
        } else {
            i = mid+1;
        }
    }
    return -1;
}

int binarySearchRecursive(vector<int> &v,int key,int i, int j) {
    if(i>j) return -1;
    int mid = (i+j)/2;
    if(v[mid] == key) return mid;
    if(v[mid] > key) {
        return binarySearchRecursive(v,key,i,mid-1);
    } else {
        return binarySearchRecursive(v,key,mid+1,j);
    }
}

int main() {
    int key;
    vector<int> v = {0,1,2,3,4,5,6,7,8};
    cin >> key;
    cout << binarySearch(v,key) << endl;
    cout << binarySearchRecursive(v,key,0,v.size()-1) << endl;
    return 0;
}