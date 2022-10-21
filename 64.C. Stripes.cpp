/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    bool flag;
    char s[8][8];
    while(t--)
    {
        int c=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>s[i][j];
            }
        }
        for(int i=0; i<8; i++)
        {
            flag = false;
            for(int j=0; j<8; j++)
            {
                if(s[i][j]=='B')
                {
                    flag = true;
                    break;
                }
            }
            if(flag==false)
            {
                printf("R\n");
                break;
            }
            else if(flag == true )
            {
                c++;
            }
        }
        if(c==8)
        {
            printf("B\n");
        }

    }

    return 0;
}

/* problem link: https://codeforces.com/problemset/problem/1742/C */

