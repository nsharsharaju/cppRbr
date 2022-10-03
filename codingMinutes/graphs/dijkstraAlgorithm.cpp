#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    int v;
    list < pair<int, int> > *l;

    Graph(int v) {
        this->v = v;
        l = new list< pair<int,int> >[v];
    }

    void addEdge(int s, int d, int w, bool undir=true) {
        l[s].push_back(make_pair(d,w));
        if(undir) {
            l[d].push_back(make_pair(s,w));
        }
        return;
    }

    void dijkstra() {
        vector<int> dist(v,INT_MAX);
        set<pair<int,int> > s;
        dist[0] = 0;

        s.insert(make_pair(0,0));

        while(!s.empty()) {
            auto it = s.begin();
            int distTillNow = it->first;
            int node = it->second;
            s.erase(it);

            for(auto nbrPair: l[node]) {
                int nbr = nbrPair.first;
                int currentEdge = nbrPair.second;

                if (distTillNow + currentEdge < dist[nbr]) {
                    auto f = s.find(make_pair(dist[nbr],nbr));
                    if(f!=s.end()) {
                        s.erase(f);
                    }

                    dist[nbr] = distTillNow + currentEdge;
                    s.insert(make_pair(dist[nbr],nbr));
                }
            }
        }
        for(int i=0;i<v;i++) {
            cout << i << " ";
        }
        cout << endl;
        for (auto d: dist) {
            cout << d << " ";
        }
        cout << endl;
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    g.dijkstra();
    return 0;
}