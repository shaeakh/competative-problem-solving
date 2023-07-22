/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#include<fstream>
 
const int mod = 1e9+7;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;        
        vector <int> a(n),b(n+1,0),c(n+1,0);

        for (int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]<=n)
            b[a[i]]++;
        }

        for (int i = 1; i <= n; i++){
            if(b[i]>0){
                for(int j = 1; j*i <= n; j++){
                    c[i*j] += b[i];
                }
            }
        }
        int ans = -1;
        for (int i = 1; i <= n; i++) ans = max(ans,c[i]);
        cout<<ans<<endl;
    }
    
}

int main(){
    solve();
    return 0;
}
/* problem link: */