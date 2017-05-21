#include <stdio.h>

int main()
{
    __int64 res[51] = {0};
    int i = 0;
    int n;

    res[0] = 0;
    res[1] = 1;

    for (i = 2 ; i < 51; ++i)
    {
        res[i] = res[i-1] + res[i-2];
    }

    while(scanf("%d",&n)!=EOF&&n!=-1)
    {
        printf("%I64d\n",res[n]);
    }

    return 0;
}
