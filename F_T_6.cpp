#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> tpsrt;

void dfs(ll v){
    visited[v]=1;

    for(auto u:adj[v]){
        if(!visited[u]){
            //cout<<adj[v]<<endl;
            dfs(u);
        } 
    }

    tpsrt.push_back(v);
}
 
int main() {
   init_code();
   int t ; cin >> t;
   while(t--){
         ll n, m, q, ans=0;   
         cin>>n>>m>>q;

         adj.clear();
         adj.resize(n+1);

         tpsrt.clear();

         visited.clear();
         visited.assign(n+1, 0);

         for(ll i=1 ; i<=m ; i++){
            ll u, v;    
            cin>>u>>v;
            adj[u].push_back(v);
         }

         while(q--){
            ll x;   cin>>x;
            if(!visited[x]){
                dfs(x);
            }
            ans= ans + tpsrt.size();
            tpsrt.clear();
         }

         cout<<ans<<endl;
         
   }
  
   return 0;
}