/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){    
    ll n,t; cin>>n>>t;
    if(n==1 && t==10)cout<<-1<<endl;
    else if(t!=10){
        for (ll i = 0; i < n; i++)
            cout<<t;

        cout<<endl;
    }
    else{
        for (ll i = 0; i < n-1; i++)
            cout<<1;
        cout<<0;
        cout<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */