#include <bits/stdc++.h>
using namespace std;

void bubbleSortOptimized(int *arr, int begin, int end)
{
    bool isSwap = false;
    for (int i = end - 1; i >= begin; i--)
    {
        for (int j = begin; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwap = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!isSwap)
            return;
        isSwap = false;
    }
    return;
}

int main()
{
    int arr[] = {4, 2, 1, 9, 5, 8, 7, 6, 10, 3};
    int n = sizeof(arr)/sizeof(int);
    n = n - 1;
    bubbleSortOptimized(arr,0,n);

    for(auto ele: arr) {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}