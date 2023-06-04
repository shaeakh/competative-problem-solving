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
        int l=n,r=-1;
        int a1[n]={0},a2[n]={0};
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<n;i++) cin>>a2[i];
        for (int i = 0; i < n; i++)
            if(a1[i]!=a2[i]){
                l = min(l,i);
                r = max(r,i);
            }
        
                while (l > 0 && a2[l - 1] <= a2[l]) {
                l--;
            }
            while (r + 1 < n && a2[r] <= a2[r + 1]) {
                r++;
            }
            cout<<l+1<<' '<<r+1<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */