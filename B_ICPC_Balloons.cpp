/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    
    ll t; cin>>t;
    while (t--)
    {
        ll n; string s;
        cin>>n>>s;
        map<char,ll>m;
        ll sum = 0;
        for(char c : s){
            m[c]++;
            if(m[c]==1){
                sum = sum + 2;
            }
            else{
                sum++;
            }
        }
        cout<<sum<<endl;

    }
}

int main(){
    solve();
}
/* problem link: */