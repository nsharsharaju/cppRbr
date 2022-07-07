#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &v) {
    int i = 0;
    int j = v.size() - 1;
    while(i<j) {
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    reverseArray(v);
    for(auto e:v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}