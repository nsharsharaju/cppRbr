#include<bits/stdc++.h>
using namespace std;

int count(vector<int>& v) { 
    int s = v.size();
    if(s <= 2) return 0;
    int c = 0;
    for(int i = 1;i<=s-2;i++) {
        if((v[i]<v[i+1] && v[i]<v[i-1]) || v[i]>v[i+1] && v[i]>v[i-1]){
            c++;
        }
    }
    return c;
}

int main() {
    vector<int> v = {2,4,1,1,6,5};
    int o = count(v);
    cout  << o << endl;
    return 0;
}