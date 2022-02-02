#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        int V;
        list<int> *l;

        Graph(int v) {
            V = v;
            l = new list<int>[V];
        };

        void addEdge(int s,int e,bool undir=true) {
            l[s].push_back(e);
            if(undir) {
                l[e].push_back(s);
            }
        };

        void topological_sort() {
            vector<int> indegree(V,0);

            for(int i=0;i<V;i++) {
                for(auto nbr: l[i]) {
                    indegree[nbr]++;
                }
            }

            queue<int> q;
            for(int i=0;i<indegree.size();i++){
                if(indegree[i] == 0){
                    q.push(i);
                }
            }

            while(!q.empty()) {
                int front = q.front();
                cout << front << " ";
                q.pop();
                for(auto nbr: l[front]) {
                    indegree[nbr]--;
                    if(indegree[nbr] ==  0) {
                        q.push(nbr);
                    }
                }
            }
            cout << endl;
            return;
        }

};

int main(){
    Graph g(6);
    g.addEdge(0,2,false);
    g.addEdge(2,3,false);
    g.addEdge(3,5,false);
    g.addEdge(4,5,false);
    g.addEdge(1,4,false);
    g.addEdge(1,2,false);

    g.topological_sort();
}