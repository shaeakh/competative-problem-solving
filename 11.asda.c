#include <stdio.h>
int main()
{
    int ara[4];
    int i,j,count=0;
    for(i=0;i<4;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(ara[i]==ara[j] && i!=j){
                count++;
            }
            if(count==3) break;
        }
    }

printf("%d\n",count-1);
    return 0;
}
