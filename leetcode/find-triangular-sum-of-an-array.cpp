#include<bits/stdc++.h>
using namespace std;

int triangularSum(vector<int> &nums) {
    int n = nums.size();
    vector<int> curr = {};
    n--;
    while(n>=1) {
        for(int i=0;i<n;i++) {
            curr.push_back((nums[i]+nums[i+1])%10);
        }
        nums = curr;
        curr = {};
        n--;
    }
    return nums[0];
}

int main() {
    vector<int> input = {5};
    int ans = triangularSum(input);
    cout << ans << endl;
    return 0;
}