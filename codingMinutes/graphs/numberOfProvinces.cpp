#include<bits/stdc++.h>
using namespace std;

int findCircleNum(vector<vector<int>> &isConnected)
{
    vector<vector<int>> adjList;
    int n = isConnected.size();

    for(int i=0;i<n;i++) {
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i!=j && isConnected[i][j]==1) {
                temp.push_back(j);
            }
        }
        adjList.push_back(temp);
    }
    int count = 0;
    vector<bool> visisted(n,false);
    int i = 0;

    while(i<n) {
        while(visisted[i] && i<n) {
            i++;
        }
        if(i == n) break;
        queue<int> q;
        q.push(i);
        visisted[i] = true;
        while(!q.empty()) {
            int front = q.front();
            q.pop();
            for(auto nbr:adjList[front]) {
                if(!visisted[nbr]) {
                    visisted[nbr] = true;
                    q.push(nbr);
                }
            }
        }
        count++;
        i++;
    }
    return count;
}

int main(){
    vector<vector<int>> input = {
        {1,0,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {1,0,1,1}
    };
    cout << findCircleNum(input) << endl;
    return 0;
}