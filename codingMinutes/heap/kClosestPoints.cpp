#include<bits/stdc++.h>
using namespace std;

float calculateDistance(vector<int> v) {
    return sqrt(v[0]*v[0] + v[1]*v[1]);
}

class Compare{
    public:
        bool operator()(pair<int,float> a, pair<int,float> b) {
            return a.second > b.second;
        }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,float>,vector<pair<int,float>>, Compare> q;
        int i = 0;
        for(auto e: points) {
            float distance = calculateDistance(e);
            q.push({i,distance});
            i++;
        }
        i = 0;
        vector<vector<int>> ans;
        while(i<k) {
            auto top = q.top();
            ans.push_back(points[top.first]);
            q.pop();
            i++;
        }
        return ans;
        
    }
};