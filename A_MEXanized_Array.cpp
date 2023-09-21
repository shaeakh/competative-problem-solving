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
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k || x+1<k){
            cout<<"-1"<<endl;
            continue;
        }
        //cout<<endl;
        if(x==k) x--;
        int i=1;
        ll ans = 0;
        for(i=0;i<k;i++){
            ans = ans + i;
           // cout<<i<<" ";
        }
        for(i=i;i<n;i++){
            ans = ans + x;
            //cout<<x<<" ";
        }
        cout<<ans<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */