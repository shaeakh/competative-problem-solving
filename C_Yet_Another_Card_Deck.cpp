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

void solve() {
    int n,q;
    cin>>n>>q;

    map<int,int>Q;
    list<int>v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        if( Q[x] != 0){

            Q[x] = min( Q[x] ,i+1 );
        }
        else Q[x] = i+1;
    }

    
    for(int i = 0; i<q;i++){
        cin>>x;        
        auto it = std::next(v.begin(), Q[x]-1);
        v.erase(it);
        v.push_front(x);
    }

    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    cout<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */