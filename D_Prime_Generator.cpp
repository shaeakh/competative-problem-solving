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

    //for(int i = 0;i<prime.size();i++) cout<<prime[i]<<" ";
    
}


void segmentedSieve(ll l, ll r)
{
     bool flag;
     ll sqrtN = sqrt(r);  
     for(ll i = l; i<= r;i++){
        //cout<<"num "<<i<<endl;
         flag = true;
         if(i==1) flag = false;
         for(ll j=0; prime[j]*prime[j]<=i && j<prime.size(); j++){
             if(i%prime[j]==0 && i!=prime[j]){
                 flag = false;
                 break;
             }
         }
         if(flag) cout<<i<<endl;
     }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        ll l,r; 
        cin>>l>>r;
        sieve(r);
        segmentedSieve(l,r);   
        cout<<endl;   
    }
    return 0;
}
/* problem link: https://www.spoj.com/problems/PRIME1/ */
