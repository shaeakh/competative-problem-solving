#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<ll> g(n);
        for(int i=0;i<n;i++) cin >> g[i];

        sort(g.begin(), g.end());

        ll total = 0;
        int st = (n & 1 ? 0 : 1);

        for(int idx = st; idx < n; idx += 2){
            total += g[idx];
        }

        cout << total << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
