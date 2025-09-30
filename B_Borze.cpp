#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> r;

        for (ll k = 1, t = 10; t <= n; k++, t *= 10) {
            ll d = 1 + t; 
            if (n % d == 0) {
                r.push_back(n / d);
            }
        }

        if (r.empty()) {
            cout << 0 << "\n";
        } else {
            sort(r.begin(), r.end());
            cout << r.size() << "\n";
            for (auto x : r) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
