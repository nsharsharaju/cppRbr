#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> v) {
    vector<int> count(101,0);
    for(auto e:v) {
        count[e]++;
    }
    int p = 0;
    for(int i=0;i<count.size();i++) {
        if(count[i]!=0) {
            int freq = count[i];
            while(freq--) {
                v[p] = i;
                p++;
            }
        }
    }
    return v;
}

int main() {
    vector<int> v = { 10, 14, 28, 11, 7, 16, 30, 50, 25, 18};
    vector<int> res = countSort(v);
    for(auto e:res) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}