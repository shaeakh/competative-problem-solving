/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
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
        ll n; cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++) {cin>>arr[i];mp[arr[i]]++;}
        ll q; cin>>q;
        while (q--)
        {
            ll AaddB, AmulB,AsubB;
            cin>>AaddB>>AmulB;
            ll del = AaddB*AaddB - 4*AmulB;
            AsubB = sqrt(del);
            if( AsubB*AsubB == del ){
                ll a = (AaddB + AsubB)/2;
                ll b = (AaddB - AsubB)/2;
                if(a==b) cout<<(mp[a]*(mp[a]-1))/2<<" ";
                else cout<<mp[a]*mp[b]<<" ";
            }
            else{
                cout<<0<<" ";
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