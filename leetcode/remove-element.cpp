#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val) {
    int s = nums.size();
    if(s==0) return 0;
    if(s==1) {
        if(nums[0] == val) return 0;
        else return 1;
    }
    int g = -1;

    for (int i = 0; i < s; i++)
    {
        if (nums[i] != val)
        {
            g++;
            swap(nums[g], nums[i]);
        }
    }
    return g+1;
}

int main() {
    vector<int> v = {3,2,2,3,4};
    int k = removeElement(v,3);

    for(int i=0;i<k;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}