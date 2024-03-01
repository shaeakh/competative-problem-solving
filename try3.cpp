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
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>>pq;
    pq.push({1,2});
    pq.push({2,2});
    pq.push({4,2});
    pq.push({3,2});
     while (!pq.empty()) {
        pair<int,int> top_element = pq.top();
        cout << top_element.first << " ";
        pq.pop();
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */