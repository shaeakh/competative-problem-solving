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
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back

void solve() {
    queue<int>q;
    vector<int>v;
    q.push(1);
    v.push_back(1);
    q.push(2);
    v.push_back(2);
    q.push(3);
    v.push_back(3);
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }

    stack<int>s;
    s.

    cout << "\n";
    for(auto x: v) cout << x;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */