#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
   int n = a.size();
   if(n==0) return a;
   k = k%n;
   while(k--) {
       int last = a[n-1];
       int j = n-1;
       while(j>=1) {
           a[j] = a[j-1];
           j--;
       }
    a[0] = last;
   }
    return a;
}

int main() {
    vector<int> input = {1,2,3,4,5};
    vector<int> answer = kRotate(input,3);
    for(auto ele: answer) cout << ele << " ";
    cout << endl;
    return 0;
}