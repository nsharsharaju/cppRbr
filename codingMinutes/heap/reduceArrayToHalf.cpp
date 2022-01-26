#include<bits/stdc++.h>
using namespace std;

int minSetSize(vector<int>& arr) {
    unordered_map<int,int> um;
    for(auto ele: arr) {
        if(um.find(ele) == um.end()) {
            um[ele] = 1;
        }
        else {
            um[ele]++;
        }
    }
    priority_queue<int> q;
    for(auto p: um) {
        q.push(p.second);
    }
    int halfSize = arr.size()/2;
    int i = arr.size();
    int count = 0;
    while(!q.empty() && i>halfSize) {
        int top = q.top();
        i-=top;
        count++;
        q.pop();
    }
    return count;
}

int main() {
    vector<int> input = {3,3,3,3,5,5,5,2,2,7};
    int minSize = minSetSize(input);
    cout << minSize << endl;
    return 0;
}