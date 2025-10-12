/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){    
    ll n,m; cin>>n>>m;
    map<string,string>m1;
    map<string,string>m2;
    while (m--)
    {
        string s1,s2; cin>>s1>>s2;
        m1[s1]=s2;
    }
    string s[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>s[i];
        ll x = s[i].size();
        ll y = m1[s[i]].size();
        if(x>y){
            s[i] = m1[s[i]];
        }
    }
    for(string x:s) cout<<x<<" ";
    
    
}

int main(){
    solve();
}
/* problem link: */