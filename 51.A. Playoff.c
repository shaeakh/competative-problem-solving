#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,i=0,t=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
    x= pow(2,n)-1;
    printf("%d\n",x);
    }
    return 0;
}
