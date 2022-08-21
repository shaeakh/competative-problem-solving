#include<stdio.h>
int main()
{
    int n=0,k=0,i=0,count=0;
    scanf("%d%d",&n,&k);
    int ara[n];
    for(i=0;i<n;i++){scanf("%d",ara[i]);}
    for(i=0;i<n;i++){if(ara[i]>=ara[k-1]){count++;}}
    printf("%d\n",count);
    return 0;
}
