/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s[100];
    gets(s);
    int i,c=0;

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
    }

    if(c==strlen(s))
    {
        strlwr(s);
    }
    else if((c==strlen(s)-1) && s[0]>='a' && s[i]<='z')
    {
        strlwr(s);
        s[0]=s[0]-('a'-'A');
    }
    puts(s);

    return 0;


}

/* problem link: https://codeforces.com/problemset/problem/131/A  */
