#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};

    int n = 4, m = 4;
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << " ";
        }
        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
        }
        for (int i = endCol - 1; i >= startCol; i--)
        {
            cout << arr[endRow][i] << " ";
        }
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            cout << arr[i][startCol] << " ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
    cout << endl;
    return 0;
}