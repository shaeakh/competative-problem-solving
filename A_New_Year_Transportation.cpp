/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,t; cin>>n>>t;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];

    ll i = 0; 
    bool f = false;
    while(i<t){
        if(i==t-1){
            f = true; break;
        }
        i = i + arr[i];
    }
    f == true ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    solve();
}
/* problem link: */