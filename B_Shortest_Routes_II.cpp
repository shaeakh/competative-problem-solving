/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const long long int INF = LLONG_MAX	;
vector < pair <int,long long int> > g[N]; // {end_point,weight}


long long int dijsktra(int source,long long int n,int end){
    
    vector<int> vis(N,0);
    vector<long long int>dist(N,INF);
    vector<int>P(n+1,0);

    set<pair<long long int,int>> set;  // {weight,end_point}
    set.insert({0,source});
    dist[source]=0;
    P[source]=0;
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
       if(v==end) return dist[v];
    }
    return -1;
}
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    for(int i=0; i<m; i++){
        long long int a,b;
        long long int wt;
        cin>>a>>b>>wt;
        g[a].push_back({b,wt});
        g[b].push_back({a,wt});
    }
    while (q--)
    {
        int start,end;
        cin>>start>>end;
        cout<<dijsktra(start,n,end)<<endl;
    }
    return 0;
}
/* problem link: */
