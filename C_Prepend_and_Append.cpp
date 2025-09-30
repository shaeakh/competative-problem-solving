/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        ll l=0,r=s.size()-1;
        while (n--)
        {
            if(s[l]==s[r])break;
            l++;r--;
        }
        for(int i=l;i<r;i++)cout<<s[i];

        cout<<endl;
        
    }
}

int main(){
    solve();
}
/* problem link: */