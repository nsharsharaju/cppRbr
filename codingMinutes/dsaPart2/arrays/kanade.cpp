#include<bits/stdc++.h>
using namespace std;

int largestSubArraySum(int arr[],int n){
   int largest = 0,cs = 0;
   for(int i=0;i<n;i++) {
       cs+=arr[i];
       if(cs<0) cs = 0;
       largest = max(largest,cs);
   }
   return largest;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << largestSubArraySum(arr,n) << endl;
    return 0;
}