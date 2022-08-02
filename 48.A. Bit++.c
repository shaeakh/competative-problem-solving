#include <stdio.h>
int main()
{
    int i=0,j,k,n;
    int count=0;
    scanf("%d",&n);
    char a[4];
    for(j=0;j<n;j++){

    for(i=0;i<4;i++){
        scanf("%c",&a[i]);
    }

    for(i=0;i<3;i++){
        if(a[i]=='+'){
                count++;
                break;}
        else if(a[i]=='-'){
            count--;
            break;
        }



                }
    }
    printf("%d",count);
    return 0;
}
