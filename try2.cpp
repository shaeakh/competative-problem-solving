/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define for_n for(ll i = 0; i < n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
#define pb push_back

#define MAX_N 20
#define EMPTY_VALUE -1

int mem[MAX_N];
int next_index[MAX_N];

int f(int i, vector<int> &A) {
    if (mem[i] != EMPTY_VALUE) {
        return mem[i];
    }
    
    int ans = 0;
    for (int j = i + 1;j < A.size();j++) {
        if (A[j] > A[i]) {
            int subResult = f(j, A);
            if (subResult > ans) {
                ans = subResult;
                next_index[i] = j;
            }
        }
    }
    
    mem[i] = ans + 1;
    return mem[i];
}

vector<int> findLIS(vector<int> A){
  int ans = 0;
  
  for(int i = 0;i<A.size();i++) {
      mem[i] = EMPTY_VALUE;
      next_index[i] = EMPTY_VALUE;
  }
  
  int start_index = -1;
  
  for(int i = 0;i<A.size();i++) {
      int result = f(i, A);
      if (result > ans) {
          ans = result;
          start_index = i;
      }
  }

  vector<int> lis;
  while(start_index != -1) {
      lis.push_back(A[start_index]);
      start_index = next_index[start_index];
  }
  return lis;
}

void computeLPSArray(char *pat, int M, int *lps);

int  main(){
    // vector<int> a = {1,2,4,3,5,9,8,7,6};
    // vector<int> g = findLIS(a);
    // for(int i=0;i<g.size();i++) cout<<g[i]<<" ";
    // cout<<endl;
    int lps,m;
    string s = "IamshaeakhIam";
    computeLPSArray( &s[0], s.size(), &lps);

    return 0;
}








void computeLPSArray(char *pat, int M, int *lps)
  {
      int len = 0;  // lenght of the previous longest prefix suffix
      int i;
      lps[0] = 0; // lps[0] is always 0
      i = 1;

      // the loop calculates lps[i] for i = 1 to M-1

      while (i < M)
      {         
        if (pat[i] == pat[len])
         {
           len++;
           lps[i] = len;
           i++;
         }
         else // (pat[i] != pat[len])
         {
           if (len != 0)
             len = lps[len-1];

           else // if (len == 0)
           { 
             lps[i] = 0;
             i++;
           }
         }
      }
      cout<<len<<endl;
  }

