/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int ara[n];
        for (i = 0; i < n; i++)
        {
            cin>>ara[i];
            if(ara[i]==2) c++;

        }
        if(c%2!=0) cout<<-1;
        else{
            c=c/2;
            for (i = 0; i < n; i++){
                if(ara[i]==2) c--;
                if(c==0) break;
            }
            cout<<i+1;
        }
        cout<<endl;        
    }
    return 0;
}
/* problem link: */
