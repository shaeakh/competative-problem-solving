/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int e=0,o=0;
    int j,b;
    bool ok_j=false,ok_b=false;
    int n; cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++){
         cin>>ara[i];
         if(ara[i]%2==0){
            e++;
            if(ok_j==false){
                j =i+1;
                ok_j=true;
            }
         } 
         else{
            o++;
            if(ok_b==false){
                b =i+1;
                ok_b=true;
            }
         } 
    }
    if(e<o) cout<<j<<endl;
    else cout<<b<<endl;
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link:https://codeforces.com/problemset/problem/25/A */