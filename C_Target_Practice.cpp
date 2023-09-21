/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cin(n) \
    ll n;      \
    cin >> n;
#define cout(n) cout << n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define for_n for (ll i = 0; i < n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout << "\n";
#define space cout << " ";
#define pb push_back

void solve(){
    int t, n;
    cin >> t;
    while (t--) {
        string a[10];
        int ans = 0, n = 10, k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X') {
                    if (((i + 1) * 9) >= ((10 * i) + j)) {
                        k = min(i, j);
                        ans = ans + k + 1;
                    }
                    else {
                        k = 9 - max(i, j);
                        ans = ans + k + 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}

int main() {
    solve();
}
/* problem link: */