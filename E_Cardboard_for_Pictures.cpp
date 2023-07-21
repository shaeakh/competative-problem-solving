/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        long long int k;
        cin>>n>>k;
        int ara[n];
        long long int a=1,b=0,c=0;

        for (int i = 0; i < n; i++){
            cin>>ara[i];
            b = b + ara[i];
            c = c + ara[i]*ara[i];
        } 
        b = b/n;
        c = (c-k)/(4*n);
        long long int x = sqrt(abs(b*b - 4*a*c));
        long long int x1 =( (-1)*b + x ) / (2*a);
        long long int x2 =( (-1)*b - x ) / (2*a);
        cout<<x1<<endl;
        //if(x1 >= 1) cout<<x1<<endl;
        //else if(x2 >= 1) cout<<x2<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */