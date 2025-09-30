#include <bits/stdc++.h>
using namespace std;

void run_case() {
    long long n, a, b;
    cin >> n >> a >> b;

    bool ans = false;

    if ( ( (n - b) & 1LL ) == 0 ) {
        if ( ( (n - a) & 1LL ) == 0 ) {
            ans = true;
        } else if (a < b) {
            ans = true;
        }
    }

    cout << (ans ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;
    while (cases--) {
        run_case();
    }
    return 0;
}
