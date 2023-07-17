/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;
        long long int sum = 0;
        int ara[n];
        for (int i = 0; i < n; i++) cin>>ara[i];
        sort(ara,ara+n);
        for (int i = 0; i < n/2; i++){
            sum = sum + abs( ara[i] - ara[n-1-i] );
        }
        cout<<sum<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */