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
        ll max_ = -1;
        ll mx=0;
        for (ll i = 2; i <= n; i++)
        {
            ll t1 = n/i;
            ll sum;
            
            if(t1<2){
                sum = i;
            }
            else{
                sum = i*((t1*(std::max(t1-1,1LL)))/2);
            }
            
            // printf("i-> %d t1-> %d sum->%d\n",i,t1,sum);
            
            if(sum>max_){
                max_ = sum;
                mx = i;
            }
        }
        cout<<mx<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */