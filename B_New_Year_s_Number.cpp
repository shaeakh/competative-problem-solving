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
        if(n<2020) no;
        else if(n%2020==1 || n%2021==2020 || n%2020==0 ||n%2021==0 ||(n%2020<=n/2020) ) yes;
        else no;
    }
}

int main(){
    solve();
}
/* problem link: */