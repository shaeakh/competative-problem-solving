/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a=0,b=0;
        bool ok = false;
        int f = cbrt(n);
        for(a=1;a<=f;a++){
            long long int temp = n - a*a*a;
            b = cbrt( (double) temp) ;
            //if(a==5779) printf("n %lld - a^3 %lld = b^3 %lld , b %lld\n", n,a*a*a,temp,b ) ;
            if( (b*b*b+ a*a*a)==n && b>0 ){
                ok = true;
                break;
            }
        }
        if(ok)  cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/* problem link: */
