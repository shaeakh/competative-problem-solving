#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    int n,i,j=0;
    char b[(n/2) + 1];
    char c[(n/2) + 1];
    scanf("%s",a);
    int d[3];
    n = strlen(a);




    for(i=0;i<3;i++){
        d[i]=0;
    }

    for(i=0;i<n;i++){
        if(a[i]=='+'){continue;}
       else{
           if(a[i]=='1'){d[0]++;}
           if(a[i]=='2'){d[1]++;}
           if(a[i]=='3'){d[2]++;}
    }}

    for(i=0;i<d[0];i++){
        if(d[1]==0 && d[2]==0 && i==d[0]-1) {printf("1");}
        else{printf("1+");}}
    for(i=0;i<d[1];i++){
        if(d[2]==0 && i==d[1]-1){printf("2");}
        else{printf("2+");}}
    for(i=0;i<d[2];i++){
        if(i==(d[2]-1)){printf("3");}
        else{printf("3+");}}


    return 0;
}
