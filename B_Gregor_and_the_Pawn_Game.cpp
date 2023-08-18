/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int t;
    cin>>t;
    int n;
    string e,g;
    while (t--)
    {
        int cnt = 0;
        cin>>n;
        cin>>e>>g;
        for(int i=0;i<n;i++){
            
            if( g[i]=='1') {
                if(e[i]=='0'){
                    e[i] = 'x';
                    cnt++;
                } 
                else if( e[i-1]=='1' && i>=0 && i<n ){
                    e[i-1] = 'x';
                    //cout<<e<<endl;
                    cnt++;
                }

                else if(e[i+1]=='1' && i>=0 && i<n ){
                    e[i+1] = 'x';
                    //cout<<e<<endl;
                    cnt++;
                }
                
            }
            
        }
        cout<<cnt<<endl;
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/1549/B */