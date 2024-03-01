/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5+10;
int g[N][N];
bool vis[N][N];
int level[N][N];
queue<pair<int,int>>q;

char s[1001][1001];

bool IsValid(int x,int y,int n,int m){
    if( x>=0 && x<n && y>=0 && y<m && s[x][y] == '.' ) return true;
    else return false;
}



void solve() {
    int n,m;
    cin>>n>>m;
    int ax,ay,bx,by;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];

        }
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: */