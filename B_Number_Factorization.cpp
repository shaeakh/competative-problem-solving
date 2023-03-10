#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int , int > mp ;
map<int , int > ::iterator it ;

int main()
{

    int t ;
    cin >> t;
    while (t--)
    {
        int  n ;
        cin >> n;
        int count =0;
        while(n%2==0)
        {
            n/=2;
            mp[2]++;
            count++;
        }
        for(int i = 3 ;i*i <= n ;i+=2)
        {
            while(n%i==0)
            {
                n/=i;
                mp[i]++;
                count++;
            }
        }
            
        if(n>2)
            mp[n]++;

        // for (it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout<<it->first<<" "<<it->second<<"\n";
        // }
        ll sum = 0 , ans = 1;
        while (1)
        {
            ans = 1 ;
            for (it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second > 0)
                {
                    ans = ans * (it->first);
                    mp[it->first]--;
                    count--;
                }
            }
            if(ans==1)
                break;
            // cout<<ans<<" ";


            sum += ans ;

        }
        // cout<<"\n";
        cout << sum << "\n";
        // mp.clear();


    }





    return 0;
}