#include<stdio.h>
int main(){
    int sum = 10;
    for (int i = 1; i < 10; i++)
    {
        if(i==3) i++;
        if(i==5) continue;
        if(i==9) break;
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\nsum = %d",sum);

    // int n = 5;
    // int sum = 0;

    // for (int i=1;i<=n;i++)
    // {
    //     if(i==3) continue;
    //     if(i == 4){
    //         printf("breaked !\n");
    //         break;
    //     }
    //     sum = sum + i;
    //     printf("Currently sum = %d\n",sum);
    // }
    // printf("Sum = %d",sum);


    // int n=0;

    // while (n>0)
    // {
    //     scanf("%d",&n);
    //     printf("n is positive\n");
    // }
    
    // do
    // {
    //     printf("n is positive\n");  
    // } while (n>0);
    

    
}