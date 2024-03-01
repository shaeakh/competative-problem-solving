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

map<ll,ll>mp;

void solve() {
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i],mp[arr[i]]++;

    ll cnt=0;

    for(ll i=0;i<n;i++) {

        bool flag = false;           

        mp[arr[i]]--;
        for(ll j=1;j<=30;j++){
            ll t = (1<<j) - arr[i];  
            if( mp.find(t) != mp.end() && mp[t]>0 ) flag=true;
        }
        mp[arr[i]]++;
        if(!flag) cnt++;

    }
    cout<<cnt<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */