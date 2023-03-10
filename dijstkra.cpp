/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>


const long long int N = 1e5+10;
const long long int INF = 10e18;

vector < pair <long long int,long long int> > g[N]; // {end_point,weight}



void dijsktra(long long int source,long long int n){
    vector<int> vis(N,0);
    vector<long long int>dist(N,INF);
    //priority_queue<pii, vii, greater<pii>> set;
    set<pair<long long int,long long int>> set;  // {weight,end_point}
    set.insert({0,source});
    dist[source]=0;

    while (!set.empty())
    {
        auto node = *set.begin();
        long long int v= node.second;
        long long int dis=node.first;

        set.erase(set.begin());

        if(vis[v]==1) continue;
        vis[v]=1;

        for(auto child : g[v]){
            long long int child_v=child.first;
            long long int wt=child.second;
            if(dis+wt < dist[child_v]){
                 dist[child_v] = dis+wt;
                 set.insert({dist[child_v],child_v});
            }
        }
    }
    for(long long int i=1;i<=n;i++) cout<<dist[i]<<" ";
    cout<<endl;
}



int main(){
    int n,m;
    cin>>n>>m;
    for(long long int i=0; i<m; i++){
        long long int a,b,wt;
        cin>>a>>b>>wt;
        g[a].push_back({b,wt});
        //g[b].push_back({a,wt});

    }
    dijsktra(1,n);
    return 0;
}
/* problem link: */
