#include<bits/stdc++.h>
using namespace std;

//This function is still incomplete. So testcases are not working.
int missingNumber(vector<int> &arr, int n) 
    { 
        int i = -1;
        int count = 0;

        for(int j=0;j<n;j++) {
            if(arr[j]>0) {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        if(i==-1) return 1;
        
        for(int j=0;j<=i;j++) {
            if(arr[j]>i+1) continue;
            
            if(arr[arr[j]]<0) {
                count++;
                continue;
            }
            
            arr[arr[j]] = arr[arr[j]] * -1;
        }
        
        for(int j=0;j<=i;j++) {
            if(arr[j]>0) {
                return j+1;
            }
        }
        return i+1-count;
    } 

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << missingNumber(v,v.size()) << endl;
    return 0;
}