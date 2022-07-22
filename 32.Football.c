#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int i,n=strlen(s);
    int count=0;
    for(i=0;i<n;i++){
        if( s[i]==s[i+1] ){count++;}
        if( s[i]!=s[i+1] ){count=0;}
        if( count==6 ){
                printf("YES");
                break;}
}
    if(count <6 ){
        printf("NO");
    }



    return 0;
}
