#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

void helper(int k, vector<int> v, int i) {
    if(i == v.size()) {
    }
    else {
        if(v[i] == k) {
            vec.push_back(i);
        }
        helper(k,v,i+1);
    }
    return;
}

vector<int> findAllOccurences(int k, vector<int> v){
    vec.clear();
    helper(k,v,0);
    return vec;
}

int main(){
    vector<int> v = {1,1,2,2,1,3,3,1};
    vector<int> ans = findAllOccurences(1,v);
    for(auto number: ans) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}