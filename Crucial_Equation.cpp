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
    ll t; cin>>t;
    for (ll k = 1; k <= t; k++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%__gcd(a,b)==0){
            cout<<"Case "<<k<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<k<<": No"<<endl;
        }
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
}