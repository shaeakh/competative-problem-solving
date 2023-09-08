/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";

int LCM(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}


void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll l;
        l = n/LCM ( x,y);
        ll xx = n/x - l;
        ll yy = n/y - l;

        ll xxx = ((n*(n+1))/2) - (((n-xx)*(n-xx+1))/2);
        ll yyy = (yy*(yy+1))/2;
        cout<<xxx-yyy<<endl;

    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */