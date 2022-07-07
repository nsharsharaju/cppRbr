#include<bits/stdc++.h>
using namespace std;

int l1(vector<int> &v) {
    int n = v.size();
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int subArraySum = 0;
            for(int k=i;k<=j;k++) {
                subArraySum+=v[k];
            }
            maxSum = max(maxSum,subArraySum);
        }
    }
    return maxSum;
}

int l2(vector<int> &v) {
    int n = v.size();
    vector<int> ps(n,0);

    ps[0] = v[0];
    for(int i=1;i<n;i++) {
        ps[i] = ps[i-1] + v[i];
    }
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int subArraySum;
            if(i=0) {
                subArraySum = ps[j];
            } else {
                subArraySum = ps[j] - ps[i-1];
            }
            maxSum = max(maxSum,subArraySum);
        }
    }
    return maxSum;
}

int kanade(vector<int> &v) {
    int cs = 0;
    int largestSum = 0;

    for(auto e:v) {
        cs+=e;
        cs = cs<0 ? 0 : cs;
        largestSum = max(largestSum,cs);
    }
    return largestSum;
}

int main() {
    vector<int> v = {-2,3,4,-1,5,-12,6,1,3};
    // cout << l1(v) << endl;
    // cout << l2(v) << endl;
    cout << kanade(v) << endl;
    return 0;
}