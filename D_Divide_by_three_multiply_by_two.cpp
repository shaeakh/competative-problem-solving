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
    ll x;
    set<pair<int,ll>>s;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ll og_x = x;
        int y=0;
        while (x%3==0)
        {
            y++;
            x = x/3;
        }
        s.insert({-y,og_x});

    }
    for(auto y: s) cout<<y.second<<" ";
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */