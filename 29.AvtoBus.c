#include <stdio.h>
int main()
{
    long long int i,t,j,k;
    scanf("%lld",&t);
    scanf("%lld",&j);
for(i=0;i<t;i++){

    if(j<4 || j%2!=0){ printf("-1");}
    else if(j%4==0 || j%6==0){
        printf("%d",j/6);
        printf("%d",j/4);
    }
}





    }
    return 0;
}
