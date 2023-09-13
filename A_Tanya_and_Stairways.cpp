#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
int a[120005];
map<int,int> mp;
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],mp[a[i]]++;
	for(int i=1;i<=n;i++)
	{
		int d=1,f=0;
		while(d<=2e9)
		{
			if(mp[d-a[i]]>(d==2*a[i]))
			{
				f=1;
				break;
			}
			d*=2;
		}
		if(!f) ans++;
	}
	cout<<ans<<endl;
}