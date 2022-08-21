/*bismillahir~rahmanir~rahim*/
#include <stdio.h>
int main()
{
    int t,n,H,M,h,m,mm,min;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&H,&M);
        min=1441;
        while(n--){
            scanf("%d%d",&h,&m);
            if(h>=H && m>=M){ mm=(h-H)*60+(m-M); }
            else if(h<H && m<M){ mm=(m+60-M)+60*(h+23-H); }
            else if(h>H && m<M){ mm=(h-1-H)*60+(m+60-M);}
            else if(h==H && m<M){ mm=23*60+(m+60-M);}
            else if(h<H && m>=M){ mm=(h+24-H)*60+(m-M);}
            (mm<=min)?(min=mm):(m=0);
            }
            printf("%d %d\n",min/60,min%60);
        }


    return 0;
}
/* https://codeforces.com/problemset/problem/1714/A */

