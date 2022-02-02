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

    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir) {
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout << i <<"-->";
            for(auto node:l[i]) {
                cout << node << ",";
            }
            cout << endl;
        }
    }

    void bfs(int source){
        queue<int> q;
        vector<bool> visited(V,false);
        q.push(source);
        visited[source] = true;
        while(!q.empty()) {
            int top = q.front();
            cout << top << " ";
            for(auto e: l[top]) {
                if(!visited[e]) q.push(e);
                visited[e] = true;
            }
            q.pop();
        }
        cout << endl;
    }

    void dfs(int source){
        stack<int> s;
        vector<bool> visited(V,false);
        s.push(source);
        visited[source] = true;
        while(!s.empty()) {
            int top = s.top();
            s.pop();
            cout << top << " ";
            for(auto e: l[top]) {
                if (!visited[e])
                {
                    s.push(e);
                    visited[e] = true;
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int node,bool* visited) {
        visited[node] = true;
        cout << node << " ";
        for(auto nbr: l[node]) {
            if(!visited[nbr]) {
                dfsHelper(nbr,visited);
            }
        }
    }

    void dfsRecursive(int source){
        bool *visited = new bool[V]{false};
        dfsHelper(source,visited);
        cout << endl;
    }
};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.addEdge(2,3);
    g.printAdjList();
    g.bfs(1);
    g.dfs(1);
    g.dfsRecursive(1);
}