#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<string>> umap;

vector<string> getBinaryString(int n) {
    if(n == 0) {
        vector<string> output = {""};
        return output;
    } 
    else if(n == 1) {
        vector<string> output = {"0","1"};
        return output;
    }
    else {
        vector<string> output;
        vector<string> res1 = getBinaryString(n-2);
        vector<string> res2 = getBinaryString(n-1);
        for(auto str: res2) {
            output.push_back("0"+str);
        }
        for(auto str: res1) {
            output.push_back("10"+str);
        }
        return output;
    }
}

vector<string> getBinaryStringOptimized(int n) {
    if(n == 0) {
        if(umap.find(0) == umap.end()) {
            umap[0] = {""};
        }
        return umap[0];
    } 
    else if(n == 1) {
        if(umap.find(1) == umap.end()) {
            umap[1] = {"0","1"};
        }
        return umap[1];
    }
    else {
        if(umap.find(n) == umap.end()) {
        vector<string> output;
        vector<string> res1 = getBinaryString(n-2);
        vector<string> res2 = getBinaryString(n-1);
        for(auto str: res2) {
            output.push_back("0"+str);
        }
        for(auto str: res1) {
            output.push_back("10"+str);
        }
        umap[n] = output;
        }
        return umap[n];
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> result = getBinaryStringOptimized(n);
    cout << result.size() << endl;
    // for(auto ele: result) {
    //     cout << ele << endl;
    // }
    return 0;
}