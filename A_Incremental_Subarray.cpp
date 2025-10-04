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
        ll n,m;
        cin>>n>>m;
		int b=0,x;
		for(int i=1;i<=m;i++){
			cin>>x;
			if(x==1&&i>1)b=1;
		}
		if(b)cout<<1<<endl;
		else cout<<n-x+1<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */