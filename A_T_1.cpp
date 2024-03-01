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

vector<bool> visited;
vector<vector<ll>>adj;
vector<ll>tpsrt;

void dfs(ll v){
    visited[v] = true;

    for(auto at : adj[v] ){
        if(!visited[at]) dfs(at);
    }
    tpsrt.push_back(v);
}
int main(){
    init_code();
    ll n,m;
    while(cin>>n>>m, n!=0 || m!= 0){
        visited.clear();
        visited.assign(n+1,0);
        tpsrt.clear();
        adj.clear();
        adj.resize(n+1);

        while (m--)
        {
            ll u,v; cin>>u>>v;
            adj[u].push_back(v);
        }
        
        for(ll i=1;i<=n;i++){
            if(!visited[i]) dfs(i);
        }
        
        for(ll i=n-1;i>=0;i--){
            cout<<tpsrt[i];
            if(i>0) cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
