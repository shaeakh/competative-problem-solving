/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back

ll ok(ll a, ll b){
    if(a-b<0) return 0;
    else return a-b;
}


void solve() {
    string s1,s2;
    cin>>s1>>s2;
    ll x1 = s1.size(),x2=s2.size();
    
    x1--;x2--;
    ll ans=0;
    while (s1[x1]==s2[x2])
    {
        ans++;
        x1--;x2--;
        if(x1==-1 || x2==-1) break;
    }
    
    ll result = ok(s1.size(),ans) + ok(s2.size(),ans);
    cout<<result<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */