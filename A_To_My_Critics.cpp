/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int ara[3];
        cin>>ara[0]>>ara[1]>>ara[2];
        sort(ara,ara+3);
        if(ara[1]+ara[2]>=10) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */