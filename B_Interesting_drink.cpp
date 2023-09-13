/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> vect,int x,int n){

    if(x<ara[0]) return 0;
    if(x>=ara[n-1]) return n;

    int l=0,h=n-1;
    while(h-l>1){
        int mid=(l+h)/2;
        if(ara[mid]<=x)  l=mid+1;
        else h=mid;
    }
    if(ara[l]>x) return l;
    else if(ara[h]>=x) return h;
    else return -1;
}



void solve() {
    int n,d,x;
    cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++) cin>>ara[i];
    sort(ara,ara+n);
    cin>>d;
    while (d--)
    {
        cin>>x;
        cout<<upper_bound(ara,x,n)<<endl;
    }
    

}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
/* problem link: https://codeforces.com/contest/706/problem/B*/