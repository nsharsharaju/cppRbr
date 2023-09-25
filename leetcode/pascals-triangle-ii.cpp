#include<bits/stdc++.h>
using namespace std;

vector<int> generate(int rowIndex) {
    vector<int> prev;
    vector<int> curr = {1};

    if(rowIndex == 1) return curr;
    for(int i = 2;i<=rowIndex;i++) {
        prev = curr;
        curr = {};
        int c = 0;
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                curr.push_back(1);
            } else {
                curr.push_back(prev[c] + prev[c+1]);
                c++;
            }
        }
    }
    return curr;
}

int main(){
    vector<int> ans = generate(5);
    for(auto ele: ans) {
       cout << ele << " ";
    }
    return 0;
}