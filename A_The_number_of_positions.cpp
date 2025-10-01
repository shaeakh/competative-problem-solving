/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){    
    ll a,b,n; cin>>n>>a>>b;
    if((n-a)>b)
    cout<<(b+1)<<endl;
    else{
        cout<<n-a;
    }
}

int main(){
    solve();
}
/* problem link: */