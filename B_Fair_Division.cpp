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
        ll n; cin>>n;
        ll arr[n];
        ll o=0,t=0,sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum = sum + arr[i];
            if(arr[i]==1) o++;
            else t++;
        }    
        if((t%2!=0 && o==0) || sum%2==1) no;
        else yes;
    }
}

int main(){
    solve();
}
/* problem link: */