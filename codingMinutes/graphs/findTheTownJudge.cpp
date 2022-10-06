#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> iod(n+1,pair<int,int>{0,0});
        for(auto t:trust) {
            iod[t[0]].second++;
            iod[t[1]].first++;
        }

        for(int i=1;i<=n;i++) {
            auto p = iod[i];
            if(p.first == n-1 && p.second == 0) return i;
        }
        return -1;
}

int main(){
    int n = 3;
    vector<vector<int>> trust{
        {1,3},
        {2,3}
    };
    cout << findJudge(n,trust) << endl;
    return 0;
}