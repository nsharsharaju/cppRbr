#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0,1,0,1,0,0,0,1};
    int n = v.size()-1;
    if(v.size()>1) {
        int i = -1;
        int j = 0;
        while(j<=n) {
            if(v[j] == 0) {
                i++;
                swap(v[i],v[j]);
            }
            j++;
        }
    }
    for(auto number: v) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}