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

vector<int>prime;

void sieve(int n) 
{
    bool ISprime[n + 1];
    memset(ISprime, true, sizeof(ISprime));

    prime.pb(2);

    for (int p = 3; p<= n; p=p+2) { 
        if (ISprime[p] == true) {
            prime.pb(p);
            for (int i = p * p; i <= n; i += 2*p) 
                ISprime[i] = false;
        }
    }
    
}
int np(int x){
    int l=0,h=prime.size()-1;
    while(h-l>1){
        int mid=(l+h)/2;
        if(prime[mid]>x)  h=mid;
        else l=mid+1;
    }
    
    if(prime[l]>x) return prime[l];
    else if(prime[h]>=x) return prime[h];
    else return -1;
}

int pp(int x){
    int l=0,h=prime.size()-1;
    while(h-l>1){
        int mid=(l+h)/2;
        if(prime[mid]>x)  h=mid-1;
        else l=mid;
    }
    if(prime[h]<=x) return prime[h];    
    else if(prime[l]<=x) return prime[l];
    else return -1;
}

bool ok(int p){
    int PP = pp((p-1)/2);
    int NP = np((p-1)/2);
    if(PP+NP+1==p) return true;
    else return false;
}


void solve(int n,int k){
    int ans = 0;
    for(int i = 0;prime[i]<=n;i++){
        if(ok(prime[i])) ans++;
    }
    if(ans>=k) yes;
    else no;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n,k; cin>>n>>k;
    sieve(n);
    solve(n,k);
    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/17/A*/