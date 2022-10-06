#include<bits/stdc++.h>
using namespace std;

 bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    if(source == destination) return true;
    vector<vector<int>> adjList(n,vector<int>());

    for(auto edge: edges) {
        adjList[edge[0]].push_back(edge[1]);
        adjList[edge[1]].push_back(edge[0]);
    }

    vector<bool> visited(n,false);
    queue<int> q;
    q.push(source);
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        for(auto nbr:adjList[front]) {
            if(nbr == destination) return true;
            if(!visited[nbr]) {
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }
    return false;
}

int main(){
    int n = 3;
    vector<vector<int>> edges = {
        {0,1},
        {1,2},
        {2,0}
    };
    int source = 0;
    int destination = 2;
    cout << validPath(n,edges,source,destination) << endl;
    return 0;
}