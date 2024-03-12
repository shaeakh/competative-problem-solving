#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,m,l=99999999;
int mx[2] = {-1,1};
int my[2] = {-1,1};
int ma[2];
int mb[2];
vector<vector<char>>s(1001);
bool connected = false;

stack<char>ss;

bool bfs(int x, int y,ll d){
    if(x==mb[0] && y==mb[1] && s[x][y]=='B' && d<=l){
        l = min(l,d);
        return true;
    }
    if(x>=n || x<0 || y<0 || y>=m) return false;
    if(bfs(x-1,y-1,d+1)==true){

    }
    if(bfs(x-1,y+1))
    if(bfs(x+1,y-1))
    if(bfs(x+1,y+1))
}

int main(){

    cin>>n>>m;
    char c;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c;
            if(c=='A'){
                ma[0] = i;
                ma[1] = j;
            }
            if(c=='B'){
                mb[0] = i;
                mb[1] = j;
            }
            s[i].push_back(c);
        }
    }
    printf("Ax=%d Ay=%d Bx=%d By=%d",ma[0],ma[1],mb[0],mb[1]);

//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout<<s[i][j];
//        }
//        cout<<endl;
//    }
    bfs(ma[0],ma[1],0);

}
