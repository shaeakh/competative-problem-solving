#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    char a[3];
    int i=0,x=0;
    for(i=0;i<n;i++){
        scanf("%s",&a);
        if(a[0]=='+'||a[1]=='+'||a[2]=='+'){
            x++;
        }
        else {
            x--;
        }
    }
printf("%d",x);

    return 0;
}
