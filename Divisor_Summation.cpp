#include <bits/stdc++.h>
#pragma GCC target("popcnt")
using namespace std;

// fast.io
#define _ ios_base::sync_with_stdio(0);
#define fastt                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

// typedef
typedef float flt;
typedef double dbl;
typedef long double ld;
typedef long long int lli;
typedef long long ll;
typedef unsigned long long ull;
void solve()
{
    ll t;
    cin >> t;
    map<ll, ll> memo;
    memo[1] = 0;
    while (t--)
    {
        ll n;
        cin >> n;
        if (memo[n])
        {
            cout << memo[n] << endl;
            continue;
        }
        ll sum = 0;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += (n / i) + i;
                if (i == n / i)
                {
                    sum -= i;
                }
            }
        }
        sum -= n;
        memo[n] = sum;
        cout << memo[n] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
}

/*  DON'T KNOW SECTION

1. #pragma GCC target("popcnt")
2. DATA TYPE : int64_t
3. ios_base::sync_with_stdio(false);
4. #ifndef ONLINE_JUDGE
    file;
    #endif // ONLINE_JUDGE
5.  #ifndef ONLINE_JUDGE
    #include "bits/debugTemplate.h"
    #define dbg(x...)                 \
        cerr << "[" << #x << "] = ["; \
        _print(x)
    #else
    #define dbg(x...)
    #endif
6. #pragma GCC optimize("Ofast")
   #pragma GCC target("avx,avx2,fma")
   #pragma GCC optimization ("unroll-loops")
*/