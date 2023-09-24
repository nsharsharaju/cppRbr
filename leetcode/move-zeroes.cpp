#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums) {
    int i = -1;
    int j = 0;
    while(j<nums.size()) {
        if(nums[j]!=0) {
            i++;
            swap(nums[i],nums[j]);
        }
        j++;
    }
    return;
}

int main() {
    vector<int> v = {0,1,2,0};
    moveZeroes(v);
    for (auto it : v){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}