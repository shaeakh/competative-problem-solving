#include<stdio.h>
int main()
{
    int n,i,max=0,min=101,maxi,mini;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            maxi=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    printf("%d",(maxi+(n-1)-mini));
    return 0;
}
