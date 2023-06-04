/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int t;
    cin>>t;
    cin.ignore(); cin.ignore();

    while (t--)
    {
        int count = 0;
        string s;
        map <string,int>mp;

        while (getline(cin,s) && s!="")
        {
            mp[s]++;
            count++;
        }
        map<string,int>:: iterator it;
        for(it = mp.begin(); it!=mp.end(); it++ ){
            cout<<it->first<<" ";
            printf("%.4lf\n",((double)(it->second)/(double)count)*100 );
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
