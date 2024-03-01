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
    int t;
    cin>>t;
    while (t--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr,arr+3);

        if( arr[0] != arr[1] ) cout<<arr[0]<<endl;
        else cout<<arr[2]<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */