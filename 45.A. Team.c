#include<stdio.h>
int main()
{   int n,i,a,b,c,s=0   ;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c==2 || a+b+c ==3){
            s++;

        }

    }
     printf("%d",s);
}

