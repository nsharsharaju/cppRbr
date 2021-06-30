#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ll long long

void solve(){
    ll N;
    cin>>N;
    N = 3*N;
    unorderd_map<string,ll> m;
    vector<ll> v;
    while(N--){
        string p;
        ll sm;
        cin >> p >> sm;
        m[p]+=sm;
    }
    for(auto &e:m) v.pb(e.second);
    sort(v.begin(),v.end());
    for (auto &e : v) cout << e << " ";
    cout << endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}