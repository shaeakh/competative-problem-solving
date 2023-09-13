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
#define yes cout << "YES\n" 
#define newline cout<<"\n";
#define space cout<<" ";
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back
vector<int>prime;//this is for primes 1 - SQRT(Upper limit)
vector<bool>isprime(1000000,false);

void sieve(ll N) 
{
    ll sqrtN = sqrt(N);                         //generating primes SQRT(Upper limit)
    bool ISprime[sqrtN + 1];
    memset(ISprime, true, sizeof(ISprime));

    prime.pb(2);

    for (int p = 3; p<= sqrtN; p=p+2) { 
        if (ISprime[p] == true) {
            prime.pb(p);
            for (int i = p * p; i <= sqrtN; i += 2*p) 
                ISprime[i] = false;
        }
    }

    for(int i = 0;i<prime.size();i++) cout<<prime[i]<<" ";
    
}

void segmented_sieve(ll l,ll r){
     ll sqrtN = sqrt(r);
    for(ll i=0;prime[i]<=sqrtN;i++){
        ll p = prime[i];
        cout<<p<<" ";
        for (ll j = ((l+p-1)/p)*p ; j<=r; j+=p) 
        {
            isprime[j-l] = true;
        }
        
    }
    for(ll i = 0;i<=r-l;i++){
        if(isprime[i]) cout<<i+l<<" is not prime\n";
        else cout<<i+l<<" is prime\n";
    }
}



int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll l=10,r=100; 
    //cin>>l>>r;
    sieve(r);
    segmented_sieve(l,r);   
    return 0;
}
/* problem link: */
