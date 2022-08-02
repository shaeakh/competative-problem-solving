#include <stdio.h>
int main()
{
    int x,i,t,count;
    scanf("%d",&t);
    int ara[3];
    while(t--){
        count=0;
        scanf("%d%d%d%d",&x,&ara[0],&ara[1],&ara[2]);
        while(ara[x-1]!=0){
            x=ara[x-1];
            count++;
            if(x==0 && count!=2){
                    break; }

            }
            if(count==2) printf("YES\n");
            else printf("NO\n");
        }




//        if(ara[x-1]!=0){
//            x=ara[x-1];
//            if(ara[x-1]!=0){
//                x=ara[x-1];
//                printf("YES\n");
//            }
//            else{
//                printf("NO\n");
//            }
//        }
//        else{
//                printf("NO\n");
//            }


  //  }
    return 0;
}
