/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

vector< vector<long long int> > g;
#define INF 10e15 

int main(){
    long long int n,m,q;
    long long int a,b,wt;
    cin>>n>>m>>q;
    g.resize(n+1);
    for(int i=0;i<n+1;i++) g[i].resize(n+1);

    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j)
        {
            if(i==j) g[i][j] = g[j][i] = 0;
            else g[i][j] = g[j][i] = INF;
        }
        
    }
    for(int i=0; i<m; i++){
        cin>>a>>b>>wt;
        g[a][b] = g[b][a] = min(g[a][b],wt);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++){
                g[i][j] = min (g[i][j] , g[i][k]+g[k][j]  );
            }
        }
    }
    while (q--)
    {
        cin>>a>>b;
        if(g[a][b]>=INF) cout<<"-1"<<endl;
        else cout<<g[a][b]<<endl;
    }
    return 0;
}
/* problem link: https://cses.fi/problemset/result/5638554/#test13 */
