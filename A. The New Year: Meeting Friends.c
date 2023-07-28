#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int sum=(abs(a-b)+abs(b-c)+abs(a-c))/2;
    printf("%d",sum);
    return 0;
}
