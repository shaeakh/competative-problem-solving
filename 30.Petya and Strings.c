#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int n=strlen(s1);
    int i,count=0,count1=0;
    for(i=0;i<n;i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+( 'a' - 'A' );
        }
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]=s2[i]+( 'a' - 'A' );
        }
    }

    for( i=0;i<n;i++ ){
        if( s1[i]==s2[i] ){count++;}
        if( s1[i]>s2[i] ){printf("1");
        break;
        }
        if( s1[i]<s2[i] ){printf("-1");
        break;
        }

    }
    if(count==n){printf("0");  }


    return 0;
}
