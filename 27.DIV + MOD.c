#include <stdio.h>
int fuc(int a, int x){
int fin ;
fin = floor(x/a) + x%a;
return fin;
}


int main()
{
    int i,fin,fin2=0,a,x,l,r,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
            scanf("%d %d %d",&l,&r,&a);
            for(x=l;x<=r;x++){
            fin=fuc(a,x);
            if(fin>fin2){fin2=fin;}


            }
    printf("%d \n",fin2);
    fin2=0;
    }

    return 0;
}
