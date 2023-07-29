#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int begin, int end)
{
    for (int i = end - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}

int main()
{
    int arr[] = {4, 2, 1, 9, 5, 8, 7, 6, 10, 3};
    int n = sizeof(arr) / sizeof(int);
    n = n - 1;
    bubbleSort(arr, 0, n);

    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}