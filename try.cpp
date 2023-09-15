#include <bits/stdc++.h>
using namespace std;
#define ll long long
int Divno(ll n)
{
    ll cnt = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            cnt++;
        }
    }
    if (n > 1) cnt++;
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (Divno(i) == 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}