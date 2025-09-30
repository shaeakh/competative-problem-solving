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
        ll arr[n];
        bool f = true;
        cin>>arr[0];
        for(ll i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i-1] > arr[i]){
                f = false;
            }
        } 

        


        if(f || k>=2) yes;
        else no;
    }
}

int main(){
    solve();
}
/* problem link: */