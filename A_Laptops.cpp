#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a,b,count=0;
  while(n--)
  {
      cin>>a>>b;
      if(a>b) count++;
  }
      if(count) cout<<"Happy Alex"<<endl;
      else cout<<"Poor Alex"<<endl;
      return 0;
}
