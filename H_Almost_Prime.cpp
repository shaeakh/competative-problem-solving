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
vector<ll>prime;

void sieve(ll N)
{
    ll n = ceil(sqrt(N));
    bool isprime[n + 1];
    memset(isprime, true, sizeof(isprime));
    prime.push_back(2);
    for (int p = 3; p <= n; p=p+2) {
        if (isprime[p] == true) {
            prime.push_back(p);
            for (int i = p * p; i <= n; i += 2*p) 
                isprime[i] = false;
        }
    }

}

bool Nod(ll n){    
    if(n<6) return false;
    ll sq = ceil(sqrt(n));
    ll nod=0;
    for(ll i=0;prime[i]<=sq && i<prime.size();i++){
        if(n==1) break;
        if(n%prime[i]==0) {
        nod += 2;
        while (n%prime[i]==0) n = n/prime[i];        
        }
        if(n == prime[i]*prime[i]) {nod--;}
    }
    if(nod==2) return true;
    else return false;
}



int main(){


    ll n; cin>>n;
    sieve(n);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if(Nod(i)) {ans++;cout<<i<<endl;}
    }
    cout<<ans<<endl;
    
    

    return 0;
}
/* problem link: */
