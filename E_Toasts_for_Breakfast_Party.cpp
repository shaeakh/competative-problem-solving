#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,m; cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    ll x = n%m,i=0;
    ll ans1 = 0,ans2 = 0;

    if(m*2==n){
        for (i = 0; i < n/2; i++)
        {
            ll t1 = arr[i]+arr[n-1-i];
            ans1 = ans1 + t1*t1;
        }
        cout<<ans1<<endl;
        return 0;
    }
    
    for (i = 0; i < x; i++)
    {
        ll t1 = arr[i]+arr[n-1-i];
        ll t2 = arr[2*i]+arr[2*i+1];
        ans1 = ans1 + t1*t1;
        ans2 = ans2 + t2*t2;
    }

    ll l = i,r=n-1-i;

    for ( i = 2*i; i < n; i++)
    {
        ll t2 = arr[i];
        ans2 = ans2 + t2*t2;
    }
    
    for (ll i = l; i <= r; i++)
    {
        ans1 = ans1 + arr[i]*arr[i];
    }
    cout<<min(ans1,ans2)<<endl;
    return 0;
}
