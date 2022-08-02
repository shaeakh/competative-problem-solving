#include <stdio.h>
int main()
{
    int i,m,c=0,n,k;
    scanf("%d%d",&n,&k);
    m=240-k;
    for(i=1;i<=n;i++){
        m=m-i*5;
        if(m<0){break;}
    }
    printf("%d",i-1);
    return 0;
}

