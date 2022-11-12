/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int n,x;
    int c=0;
    cin>>n>>x;

    for (int i = 1; i <= n; i++)
    {
        if((i*n < x)||(x%i != 0)){continue;}
        else
            c++;
    }
    cout<<c<<endl;
    

    return 0;
}
/* problem link: https://codeforces.com/problemset/problem/577/A */
