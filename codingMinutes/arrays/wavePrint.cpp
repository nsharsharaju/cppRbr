#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[][5] = {
        {1, 2, 3, 4, 3},
        {5, 6, 7, 8, 20},
        {9, 10, 11, 12, 24},
        {13, 14, 15, 16, 26}};

    int startRow = 0;
    int endRow = 3;
    int startCol = 0;
    int endCol = 4;

    for(int i=endCol;i>=startCol;i=i-2) {
        for(int j=startRow;j<=endRow;j++) {
            cout << arr[j][i] << " ";
        }
        if (i - 1 < startCol)
            break;
        for(int j=endRow;j>=startRow;j--) {
            cout << arr[j][i-1] << " ";
        }
    }
    cout << endl;
    return 0;
}