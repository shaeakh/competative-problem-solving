#include<stdio.h>
int main()
{
    int i=0,n,k;
    scanf("%d %d",&n,&k);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    //for(i=0;i<n;i++){printf("%d",ara[i]);}
    int count=0;
    for(i=0;i<n;i++){
        if(ara[i]==0){
                continue;}
        else if(ara[i]>=ara[k-1]){
        count++;}
    }

        printf("%d",count);

return 0;
}


