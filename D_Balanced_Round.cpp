/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        int ara[n];

        int a=1,b=1;

        for (int i = 0; i < n; i++) cin>>ara[i];
        sort(ara,ara+n);

        for (int i = 0; i < n-1; i++){
            while (ara[i+1]-ara[i]  <= k  && i<n-1)
            {
                //cout<<ara[i]<<" "<<ara[i+1]<<endl;
                a++;
                i++;
            }
            if(a>b) b = a;
            a = 1;
        }
        cout<<n-b<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */