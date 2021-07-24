#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m, l;
    cin >> n >> m >> l;
    unordered_map<ll, ll> um;
    ll listNumber = 1;
    while (m--)
    {
        ll count;
        cin >> count;
        while (count--)
        {
            ll colorId;
            cin >> colorId;
            um.insert({colorId, listNumber});
        }
        listNumber++;
    }
    vector<ll> colorStrip;
    while (l--)
    {
        ll id;
        cin >> id;
        colorStrip.push_back(um[id]);
    }
    int ans = 1;
    for (ll i = 1; i < colorStrip.size(); i++)
    {
        if (colorStrip[i - 1] != colorStrip[i]) ans++;
    }
    cout << ans << endl;
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
