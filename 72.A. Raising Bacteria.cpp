/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
void bin_out(long long int x,int n);
using namespace std;
int main(){
    long long int x;
    cin>>x;
    int n=log2(x)+1;
    bin_out(x,n);

    return 0;
}

void bin_out(long long int x,int n){
        int ara[n]={0},p=0;
        long long int q=x;
        for(int i=n-1;i>=0;i--){
            ara[i]=q%2;
            q=(q-ara[i])/2;
            if(ara[i]==1){p++;}
        }

        cout<<p<<endl;

}



/* problem link: https://codeforces.com/problemset/problem/579/A */

