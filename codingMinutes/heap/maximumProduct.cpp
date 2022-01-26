#include<bits/stdc++.h>
using namespace std;


int maxProduct(vector<int>& nums) {
    priority_queue<int> q;
    for(auto ele:nums) {
        q.push(ele);
    }
    int f = q.top();
    q.pop();
    int s = q.top();
    return (f-1) * (s-1);
}

int main() {
    vector<int> arr = {3,4,5,2};
    int mp = maxProduct(arr);
    cout << mp << endl;
    return 0;
}
