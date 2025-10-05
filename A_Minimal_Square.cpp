/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){    
    ll t; cin>>t;
    while (t--)
    {
        ll a,b; cin>>a>>b;
        ll max_ = max(a,b);
        ll min_ = min(a,b);
        ll ans = max(max_,min_*2);
        cout<<ans*ans<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */