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
        ll n; cin>>n;
        ll a[n],b[n];
        ll c[2*n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        c[0] = a[0];
        for(int k=1,j=0,i=1;k<2*n;k++){
            if( c[k-1]== b[j] && j<n){
                c[k]=b[j];
                j++;
            }
            else {
                c[k]=a[i];
                i++;
                if(i==n-1) break;
            }
        }
        for(int k=0;k<2*n;k++) cout<<c[k]<<" ";
    
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */