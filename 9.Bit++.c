#include <stdio.h>
int main()
{
    char a[3];
    int n,i,j,t,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",a);
        if(a[0]=='+'||a[1]=='+'||a[2]=='+'){count++;}
        else if(a[0]=='-'||a[1]=='-'||a[2]=='-'){count--;}

    }
    printf("%d",count);
    return 0;
}
