/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b;
        cin>>n>>a>>b;
        if(a>b) cout<<"1\n";
        else{
            if(n%a==0) cout<<n/a<<"\n";
            else cout<< n/a+1 <<"\n";
        }
    }
    return 0;
}
/* problem link: */

// int main() {
//     cout << "hello";
// }
