#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],t[101];
    gets(s);
    gets(t);
    int n=strlen(s),i;
    for(i=0;i<n;i++){
        if(s[i]!=t[n-i-1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");


    return 0;
}
