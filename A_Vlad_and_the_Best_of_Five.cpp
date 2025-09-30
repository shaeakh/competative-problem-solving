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
        string s; cin>>s;
        ll a=0,b=0;
        for (char c : s)
        {
            if(c=='A') a++;
            else b++;
        }
        if(a>b) cout<<"A\n";
        else cout<<"B\n";
        
    }
}

int main(){
    solve();
}
/* problem link: */