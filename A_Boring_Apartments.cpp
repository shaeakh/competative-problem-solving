/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

ll arr[] ={
    1 , 11 ,111 ,1111,
    2 , 22 ,222 ,2222,
    3 , 33 ,333 ,3333,
    4 , 44 ,444 ,4444,
    5 , 55 ,555 ,5555,
    6 , 66 ,666 ,6666,
    7 , 77 ,777 ,7777,
    8 , 88 ,888 ,8888,
    9 , 99 ,999 ,9999
};

ll f[]={
    1,3,6,10,
11,13,16,20,
21,23,26,30,
31,33,36,40,
41,43,46,50,
51,53,56,60,
61,63,66,70,
71,73,76,80,
81,83,86,90
};
map<ll,ll>m;
void solve(){
    for (int i = 0; i < 36; i++)
    {
        m[arr[i]] = f[i];
    }

    ll t; cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<m[n]<<endl;
    }
    
    
}

int main(){
    solve();
}
/* problem link: */