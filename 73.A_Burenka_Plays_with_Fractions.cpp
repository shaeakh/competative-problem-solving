/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long int a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;

        long long int x = a*d;
        long long int y = b*c;
        if(x==y){ cout<<0<<endl; }
        else if(x!=0 && y%x==0 || y!=0 && x%y==0 ){ cout<<1<<endl; }
        else { cout<<2<<endl; }
        
    }        
    return 0;
}

/* problem link: https://codeforces.com/contest/1720/problem/A */