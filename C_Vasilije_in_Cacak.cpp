/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 
/*
1 2 3 4 5 6 7 8 9
9 + 8 + 7 + 6 + 5 + 4 + 1 

*/


void solve(){    
    ll t; cin>>t;
    while (t--)
    {
       ll n,k,x;
       cin>>n>>k>>x;
       ll sum1=(n*(n+1))/2;
       ll m=(n-k);
       ll sum=(n*(n+1))/2-(m*(m+1))/2;
       ll s=(k*(k+1))/2;
       if(sum>=x && x>=s)yes;
       else no;        
    }
}

int main(){
    solve();
}
/* problem link: */