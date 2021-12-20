#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    for (int i = a.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for (auto ele : a)
        cout << ele << " ";
    cout << endl;
    return 0;
}