/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int l,r,a;
    int div,temp,mod;
    cin>>n;
    while(n--){
        cin>>l>>r>>a;
        div = (r/a) + (r%a);
        temp = r-(r%a)-1;
        if(temp<l){ mod = -1;}
        else{ mod=(temp/a) + a-1;}
       // cout<<"Div = "<<div<<" mod = "<<mod<<" temp = "<<temp<<endl;
        (div>mod) ? ( cout<<div<<endl ) : ( cout<<mod<<endl );
    }
    return 0;
}
/* problem link: */
