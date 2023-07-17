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


int vis[55][55], n, m, c, part;
string g[55];
int xx[4]={0, 0, 1, -1}, yy[4]={1, -1, 0, 0};


void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int dfs(int i, int j){
    if(i<0||j<0||i>=n||j>=m||vis[i][j]||g[i][j]=='.') return 0;
    vis[i][j]++;
    for(int k=0; k<4; k++) dfs(i+xx[k], j+yy[k]);
    return 1;
}
 
int main() {
   init_code();
   cin>>n>>m;
    for(int i=0; i<n; i++) cin>>g[i];
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(g[i][j]=='#'){
        c++;
        memset(vis, 0, sizeof(vis));
        part=0;
        g[i][j]='.';
        for(int k=0; k<4; k++)part+= dfs(i+xx[k], j+yy[k]);
        if(part>1){cout<<1; return 0;}
        g[i][j]='#';
    }
    if(c<3) cout<<-1;
    else cout<<2;
   return 0;
}