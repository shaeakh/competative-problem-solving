#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {KO
            ll t = arr[i]+arr[j];
            if(t%2==0)ans = max(ans,t);
            
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}
