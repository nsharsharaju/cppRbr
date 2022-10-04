#include<bits/stdc++.h>
using namespace std;

bool canVisitAllRooms(vector<vector<int> >& rooms) {
    int v = rooms.size();
    vector<bool> visited(v,false);

    visited[0] = true;
    queue<int> q;
    q.push(0);

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        for(auto nbr:rooms[front]){
            if(!visited[nbr]) {
                visited[nbr] = true;
                q.push(nbr);
            }
        }
    }
    for(auto isVisited: visited) {
        if(!isVisited) return false;
    }
    return true;
}