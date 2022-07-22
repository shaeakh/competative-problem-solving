#include <stdio.h>
#include <string.h>
int main()
{
    char s1[105];
    char s2[107];

    gets(s1);
    int i,n,j=0;
    for(i=0;i<105;i++){
        s2[i]=0;
    }
    n=strlen(s1);
    for(i=0;i<n;i++){
    if( s1[i] != 'A' && s1[i] != 'E' && s1[i] != 'I' && s1[i] != 'O' && s1[i] != 'U' && s1[i] != 'Y' &&
       s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u' && s1[i] != 'y'){
        if(s1[i]<'a'){ s1[i]=s1[i]+ ('a' - 'A' );}
        s2[j]= '.';
        s2[j+1]= s1[i];
        j=j+2;
    }}

 n= strlen(s2);
 s2[n]='\0';
 for(i=0;i<n;i++){
    printf("%c",s2[i]);
 }

    return 0;
}
