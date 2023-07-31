#include<bits/stdc++.h>
using namespace std;

void ss(vector<char> &v,vector<char> &tempV, int count) {
    if(count == v.size()) {
        cout << "{";
        for(auto ele:tempV) {
            cout << ele << ",";
        }
        cout << "}" << endl;
        return;
    }
    ss(v,tempV,count+1);
    tempV.push_back(v[count]);
    ss(v,tempV,count+1);
    tempV.pop_back();
    return;
}

void printAllSubsets(string input) {
    vector<char> v;
    vector<char> tempV;
    for(auto e: input) {
        v.push_back(e);
    }
    ss(v,tempV,0);
    return;
}

int main() {
    string input = "123";
    printAllSubsets(input);
    return 0;
}