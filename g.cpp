#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
vector<int> arr[10];

int pre[10][1005];
int dp[1005][1005];

int solve(int pos, int last)
{
    if (pos == n) return 0;

    int &ret = dp[pos][last];

    if (ret != -1) return ret;
    
    ret = 0;

    int num = arr[1][pos];

    bool flag = 1;

    for (ll i=1;i<=k;i++) 
        if (pre[i][num] < pre[i][last]) flag = 0;
    
    if (flag)ret = max(ret, 1 + solve(pos + 1, num));
        ret = max(ret, solve(pos + 1, last));
    
    return ret;
}
int main()
{
    cin>>n>>k;
    for (ll j=1;j<=k;j++)
    {
        for (ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr[j].push_back(x);
            pre[j][arr[j][i]] = i + 1;
        }
    }
    memset(dp,-1,sizeof dp);
    cout << solve(0, 0);
    return 0;
}