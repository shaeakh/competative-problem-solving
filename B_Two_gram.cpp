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

void solve() {
    int n; cin>>n;
    string s1,s; cin>>s;
    map<string,int>mp;
    int mx=-1;
    string mxstr;
    for (int i = 0; i < n-1; i++)
    {
        s1 = s.substr(i,2);
        mp[s1]++; 
        if(mp[s1]>mx){
            mx = mp[s1];
            mxstr =  s1;
        }
    }
    cout<<mxstr<<endl;
    
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */