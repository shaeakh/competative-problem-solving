/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;
    while (t--)
    {
        char a[8][8] ;
        vector<char> ans;

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j] ;
                if(a[i][j] <='z' && a[i][j] >= 'a')
                ans.push_back(a[i][j]) ;
            }
        }
        for(long long int i=0;i<ans.size() ;i++)
        cout<<ans[i];
        cout<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */