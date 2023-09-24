#include<bits/stdc++.h>
using namespace std;

void applyOperations(vector<int> &nums) {
    int n = nums.size();

    for (int i = 0; i < n-1; i++) {
        if(nums[i] == nums[i + 1]) {
            nums[i] = nums[i]*2;
            nums[i+1] = 0;
        }
    }

    int i = -1;
    int j = 0;

    while(j < n){
        if(nums[j] != 0) {
            i++;
            swap(nums[j],nums[i]);
        }
        j++;
    }
    return;
}

int main(){
    vector<int> v = {1,2,2,1,1,0};
    applyOperations(v);

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}