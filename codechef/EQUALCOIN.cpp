#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

void solve()
{
    ll X, Y;
    cin >> X >> Y;
    ll halfSum = (X+2*Y)/2;
    bool check1 = halfSum % 2 == 0 && (X / 2 + Y) % 2 == 0;
    bool check2 = halfSum % 2 != 0 && Y % 2 == 0;
    if (X % 2 == 0 && (check1 || check2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}