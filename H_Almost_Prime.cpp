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
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back

ll divno(ll n){
    ll cnt =0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            while (n%i==0) n = n/i;
            cnt++;
        }
    }
    if(n>1) cnt++;
    return cnt;
}


void solve() {
    cin(n);
    ll ans = 0;
    for(int i=1;i<=n;i++){
        if(divno(i)==2) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */