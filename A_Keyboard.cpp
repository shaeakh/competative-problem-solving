/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 



void solve(){    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char,int>m;

    int i = 0;
    for(char c:keyboard){
        m[c] = i;
        i++; 
    }

    char c; cin>>c;
    string s; cin>>s;
    ll n = s.size();
    if(c=='L'){
        for (ll i = 0; i < n; i++)
        {
            ll index = m[s[i]];
            index++;
            s[i] = keyboard[index];
        }
        cout<<s<<endl;
    }
    else{
        for (ll i = 0; i < n; i++)
        {
            ll index = m[s[i]];
            index--;
            s[i] = keyboard[index];
        }
        cout<<s<<endl;
    }
}

int main(){
    solve();
}
/* problem link: */