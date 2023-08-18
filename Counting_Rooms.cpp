/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

char s[1005][1005];

bool IsValid(int x,int y,int n,int m){
    if( x>=0 && x<n && y>=0 && y<m && s[x][y] == '.' ) return true;
    else return false;
}


void DFS(int i,int j, int n, int m){
    s[i][j] = '*';
    if(IsValid(i+1,j,n,m)) DFS(i+1,j,n,m);
    if(IsValid(i-1,j,n,m)) DFS(i-1,j,n,m);
    if(IsValid(i,j+1,n,m)) DFS(i,j+1,n,m);
    if(IsValid(i,j-1,n,m)) DFS(i,j-1,n,m);
}



void solve() {
    int n,m;
    cin>>n>>m;
    char x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>x;
            s[i][j]=x;
        } 
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(s[i][j]=='.'){
                ans++;
                DFS(i,j,n,m);
                //cout<<i<<" "<<j<<endl;
            }
        } 
    }
    cout<<ans<<endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: https://cses.fi/problemset/task/1192 */