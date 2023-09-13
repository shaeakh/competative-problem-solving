/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define for_n for(ll i = 0; i < n; i++)
#define pb push_back
#define N 5300000
using namespace std;

vector<unsigned long long> v;
unsigned int A[N/64];
unsigned long long primes[3000000];
int total;

int numFact( int n ){
  int i,j,k,l;
  j = n;
  k = 0;
  for(i=0;primes[i]<=n && n!=1;i++){
    if( n%primes[i]==0 ){
      k++;
      while(n%primes[i]== 0 )
	n = n/primes[i];
    }
  }
  return k;
}

int check(int i){
  int j = i/64;
  int k = (i%64)/2;
  return (A[j] & 1<<k)>>k;
}

void Set(int i){
  int j = i/64;
  int k = (i%64)/2;
  A[j]=(A[j] | 1<<k);
}

void sieve(){
  int i,j,k,temp,c;
  A[0]=1;
  k =sqrt(N);
  for(i=3;i<=k;i+=2){
    if(!check(i)){
      for(j=i+2*i;j<=N;j+=2*i)
	Set(j);
    }
  }
  primes[0]=2;
  total = 1;
  for(i=3;i<N;i+=2){
    if(!check(i))
      primes[total++]=i;
  }
  total = 365560;
  for(i=0;i<total;i++){
    for(j=i+1;j<total;j++){
      if( primes[i]*primes[j] > 10527451 )
	break;
      v.push_back(primes[i]*primes[j]);
    }
  }
}

int main(){
  int i,j,k,count,n,c;
  sieve();
  sort(v.begin(),v.end());
  scanf("%d",&i);
  while(i--){
    cin>>j;
    cout<<v[j-1]<<endl;
  }
}
/* problem link: */