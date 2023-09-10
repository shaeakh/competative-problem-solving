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

void solve() {
    int n,k; cin>>n>>k;
    int arr[n+1];
    arr[0] = 1;
    for(int i=1;i<=n;i++) cin>>arr[i];
    sort(arr,arr+n+1);
    if(arr[k]==arr[k+1]) cout<<-1<<endl;
    else cout<<arr[k]<<endl;
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */