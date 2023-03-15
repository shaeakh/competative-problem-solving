/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i=0;
        cin>>n>>k;
        if(n>k) k = k * ceil ( ( (double) n) / ( (double) k)   );
        i = ceil ( ( (double) k) / ( (double) n)   );
        cout<<i<<endl;
    }
    return 0;//
}
/* problem link: */
