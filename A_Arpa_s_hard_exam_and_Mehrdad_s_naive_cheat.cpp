/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes cout<<"YES\n" 
#define no  cout<<"NO\n" 

void solve(){  
    ll n; cin>>n;
    if(n==0){
        cout<<1<<endl;
        return;
    }
    int arr[] = {6,8,4,2};  
    
    int index = (n%4);
    cout<<arr[index]<<endl;
}

int main(){
    solve();
}
/* problem link: */