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
        string s; cin>>s;
        map<char,ll>m;
        bool f = true;
        for (ll i = 0; i < n; i++)
        {
            m[s[i]]++;
            if(m[s[i]]-1>=1 && s[i-1]!=s[i]){
                f = false;
                break;
            }
        }
        if(f) yes;
        else no;
        
    }
}

int main(){
    solve();
}
/* problem link: */