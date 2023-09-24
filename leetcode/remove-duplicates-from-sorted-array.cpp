#include<bits/stdc++.h>
using namespace std;

int removeDuplicateFromSortedArray(vector<int> &nums) {
    int k = 0;
    int s = nums.size();
    if(nums.size() == 0) return k;
    if(nums.size() == 1) return k+1;
    int c,n;

    for (int i = 0; i < s-1; i++)
    {
        c = nums[i];
        n = nums[i+1];
        if (c != n) {
            nums[k] = c;
            k++;
        }
    }
    nums[k] = nums[s-1];
    k++;
    return k;
}

int main() {
    vector<int> v = {0,0,1,1,2};
    int k = removeDuplicateFromSortedArray(v);
    for(int i=0;i<k;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}