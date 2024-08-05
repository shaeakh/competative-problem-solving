// بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a = 7, b = 1;

    /*
       NOT
       ==========

       !(0 1 1 1) = 1 0 0 0
       applying 2's complement
       2s_complement(1 0 0 0) = 1 0 0 0 = 8

   */

    printf("b not = %lld \n", ~b);

    /*
        AND
        ==========

        0 1 1 1
        0 0 0 1
       ---------
        0 0 0 1 (1)
    */
    // printf("a and b = %lld \n",a&b);

    /*
        OR
        ==========

        0 1 1 1
        0 0 0 1
       ---------
        0 1 1 0 (6)
    */
    printf("a or    b = %lld \n", a | b);

    /*
        X-OR
        ==========

        0 1 1 1
        0 0 0 1
       ---------
        0 1 1 0 (4+2=6)
    */
    printf("a x-or  b = %lld \n", a ^ b);

    /*
        X-NOR
        ==========

        0 1 1 1
        0 0 0 1
       ---------
        0 1 1 0 (4+2=6)

        X-NOR = NOT(X-OR)

        !(0 1 1 0) = 1 0 0 1

        as this is a negetive number....
        applying 2's complement
        2s_complement(1 0 0 1) = 0 1 1 1 = 7

    */
    printf("a x-nor b = %lld \n", ~(a ^ b));

    /*
        BITWISE LEFT-SHIFT
        =======================

        c * ( 2^d )
        2 * ( 2^4 ) = 32
    */

    long long int c = 2, d = 4;
    printf("a bitwise left  b = %lld \n", c << d);

    /*
        BITWISE RIGHT-SHIFT
        =======================

        f / ( 2^g )
        32 / ( 2^1 ) = 16
    */
    int f = 32, g = 1;
    printf("a bitwise right b = %lld \n", f >> g);
}

int main()
{
    solve();
}