#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::map<int, int> f[4];
    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        cout<<ans<<" ";
        ans += f[0][x]++;
        cout<<ans<<" ";
        ans += f[1][y]++;
        cout<<ans<<" ";
        ans += f[2][x + y]++;
        cout<<ans<<" ";
        ans += f[3][x - y]++;
        cout<<ans<<endl;
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
