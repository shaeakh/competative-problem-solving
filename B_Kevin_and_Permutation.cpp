/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define for_n for(ll i = 0; i < n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define pb push_back

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        for(int i=1;i<=n/2;i++) cout<<i+(n/2)<<" "<<i<<" ";
        if(n%2==1) cout<<n<<" ";
        cout<<endl;
        
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */