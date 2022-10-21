/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,t=0,c=0;
    cin>>n;
    int ara[n]={0};
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum=sum+ara[i];
    }
    sort(ara,ara+n);
    sum = sum/2;
    for(int i=n-1;i>=0;i--){
        t=t+ara[i];
        c++;
        if(t>sum){
            cout<<c;
            break;
        }
    }


    return 0;
}

/* problem link: https://codeforces.com/problemset/problem/160/A*/
