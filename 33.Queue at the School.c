#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,n,t;
    scanf("%d%d",&n,&t);
    char s[n];
    char temp;
    getchar();
    gets(s);
    while(t--){
        for(i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i += 1;
            }
        }

    }
    puts(s);


    return 0;
}
