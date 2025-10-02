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
        int n,x; cin>>n>>x; 
		int a=0;
		int ans=0;
		while(n--){
			int b; cin>>b;
			ans=max(ans, b-a);
			a=b;
		}
		cout<<max(ans, 2*(x-a))<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */