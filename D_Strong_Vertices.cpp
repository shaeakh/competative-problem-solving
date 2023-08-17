/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        ll n,mx=-1*LONG_LONG_MAX;
        cin>>n;
        ll a[n+1],b[n+1];
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++){
            cin>>b[i];
            a[i] -= b[i];
            if(mx <= a[i]) mx=a[i];
        } 

        ll cnt =0;
        vector<ll>res;
        for(ll i=1;i<=n;i++){
            if(a[i]==mx){
                cnt++;
                res.push_back(i);
            }
        }
        cout<<cnt<<endl;
        ll pq = res.size();
        for(ll i=0;i<pq;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */