#include<stdio.h>
int main()
{
    int t;
    scanf("%lld",&t);
    int a[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]>=-5000 && a[i]<=1399) printf("Division 4\n");
        else if(a[i]>=1400 && a[i]<=1599) printf("Division 3\n");
        else if(a[i]>=1600 && a[i]<=1899) printf("Division 2\n");
        else if(a[i]>=1900 && a[i]<=5000) printf("Division 1\n");
    }
    return 0;
}
