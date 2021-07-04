#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    int maxSoFar = 0;
    int maxEndingHere = 0;
    
    for(int i = 0;i < n;i++) {
        maxEndingHere+=arr[i];
        if(maxEndingHere<0) maxEndingHere = 0;
        
        if(maxEndingHere>maxSoFar) maxSoFar = maxEndingHere;
    }
    return maxSoFar;
}

int main(){
    vector<int> v = {-1,2,3,4,-2,6,-8,3};
    cout << maxSubarraySum(v) << endl;
    return 0;
}