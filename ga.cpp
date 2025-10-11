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
        ll x,y,a,b; cin>>x>>y>>a>>b;
        // les check x and y have different sign or not
        ll t = x*y;
        ll ans;
        if(t<0){
            ans = a * (abs(x) + abs(y));
        }else{
            x = abs(x);
            y = abs(y);
            ll mx = max(x,y);
            ll mn = min(x,y);
            ans = mn*b + (mx-mn)*a;
            ans = min(ans,a*(x+y));
        }
        cout<<ans<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */