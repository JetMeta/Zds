#include <stdio.h>

__int64 sum(int n)
{
    int i = 1;
    __int64 x = 1;
    __int64 y = 0;

    if (n == 1)
    {
        return 1;
    }

    for (i = 1; i < n; ++i)
    {
        y = 2*x+2;
        x = y;
    }

    return y;
}

void TestSum()
{
    int i =0;
    for ( i = 1 ; i < 5 ; ++i)
    {
        printf("%d\n",sum(i));
    }
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        printf("%I64d\n",sum(n));
    }

    return 0;
}
