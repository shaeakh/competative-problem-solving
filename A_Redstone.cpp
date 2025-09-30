#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        unordered_set<int> seen;
        bool ok = false;
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            if (seen.count(x)) ok = true;
            seen.insert(x);
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
