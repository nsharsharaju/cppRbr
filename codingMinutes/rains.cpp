#include<bits/stdc++.h>
using namespace std;
#define pb push_back

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        int max = 0;
        int rains = 0;
        for(auto it = height.begin();it!=height.end();it++) {
            if(*it>max) max = *it;
            left.pb(max);
        }
        max = 0;
        for(auto it = height.rbegin();it!=height.rend();it++) {
            if(*it>max) max = *it;
            right.pb(max);
        }
        reverse(right.begin(),right.end());
        for(int i = 0;i<height.size();i++){
            rains+= min(left[i],right[i]) - height[i];
        }
        return rains;
    }
};

int main(){
    Solution s;
    vector<int> input = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << s.trap(input) << endl;
    return 0;
}