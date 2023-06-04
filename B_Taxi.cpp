/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,c;
    cin>>n;
    int ara[5] = {0};
    for (int i = 0; i < n; i++){
        cin>>k;
        ara[k]++;
    }
    
    if(ara[3]>=ara[1]) c = 0;
    if(ara[3]<ara[1])  c = ara[1] - ara[3];

    int ans = ara[4] + ara[3] + ceil( (double) (c+ara[2]*2) / (double)  4 ) ;
    cout<<ans<<endl;
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */