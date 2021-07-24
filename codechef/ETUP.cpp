#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    ll n,q;
    cin >> n >> q;
    vector<ll> v;
    while(n--) {
        ll number;
        cin >> number;
        number%=2;
        v.pb(number);
    }
    while(q--) {
        ll l,r;
        cin >> l >> r;
        l--;
        r--;
        if(v.size()<=2) cout << "0" << endl;
        else {
            ll ans = 0;
            for(int i=l;i<r-1;i++) {
                for(int j=i+1;j<r;j++) {
                    for( int k = j+1;k<r+1;k++) {
                        if((v[i]+v[j]+v[k])%2 == 0) ans++;
                    }
                }
            }
            cout << ans << endl;
        }
    }
}

int main() {
	ll t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
