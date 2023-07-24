/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        long long int n; cin>>n;
        long long int x,y;
        map<long long int,long long int> up,side,diag1,diag2;
        long long int ans = 0;
        for (long long int i =0;i<n;i++){
            cin>>x>>y;
            up[x]++;
            side[y]++;
            diag1[x+y]++;
            diag2[x-y]++;
        }
    for(auto x : up)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x : side)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x : diag1)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x : diag2)
    {
        ans+=x.second*(x.second-1);
    }
    cout<<ans<<endl;    
    
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link:https://codeforces.com/contest/1850/problem/F */