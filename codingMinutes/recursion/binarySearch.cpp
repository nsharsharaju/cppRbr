#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int start,int stop, int key) {
    if(start>stop) return -1;
    else {
        int mid = (start+stop)/2;
        if(v[mid] == key) {
            return mid;
        }
        else if(v[mid] > key) {
            return binarySearch(v,start,mid-1,key);
        }
        else {
            return binarySearch(v,mid+1,stop,key);
        }
    }
}

int main() {
    vector<int> input = {1,2,3,4,5,6,7,8,9,10};
    int n = input.size()-1;
    int index = binarySearch(input,0,n,11);
    cout << index << endl;
    return 0;
}