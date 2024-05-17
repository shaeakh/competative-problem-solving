#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,n_l,n_p,x,min = 1000000000;
    int ara[4];
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&n_l,&n_p);
    ara[1] = (k * l) / n_l;
    ara[2] = c * d;
    ara[3] = p / n_p;
    for(x = 1;x <= 3;x++){
        if(ara[x] < min){
            min = ara[x];
        }
    }
    printf("%d",min/n);
}
