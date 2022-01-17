#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
   if(arr.size()<=1) return {-1,-1};
   int i = 0;
   int j = arr.size() - 1;
   int res_i = 0;
   int res_j = arr.size() - 1;
   int minDiff = INT_MAX;
   while(i<j) {
       int tempSum = arr[i]+arr[j];
       int diff = abs(tempSum - x);
       if(diff < minDiff) {
           res_i = i;
           res_j = j;
           minDiff = diff;
       }
       if(tempSum > x) {
           j--;
       }
       else {
           i++;
       }
   }
   return {arr[res_i],arr[res_j]};
}

int main() {
    vector<int> arr = {10,22,28,29,30,40};
    int x = 54;
    auto res = closestSum(arr,x);
    cout << res.first << " " << res.second << endl;
    return 0;
}