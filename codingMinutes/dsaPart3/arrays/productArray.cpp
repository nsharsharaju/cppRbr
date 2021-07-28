#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair;
#define pi pair<int,int>;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);

        for(int i=1;i<nums.size();i++) {
            left[i] = left[i-1] * nums[i-1];
        }

         for(int i=nums.size()-2;i>=0;i--) {
            right[i] = right[i+1] * nums[i+1];
        }

        vector<int> output(nums.size(),1);

        for(int i=0;i<nums.size();i++) {
            output[i] = left[i]*right[i];
        }

        return output;
    }
};

int main(){
    Solution s;
    vector<int> input = {1,2,3,4};
    vector<int> result = s.productExceptSelf(input);

    for(auto e:result) {
        cout << e << " ";
    }
    cout << endl;
}