#include <bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int> &p, int n, vector<vector<int>> &res,vector<vector<int>>& graph) {
	p.push_back(s);
	if(s==n-1) {
		res.push_back(p);
		p.pop_back();
		return;
	}
	for (auto nbr : graph[s]) {
		dfs(nbr,p,n,res,graph);
	}
	p.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> res;
	vector<int> p;
	dfs(0,p,graph.size(),res,graph);
	return res;

}


int main() {
	vector<vector<int>> v{{1,2},{3},{3},{}};
    vector<vector<int>> res = allPathsSourceTarget(v);
	for (auto v1: res){
		for (auto ele: v1) {
			cout << ele << " ";
		}
		cout << endl;
	}
	return 0;
}