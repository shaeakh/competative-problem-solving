/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll sum = 0;
    for(ll x : arr){
        sum = sum + (arr[n-1] - x);
    }
    cout<<sum<<endl;
}

int main(){
    solve();
}
/* problem link: */