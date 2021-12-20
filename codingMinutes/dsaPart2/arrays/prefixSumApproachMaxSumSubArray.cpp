#include<bits/stdc++.h>
using namespace std;

int largestSubArraySum(int arr[],int n){
    int largest_sum = 0;
    int prefixSum[n] = {0};
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subArraySum = i > 0 ? prefixSum[j] - prefixSum[i-1] : prefixSum[j];
            largest_sum = max(largest_sum,subArraySum);
        }
    }
    return largest_sum;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << largestSubArraySum(arr,n) << endl;
    return 0;
}