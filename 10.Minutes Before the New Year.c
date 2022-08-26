#include <stdio.h>
int main()
{
    int hh,mm,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&hh,&mm);
        printf("%d\n",(23-hh)*60+60-mm);
    }
    return 0;
}
