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

vector<ll>tpsrt (ll node , vector<ll>&ind , vector<vector<ll>> &adj){
    vector<ll> ans;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(ll i=1 ; i<=node ; i++) if(ind[i]==0) pq.push(i);

    while( pq.empty() == false ){

        ll v= pq.top();
        pq.pop();
        //cout<<v<endl;
        ans.push_back(v);

        for(auto u : adj[v]){
            ind[u]--;
            if(ind[u]==0) pq.push(u);
        }
    }
    return ans;
}
 
int main() {
   init_code();
   ll n, m, c=1;
   while(cin>>n){
    map<string, ll> m1;
    map<ll, string> m2;

    for(ll i=1 ; i<=n ; i++){
        string s;   cin>>s;
        m1[s]= i;
        m2[i]= s;
    }

    cin>>m;
    vector<vector<ll>> adj(n+1);
    vector<ll> ind(n+1, 0);

    while(m--){
        string u, v;
        cin>>u>>v;
        adj[m1[u]].push_back(m1[v]);
        ind[m1[v]]++;
    }

    vector<ll> ans= tpsrt(n, ind, adj);

    printf("Case #%lld: Dilbert should drink beverages in this order:  ");
    c++;

    for(ll i=0 ; i<ans.size() ; i++){
        cout<<" "<<m2[ans[i]];
    }
    cout<<"."<<endl<<endl;
   }
   return 0;
}