#include <bits/stdc++.h>
using namespace std;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    
    std::string a, b;
    std::cin >> a >> b;
    
    vector< array<int, 26>> pre(n + 1);

    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i];
        pre[i + 1][a[i] - 'a']++;
        pre[i + 1][b[i] - 'a']--;
        // for(int xx=0;xx<n+1;xx++){
        //     for(int yy=0;yy<26;yy++){
        //         cout<<pre[xx][yy]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<"1 circle"<<endl;
    }
    
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--;
        
        int ans = 0;
        for (int c = 0; c < 26; c++) {
            cout<<0<<" c = "<<c<<" l = "<<l<<" r = "<<r<<" pre[r][c] = "<<pre[r][c]<<" pre[l][c] = "<<pre[l][c]<<endl;
            ans += std::max(0, pre[r][c] - pre[l][c]);
        }
        std::cout << ans << "\n";
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
