#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &v, int key) {
    for(int i=0;i<v.size();i++) {
        if(v[i] == key) return i;
    }
    return -1;
}

int main() {
    int key;
    vector<int> v = {10,0,8,100,2};
    cin >> key;
    cout << linearSearch(v,key) << endl;
    return 0;
}
