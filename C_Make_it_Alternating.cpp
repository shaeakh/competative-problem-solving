/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define for_n for(ll i = 0; i < n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define pb push_back;

const ll m = 998244353 ;

ll moood(ll a,ll b){
    return ((a%m)*(b%m))%m;
}

void solve() {
    ll t;
    cin>>t;
    while (t--)
    {
        string s; cin>>s;
        ll sz = s.size();
        ll op = 0;
        ll ans = 1;
        for (ll i = 0; i < sz ; i++)
        {
            if(s[i]==s[i+1]){
                ll p = 0;
                while (s[i]==s[i+1] && i<sz-1)
                {
                    i++;
                    p++;
                }
                ans = moood(ans,moood(p,p+1));
                op = op + p;
            }
            
            
        }
        cout<<op<<" "<<ans<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */