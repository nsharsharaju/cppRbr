#include<bits/stdc++.h>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> um1;
        unordered_map<int,bool> um2;
        vector<int> ans;
        for(auto num: nums1) {
            if(um1.find(num) == um1.end()) {
                um1[num] = true;
            }
        }
        for(auto num: nums2) {
            if(um2.find(num) == um2.end()) {
                um2[num] = true;
            }
        }
        for(auto p: um1) {
            if(um2.find(p.first) != um2.end()) {
                ans.push_back(p.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
}
