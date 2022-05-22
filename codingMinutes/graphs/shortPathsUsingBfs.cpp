#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i,int j, bool undir=true){
        l[i].push_back(j);
        if(undir) {
            l[j].push_back(i);
        }
    }

    void printAdjList() {
        for(int i=0;i<V;i++){
            cout << i << "-->";
            for(auto nbr:l[i]) {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }

    void bfs(int source) {
        vector<bool> visited(V,false);
        queue<int> q;
        q.push(source);
        visited[source] = true;
        while(!q.empty()) {
            int currVertex = q.front();
            cout << currVertex << " ";
            q.pop();
            for(auto nbr: l[currVertex]) {
                if(!visited[nbr]) {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout << endl;
    }

    void dfs(int source) {
        vector<bool> visisted(V,false);
        stack<int> s;
        s.push(source);
        visisted[source] = true;
        while(!s.empty()) {
            int currVertex = s.top();
            cout << currVertex << " ";
            s.pop();
            for(auto nbr: l[currVertex]) {
                if(!visisted[nbr]) {
                    s.push(nbr);
                    visisted[nbr] = true;
                }
            }
        }
        cout << endl;
    }

    void shortestPathsUsingBfs(int source) {
        vector<bool> visisted(V,false);
        vector<int> dist(V,0);
        queue<int> q;
        q.push(source);
        visisted[source] =true;
        while(!q.empty()) {
            int currVertex = q.front();
            q.pop();
            for(auto nbr: l[currVertex]) {
                if(!visisted[nbr]) {
                    dist[nbr] = dist[currVertex] + 1;
                    q.push(nbr);
                    visisted[nbr] = true;
                }
            }
        }
        for (int i = 0; i < V; i++)
        {
            cout << "Distances" << endl;
            cout << i << "---" << dist[i] << endl;
        }
        return;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.bfs(2);
    g.dfs(2);
    g.shortestPathsUsingBfs(2);
    return 0;
}