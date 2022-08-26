#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,k,l,count=0;
    int s1[26];
    char a[101];
    char s[26];
    for(i=0;i<26;i++){
        s1[i]=0;
    }
    for(i=0;i<26;i++){
        s[i]= 'a'+i;
    }
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<26;i++){
        for(j=0;j<n;j++){
            if(a[j]==s[i]){
                s1[i]++;
            }
        }
    }
    for(i=0;i<26;i++){
        if(s1[i]>0){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }


    return 0;
}
