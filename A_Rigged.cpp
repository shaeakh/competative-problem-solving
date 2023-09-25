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
        priority_queue< pair<ll,ll>, vector<pair<ll,ll>>>pq;
        int n; cin>>n;

        ll x,y; cin>>x>>y;        
        for(int i=0;i<n-1;i++){
            ll a,b; cin>>a>>b;
            pq.push({a,b});
        }

        bool ok = false;

        while (!pq.empty())
        {
            pair<ll,ll> top_element = pq.top();
            pq.pop();
            if(top_element.first >= x && top_element.second >= y){
                ok = true;
                break;
            }

        }
        
        if(ok)cout<<-1<<endl;
        else cout<<x<<endl;
    
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */
