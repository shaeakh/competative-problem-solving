/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int b[n];
    for (int i = 0; i < n; i++) cin>>b[i];
    
    int m; cin>>m;
    int g[m];
    for (int i = 0; i < m; i++) cin>>g[i];
    
    sort(b,b+n);
    sort(g,g+m);

    int k=0,cnt=0;
    for (int i = 0; i < n; i++) {
        for (int j = k; b[i]+1 >= g[j] && j<m; j++) {
            if(g[j]==-1) continue;
            if(abs(b[i]-g[j]<=1)){
                //cout<<"boy no "<<i<<" girl no "<<j<<endl;
                g[j]= -1;
                k = j+1;
                cnt++;
                break;
            }
        }
        if(k==m)break;
    }
    cout<<cnt<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/489/B */