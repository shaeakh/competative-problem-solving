#include <stdio.h>
void sort_ara(int size, double ara[size]){
    int temp;
    for(int i=0; i<size-1 ; i++){
        for(int j=0; j<size-1 ; j++){
            if(ara[j] > ara[j+1] ){
            temp = ara[j+1];
            ara[j+1]=ara[j];
            ara[j]=temp;
            }
        }
    }
}



int main()
{
    int i,n,j,k,l,sum;
    scanf("%d",&n);
    double ara[n];
    for(i=0;i<n;i++){
        scanf("%lf",&ara[i]);
    }
    sort_ara(n,ara);
    for(i=0;i<n;i++){
        if(n%2!=0){
            if(i==(n/2+1))
                continue;
            else{sum=sum+ara[i];}
}
        int avg=0;
        avg=sum/(n-1);
        if(ara[n/2+1]==avg){printf("YES");}



    return 0;
}}
