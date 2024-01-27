#include<bits/stdc++.h>
#define mii map<int,int>
#define vi vector<int>
#define int long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define mod 100000007
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(c) c.begin(),c.end()
using namespace std;

int dp[55][1005];

int coin(int n,int x,int rw,vector<int> &v,vector<int> &w)
{
    if(rw==0){
        return 1;
    }
    
    if(x==n){
        return 0;
    }

    if(dp[x][rw]!=-1){
        return dp[x][rw];
    }

    dp[x][rw]=0;

    for(int i=0;i<=w[x] && rw-i*v[x]>=0;i++){
        dp[x][rw]+=(coin(n,x+1,(rw-i*v[x]),v,w)%mod);
    } 

    int ans = dp[x][rw]%mod;
    return ans;
}

int32_t main()
{
    fast
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        vector<int>v(n);
        vector<int>w(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        
        memset(dp,-1,sizeof(dp));
        
        cout<<"Case "<<++s<<": "<<coin(n,0,k,v,w)<<"\n";
    }

    return 0;
}
