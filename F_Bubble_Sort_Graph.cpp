#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int N,a;
    cin>>N;

    for(int i=0 ; i<=N-1; i++)
    {
        cin>>a;
        auto it=lower_bound(v.begin(),v.end(),a);

        if(it==v.end()) {
            v.push_back(a);
        }
        else{
            v[it-v.begin()]=a;
        } 
    }

    int ans = (int)v.size();
    cout<<ans<<endl;

	return 0;
}