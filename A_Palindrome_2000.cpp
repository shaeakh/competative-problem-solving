#include <bits/stdc++.h>
using namespace std;
#define MXIND 5000
int dp[MXIND + 1][3];
char s[MXIND + 1];

int main(){
    int N;    cin>>N>>s;
    int l,a = 0,b = 1,c = 2;
    
    for(l = 2;l <=N ;++l){

        for(int i = 0;i + l <= N;++i){
            dp[i][c] = l;

            if(s[i] == s[i + l - 1]) {
                dp[i][c] = dp[i + 1][a];
            }
            else {
                dp[i][c] = 1 + min(dp[i + 1][b],dp[i][b]);
            }
        }

        ++a; ++b; ++c;

        if(a == 3){
            a = 0;
        }
        if(b == 3){
            b = 0;
        }
        if(c == 3){
            c = 0;
        }
    }

    cout<<dp[0][N % 3]<<endl;
    return 0;
}