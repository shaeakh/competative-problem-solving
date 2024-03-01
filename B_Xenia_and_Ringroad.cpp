/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ara[m] = {0};
 
    for(int i=0;i<m;i++) cin>>ara[i];
    long long int sum = ara[0]-1 ;
    for(int i=1;i<m;i++){
        if(ara[i] < ara[i-1]) sum = sum + n - ( ara[i-1] - ara[i] );
        else
        sum = sum + (ara[i] - ara[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/339/B */
