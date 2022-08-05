/*bismillahir~rahmanir~rahim*/
#include <stdio.h>
int main()
{
    int x,n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        n=abs(x);
        if(n==1){
                printf("2\n");
                continue;
        }

        (n%3==0)?printf("%d\n",n/3):printf("%d\n",n/3+1);
    }
    return 0;
}
/* https://codeforces.com/contest/1716/problem/A */


