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
        ll n,x; cin>>n>>x;
        ll water = 0;
        ll h = 0;
        int c[n];
        for(ll i = 0;i<n;i++) cin>>c[i];
        sort(c,c+n);
        bool ok = false;
        ll i;
        for(i = 1;i<n;i++){
            water = water +  (c[i]-c[i-1]) +  (i-1)*(c[i]-c[i-1]) ;
            h = c[i];
            while (c[i]==c[i+1] && i<n-1) i++;
            if(water>=x){
                ok = true;                
                break;
            }
        } 
        if(!ok){
            h = c[n-1] + (x-water)/n;
        }
        cout<<h<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */ 