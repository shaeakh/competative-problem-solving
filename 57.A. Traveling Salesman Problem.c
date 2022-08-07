/*bismillahir~rahmanir~rahim*/
#include <stdio.h>
int main()
{
    int i,x,y,n,t;

    scanf("%d",&t);
    while(t--){
        int x1=0,x2=0,y1=0,y2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            if( x==0 && y<y2){ y2=y;}
            if( x==0 && y>y1){ y1=y;}
            if( y==0 && x<x2){ x2=x;}
            if( y==0 && x>x1){ x1=x;}
        }
        printf("%d\n",2*(x1+y1-x2-y2));



    }
    return 0;
}
/* https://codeforces.com/contest/1713/problem/0 */


