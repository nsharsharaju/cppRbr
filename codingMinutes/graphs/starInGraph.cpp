#include<bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& v) {
    unordered_map<int,int> um;
    for(auto edge:v) {
        if(um.find(edge[0]) == um.end()) {
            um[edge[0]] = 1;
        } else{
            um[edge[0]]++;
        }
        if(um.find(edge[1]) == um.end()) {
            um[edge[1]] = 1;
        } else{
            um[edge[1]]++;
        }
    }
    int max = INT_MIN;
    int maxIndex = 0;

    for(auto p:um) {
        if(p.second > max) {
            max = p.second;
            maxIndex = p.first;
        }
    }
    return maxIndex;
}

int main(){
    vector<vector<int>> input{{1,2},{2,3},{4,2}};
    cout << findCenter(input);
    return 0;
}