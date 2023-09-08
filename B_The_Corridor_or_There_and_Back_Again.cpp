/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n; int x,y;
        priority_queue< pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        
        for(int i=0;i<n;i++){
            cin>>x>>y;
            pq.push({x,y});
        }
        int ans = 1000;

        while (!pq.empty())
        {
            int d = pq.top().first;
            int s = pq.top().second;
            pq.pop();
            int xy = d + (s-1)/2;  
            ans = min(xy,ans);
        }
        
        cout<<ans<<endl;
    }
    
}
/* problem link: */