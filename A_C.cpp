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
        ll a,b,n; cin>>a>>b>>n;
        ll count = 0;
        while(a<=n && b<=n){
            if(a>b){
                swap(a,b);
            }
                a += b;
            
            // cout<<a<<" "<<b<<endl;
            count++;
        }
        cout<<count<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */