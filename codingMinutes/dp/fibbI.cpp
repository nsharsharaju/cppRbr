#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << n << endl;
        return 0;
    }
    int pp = 0;
    int p = 1;
    n = n - 2;
    while (n--)
    {
        int temp = p;
        p = p + pp;
        pp = temp;
    }
    cout << p + pp << endl;
    return 0;
}