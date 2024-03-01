
#include <bits/stdc++.h>
#define ll long long int
#define i64 int64_t
#define mod 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define pi pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
using namespace std;

//please subscribe
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x=0;
        cin>>n>>m;
        vector<int> a(n),b(m);
        int c[32]={0};
        for(int &i:a){
            cin>>i;
            x=x^i;
            for(int j=0;j<31;j++){
                if((1<<j)&i==1)
                    c[j]++;
            }
        }
        for(int &i:b) cin>>i;
        if(n%2==0){
            for(int i=0;i<31;i++){
                if(c[i]%2==1){
                    for(int j:b){
                        if((1<<i)&j==1){
                            for(int k=0;k<n;k++)
                                a[k]=a[k]|j;
                            break;
                        }
                    }
                }
            }
            int y=0;
            for(int i=0;i<n;i++)
                y=y^a[i];
            cout<<y<<' '<<x<<endl;
        }
        else{
            for(int i=0;i<31;i++){
                if(c[i]%2==0){
                    for(int j:b){
                        if((1<<i)&j==1){
                            for(int k=0;k<n;k++)
                                a[k]=a[k]|j;
                            break;
                        }
                    }
                }
            }
            int y=0;
            for(int i=0;i<n;i++)
                y=y^a[i];
            cout<<x<<' '<<y<<endl;
            
        }
    }
    return 0;
}