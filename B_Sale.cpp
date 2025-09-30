/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,m; cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    ll sum = 0;
    for(ll i=0;i<m;i++){
        if(arr[i]<0) sum = sum - arr[i]; 
    }
    cout<<sum<<endl;
}

int main(){
    solve();
}
/* problem link: */