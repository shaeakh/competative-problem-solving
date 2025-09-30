/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
void solve(){
    ll n,m; cin>>n>>m;
    if(n==47){
        cout<<"NO\n";
        return;
    }
    ll x = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<x;i++){
        if(arr[i]==n){
            if(arr[i+1]==m){
                cout<<"YES\n";
                return;
            }
        }        
    }
    cout<<"NO\n";
}

int main(){
    solve();
}
/* problem link: */