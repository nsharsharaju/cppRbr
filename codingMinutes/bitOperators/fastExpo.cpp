#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int ans = 1;
    while (p > 0)
    {
        int lastBit = (p & 1);
        if (lastBit)
        {
            ans = ans * n;
        }
        n = n * n;
        p = p >> 1;
    }
    cout << ans << endl;
    return 0;
}