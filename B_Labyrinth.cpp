/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int n,m,rooms=0;
vector < vector <bool> > vis;
vector < vector <int> > r;
vector < pair<int,int> > moves = {{-1,0},{1,0},{0,-1},{0,1}};

bool IsValid(int x, int y){
    if(x < 0 || x >=n || y < 0 || y >=m  ) return false;
    if(vis[x][y]) return false;
    return true;
}

void dfs(int i, int j){
    vis[i][j] = true;
    for(auto p : moves){
        if( IsValid(i+p.first,j+p.second) ){
            dfs(i+p.first, j+p.second);
        }
    }
}

void connected_components(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                r[i][j]=rooms;
                dfs(i,j);
                ++rooms;
            }
        }
    }
}


int main(){
    cin>>n>>m;
    vis.resize(n);
    int i1,i2,j1,j2;
	for(int i = 0; i < n; ++i)
	{
		vis[i].resize(m);
	}
 
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char c; cin >> c;
			if(c == '#')
			{
				vis[i][j] = true;
			}
            else if(c == 'A')
			{
				i1=i; j1=j;
			}
            if(c == 'B')
			{
				i2=i; j2=j;
			}
            
		}
	}
	connected_components();
	if(r[i1][j1]==r[i2][j2]) cout<<"YES";
    return 0;
}
/* problem link: */
