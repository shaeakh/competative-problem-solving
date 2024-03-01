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

vector<ll>PrimeList;

bool check(ll N,int pos){
    return (bool)(N & (1<<pos));
}
int Set(ll N,int pos){
    return N = N | (1<<pos);
}
void BitWise_sieve(ll N){
    ll n = (N+32-1)>>5 ;
    vector<int>status(n,0);
    ll i,j,sqrtN;
    sqrtN = (long long int) ( sqrt(N) );

    PrimeList.push_back(2);
    for(i=3; i<=N; i += 2){
        if(check(status[i>>5],i&31)==0){
            PrimeList.push_back(i);
            for(j=i*i; j<=N; j += 2*i){
                status[j>>5] = Set(status[j>>5],j&31);
            }
        }
    }
}

bool ok(ll n){
    
    ll r;
    for(ll y=0;y*y*y*y <=n;y++){
        r = n - y*y*y*y;
        for(ll x=0;x*x<=r;x++){
            if(y*y*y*y+x*x==n) return true;
        }

    }
    return false;
}





void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        ll n,ans=0; cin>>n;
        BitWise_sieve(n);
        for(ll i=0;PrimeList[i]<=n;i++){
            if(ok(PrimeList[i])) ans++;
        }
        cout<<ans<<endl;
        
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */