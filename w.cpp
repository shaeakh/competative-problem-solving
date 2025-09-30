/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){    
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    map<ll,ll>m;
    ll max_l = -1;
    for(ll x : arr){
        ll i = 0;
        ll t = pow(2,i);

        while (x%t==0)
        {
            max_l = max(max_l,t);
            m[t]++;
            i++;
            t = pow(2,i);
        }
    }
    cout<<max_l<<" "<<m[max_l]<<endl;
}

int main(){
    solve();
}
/* problem link: */