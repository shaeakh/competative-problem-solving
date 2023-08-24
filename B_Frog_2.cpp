/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int N = 10e5 + 10;
int INF = INT_MAX;

vector<vector<pair<int,int>>>g;
vector<bool>vis;
vector<int>dis;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;



void dijkstra(int source,int end){


    dis[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){

        int v = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if(vis[v]) continue;
        vis[v] = true;

        for(auto u : g[v]){
            int child_v =  u.first;
            int child_d = u.second;
            if( dis[child_v] > dis[v] + child_d ) {
                dis[child_v] = dis[v] + child_d;
                pq.push({dis[child_v],child_v});
            }
        }


    }
    cout<<dis[end];
}

void solve() {
    int n,wt,k;

    int Limit;

    cin>>n>>k;

    dis = vector<int>(n+1,INF);
    vis = vector<bool>(n+1,false);
    g = vector<vector<pair<int,int>>>(n+1);

    int ara[n+1];

    for (int i = 1; i <= n; i++) cin>>ara[i];
    
    for (int i = 1; i <= n; i++){
        Limit = min(i+k,n);
        for(int j=i+1;j<=Limit;j++){
        wt = abs(ara[i]-ara[j]);
        g[i].push_back({j,wt});
        }
    }
    dijkstra(1,n);
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    
    return 0;
}
/* problem link: https://atcoder.jp/contests/dp/tasks/dp_b?lang=en */