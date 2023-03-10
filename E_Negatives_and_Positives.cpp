/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara[n];
        for (int i = 0; i < n; i++) cin>>ara[i];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-1; i++){
                if( ( ara[j]*(-1) >= ara[j+1] && ara[j]<0 ) || (ara[j+1]*(-1) > ara[j] && ara[j+1] < 0)  ){
                    ara[j]=ara[j]*(-1);
                    ara[j+1]=ara[j+1]*(-1);
                }
            }
        }
        long long int sum=0;
        for (int i = 0; i < n; i++) sum = sum + ara[i];
        cout<<sum<<endl;        
    }
    return 0;
}
/* problem link: */
