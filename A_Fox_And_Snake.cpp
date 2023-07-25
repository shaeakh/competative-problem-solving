#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            if(i%4==0)
            {
                if(j==1)
                {
                      printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            else if(i%4==2)
                {
                if(j==y)
                {
                      printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            else
           {
            printf("#");}
        }
          printf("\n");
    }


}

