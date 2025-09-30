/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n=4;
    
    
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    string s; cin>>s;
    

    ll sum = 0;
    for(char c:s){
        ll temp = c -'0';
        // cout<<"temp : "<<temp<<" ";
        sum = sum + arr[temp-1];
        // cout<<"sum : "<<sum<<endl;
    }
    cout<<sum<<endl;
}

int main(){
    solve();
}
/* problem link: */