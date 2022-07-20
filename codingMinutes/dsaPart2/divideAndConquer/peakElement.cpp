#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (true)
    {
        int mid = (i + j) >> 1;
        int me = arr[mid];

        if (mid == n - 1 && me>=arr[mid-1])
        {
            return mid;
        }

        if (mid == 0 && me>=arr[mid+1])
        {
            return mid;
        }

        if (me >= arr[mid + 1] && me >= arr[mid - 1]) {
            return mid;
        }

        if (arr[mid + 1] > me)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
}

int main() {
    vector<int> v = {1,13};
    cout << peakElement(v,v.size()) << endl;
    return 0;
}