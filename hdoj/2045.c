#include <stdio.h>

unsigned __int64 f(int n)
{
    int i = 0;
    unsigned __int64 r = 0;

    if (n == 1)
    {
        return 3;
    }

    if ( n < 4)
    {
        return 6;
    }

    r = 2;
    for (i = 1 ; i < n ; ++i)
    {
        r *= 2;
    }

    // n=4 2^4+2
    // n =5 2^5-2
    if ((n&1) == 1)
    {
        r-=2;
    }
    else
    {
        r+=2;
    }

    return r;
}

int main()
{
    int n = 0;

    while(scanf("%d",&n)!=EOF)
    {
        printf("%I64u\n",f(n));
    }

    return 0;
}
