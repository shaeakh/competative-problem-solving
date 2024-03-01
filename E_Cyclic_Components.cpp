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
#define all(x) (x).begin(),(x).end()
#define pb push_back
const int N = 10e5+10;

vector<int>adj[N];
vector<bool>vis(N,false);

void dfs(int n){
    if(!vis[n]){
        vis[n] = true;
        for(auto c : adj[n]){
            dfs(c);
        }
        
    }
}

void solve() {
    int n,m;
    int x,y;
    cin>>n>>m;
    for_loop(i,1,m){
        cin>>x>>y;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
    }
    for_loop(i,0,n-1){
        if(adj[i].size()!=2 && !vis[i]) dfs(i);
    }
    ll ans = 0;
    for_loop(i,0,n-1){
        if(!vis[i]){
            dfs(i);
            ans++;
        } 
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    return 0;
}
/* problem link: */