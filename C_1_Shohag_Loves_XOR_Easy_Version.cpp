#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, m;
        cin >> x >> m;
        ll ans = 0;
        for (ll i = 1; i <= m; i++)
        {
            ll temp = x ^ i;
            if ((temp != 0) && (x % temp == 0 || i % temp == 0))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}