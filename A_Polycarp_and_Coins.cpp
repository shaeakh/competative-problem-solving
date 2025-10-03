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
        ll x = n%3;
        switch (x)
        {
        case 0:
            cout<<n/3<<" "<<n/3<<endl;
            break;
        case 1:
            cout<<n/3+1<<" "<<n/3<<endl;
            break;

        case 2:
            cout<<n/3<<" "<<n/3+1<<endl;
            break;

        default:
            break;
        }
    }
}

int main(){
    solve();
}
/* problem link: */