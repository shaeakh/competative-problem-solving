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
const int N = 10e5+10;
const int inf = 10e8;
vector<int>prime;
vector<bool>vis(N,true);

void sieve() {
    prime.push_back(2);
    //cout<<2<<endl;
    for (int i = 3; i <= inf; i=i+ 2)
    {
        if(vis[i]){
            for(int j=i*i;j<=inf;j += 2*i) vis[j]=false;
            prime.push_back(i);
        }
    }
    for (int i = 0; i <= 50; i=i+1) cout<<prime[i]<<endl;

}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    sieve();
    return 0;
}
/* problem link: */
