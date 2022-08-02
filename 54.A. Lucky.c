#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,j=0,n,z;
    scanf("%d",&n);
    int b[n];
    char a[7];
    for(i=0;i<n;i++){
            scanf("%s",a);

        z=(a[0]+a[1]+a[2])-(a[3]+a[4]+a[5]);
        if(z==0){
            b[i]=1;
        }
        else{
            b[i]=0;
        }

    }
    for(i=0;i<n;i++){
        if(b[i]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
