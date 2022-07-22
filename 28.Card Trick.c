#include <stdio.h>
int in_ara(int size, int ara[size]){

for(int i=0;i<size;i++){
    scanf("%d",&ara[i]);
}
}
void sort_ara(int size, int ara[size]){
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
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,m;
        scanf("%d",&n);
        int ara1[n];
        in_ara(n,ara1);
        sort_ara(n,ara1);

        scanf("%d",&m);
        int ara2[m];
        in_ara(m,ara2);
        sort_ara(m,ara2);

        if(ara1[n-1] > ara2[m-1] ){printf("Alice\n");}
        else{
            printf("Bob\n");
        }


    }

    return 0;
}

