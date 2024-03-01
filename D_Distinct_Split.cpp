/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> pre;
        set<char> post;
        int pr[n];
        int ps[n];
        for (int i = 0; i < n; i++)
        {
            pre.insert(s[i]);
            pr[i] = pre.size();

            post.insert(s[n-1-i]);
            ps[n-1-i] = post.size();
        }
        int m = INT_MIN;
        for (int i = 0; i < n-1; i++)
        {
            if ( pr[i]+ps[i+1] > m ) m = pr[i]+ps[i+1] ;
        }
        cout<<m<<endl;
                        
    }
    return 0;
}
/* problem link: */
