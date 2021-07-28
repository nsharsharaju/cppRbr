#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> u;
        u.insert(nums.begin(),nums.end());
        int longest = 0;
        int localLongest = 0;
        for(auto it = nums.begin();it != nums.end();it++) {
            //cout << *it-1 << endl;
            if(u.find(*it-1) != u.end()) continue;
            localLongest++;
            int i = 1;
            while(true){
                if(u.find(*it+i) != u.end()) {
                    localLongest++;
                    i++;
                }
                else{
                    if(localLongest>longest) longest = localLongest;
                    localLongest = 0;
                    break;
                } 
            } 
            
        }
        return longest;
    }
};

int main(){
    vector<int> v = {100,4,200,1,3,2};
    Solution s;
    int ans = s.longestConsecutive(v);
    cout << ans << endl;
    return 0;
}