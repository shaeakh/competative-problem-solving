#include <stdio.h>
int main()
{
    int a,b,sum,count,i,n,j,k,l,total;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        sum= b*2 + a;
        total= b*2 + a;
                    if(a!=0){
                        for(k=0;k<b;k++){
                            if(sum<=1){break;}
                            sum=sum-2;
                    }
                    for(l=0;l<a;l++){
                            if(sum==0){break;}
                            sum=sum-1;

                    }
                    }
                    else{sum=1;}
        if(sum==0){printf("%d\n",total+1);}
    else{printf("%d\n",sum);}
    }

    return 0;
}

