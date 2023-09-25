#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({1});

    if(numRows == 1) return ans;
    for(int i = 2;i<=numRows;i++) {
        vector<int> row;
        int c = 0;
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                row.push_back(1);
            } else {
                row.push_back(ans[i-2][c] + ans[i-2][c+1]);
                c++;
            }
        }
        ans.push_back(row);
    }
    return ans;
}

int main(){
    vector<vector<int>> ans = generate(4);

    for(auto v: ans) {
        for(auto ele: v) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}