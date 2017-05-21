#include <stdio.h>

int main()
{
    int sz[42];
    int i;
    __int64 n;

    sz[0] = 1;
    sz[1] = 1;
    for (i = 2 ; i < 41; ++i)
    {
        sz[i] = (sz[i-1]*i)%2009;
    }

    while (scanf("%I64d",&n)!=EOF)
    {
        if (n >= 41)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",sz[n]);
        }
    }

    return 0;
}
