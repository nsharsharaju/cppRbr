#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {3, 2, 5, 4, 1};
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int prev = i - 1;
        while (prev >= 0 && a[prev] > current) {
            a[prev+1] = a[prev];
            prev--;
        }
        a[prev+1] = current;
    }
    for(auto ele: a) cout << ele << " ";
    cout << endl;
    return 0;
}