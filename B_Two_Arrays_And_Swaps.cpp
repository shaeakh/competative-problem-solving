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
        ll n,k; cin>>n>>k;
        ll a[n],b[n];
        for (ll i = 0; i < n; i++) cin>>a[i];
        for (ll i = 0; i < n; i++) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        
        for (ll i = 0; i < n; i++)
        {
            if(k==0) break;
            if(a[i]<b[n-i-1]){
                swap(a[i],b[n-i-1]);
                k--;
            }
        }

        ll sum = 0;
        for(ll x : a){
            sum = sum + x;
        }
        cout<<sum<<endl;
        
    }
}

int main(){
    solve();
}
/* problem link: */
