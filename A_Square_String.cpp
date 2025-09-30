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
        if(s.size()%2!=0){
            no;
            continue;
        }
        ll x = s.size()/2;
        bool f = true;
        for(int i=0;i<x;i++){
            if(s[i]!=s[x+i]){
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