#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8}, {10, 11, 12}};
    for(auto v: arr) {
        for(auto number: v) {
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}