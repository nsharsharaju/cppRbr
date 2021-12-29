#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int i = 0;
    vector<vector<int>> arr;
    while(i<n) {
        vector<int> row;
        arr.push_back(row);
        if(i == 0) {
            arr[i].push_back(1);
        } else {
            for(int j = 0;j<=i;j++) {
                if (j == 0 || j == i) {
                    arr[i].push_back(1);
                }
                else {
                    arr[i].push_back(arr[i-1][j] + arr[i-1][j-1]);
                }
            }
        }
        i++;
    }
    for(auto v: arr) {
        for(auto number: v) {
            cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}