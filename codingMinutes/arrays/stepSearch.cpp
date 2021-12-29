#include<bits/stdc++.h>
using namespace std;

pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key){
    pair<int, int> ans = {-1, -1};
    int i = 0, j = m - 1;
    while(i<n && j>=0) {
        if(key == arr[i][j]) {
            ans.first = i;
            ans.second = j;
            return ans;
        }
        if(key < arr[i][j]) {
            j--;
        }
        else {
            i++;
        }
    }
    return ans;
}

int main()
{
    int arr[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int n = 4,m = 4;
    pair<int,int> ans = staircaseSearch(arr,4,4,100);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}