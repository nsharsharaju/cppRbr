#include <iostream>
using namespace std;
#define ll long long

void solve()
{
    ll X, Y, A, B, K;
    cin >> X >> Y >> A >> B >> K;
    ll petrolPrice = X + (K * A);
    ll dieselPrice = Y + (K * B);
    if (petrolPrice < dieselPrice)
    {
        cout <<"PETROL"<< endl;
    }
    else if (petrolPrice == dieselPrice)
    {
        cout <<"𝚂𝙰𝙼𝙴 𝙿𝚁𝙸𝙲𝙴"<< endl;
    }
    else
    {
        cout <<"DIESEL"<< endl;
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