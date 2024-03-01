/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if(x==0) return y;
    else if(y==0) return x;
    else 
        return __gcd(x,y);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,g,cost=0,temp;
        cin>>n;
        int ara[n],ara2[n];
        for(i=0;i<n;i++) cin>>ara[i];
        g=ara[0];
        ara2[0]=ara[0];
        for(i=1;i<n;i++){
            g=gcd(g, ara[i]);
            ara2[i]=g;
        }
        temp = (n-1)*2;
        for(i=n-1;i<=1;i--){
            if(g==1) break;
            printf("ara[i] %d, i %d, ",ara[i],i+1);
            ara[i]=gcd(i+1,ara[i]);
            printf("a[i]* %d, ",ara[i]);
            temp = gcd(temp,ara[i]);
            printf("temp %d, ",temp);
            cost = cost + (n-i);
            printf("cost %d, ",cost);
            g = gcd(temp,ara2[i-1]);
            printf("g %d\n");
        }
        cout<<cost<<endl;
    }
    return 0;
}
/* problem link: */
