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
#define pb push_back

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        map<ll,ll>mp;
        ll n; cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) {cin>>arr[i]; mp[arr[i]]++;}
        sort(arr,arr+n);
        ll q;
        while (q--)
        {
            ll AaddB,AmulB;
            cin>>AaddB>>AmulB;
            ll AsubsB = sqrt( AaddB*AaddB - 4*AmulB );
            if((AsubsB*AsubsB) != (AaddB*AaddB - 4*AmulB) || (AaddB*AaddB < 4*AmulB) ) cout<<0<<" ";
            else{
                ll a = (AaddB+AsubsB)/2;
                ll b = (AaddB-AsubsB)/2;
                cout<<mp[a]*mp[b]<<" ";   
            }

        }
        cout<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: https://codeforces.com/contest/1857/problem/F */