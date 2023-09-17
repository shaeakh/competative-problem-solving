#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>primesList;

bool check(int N,int pos){
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos){
    return N = N | (1<<pos);
}

void sieve(ll n){
    ll N = (n+32-1)/32;    //cout<<"int N "<<N<<endl;
    
    vector<int>status(N>>5,0);
    int i,j,sqrtn;
    sqrtn = int ( sqrt(n) ); 

    primesList.push_back(2);
    //cout<<primesList[0];
    for(int i=3; i<=sqrtn; i += 2){
        if(check(status[i>>5],i&31)==0){
            cout<<i<<" ";
            primesList.push_back(i);
            for(j=i*i; j<=N; j += 2*i){
                status[j>>5] = Set(status[j>>5],j&31);
            }
        }
    }
    
    for(int i=0; i<primesList.size(); i += 1){
        cout<<primesList[i]<<" ";
    }
}

int main(){
    ll n; cin>>n;
    sieve(n);
}
