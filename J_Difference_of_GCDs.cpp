/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,i=0;
        cin>>n>>l>>r;
        vector<int> v;

        while (i<n )
        {            
            i++; 
            if(l%i==0) v.push_back(l); 
            else{
                int t,p;
                t = l/i;
                p = (t+1)*i;
                if(p<=r) v.push_back(p);                
            }
            
        }
        if(v.size()==n){
            cout<<"YES\n";
            for(int i=0;i<n;i++) cout<<v[i]<<" ";
            cout<<endl;
        }
            
        else cout<<"NO\n";
    }
    return 0;
}
/* problem link: */
