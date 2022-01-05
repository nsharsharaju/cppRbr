#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0,1,0,1,0,0,0,1};
    int n = v.size()-1;
    if(v.size()>1) {
        int i = 0;
        int j = n;
        while(i<j) {
            while(v[i] == 0 && i<=n) {
                i++;
            }
            while(v[j] == 1 && j>=0) {
                j--;
            }
            if(i>=j) {
                break;
            }
            swap(v[i],v[j]);
            i++;
            j++;
        }
    }
    for(auto number: v) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}