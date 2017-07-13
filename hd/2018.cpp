#include <stdio.h>

__int64 f(int n)
{
    int i;
    __int64 last[] = {2,3,4};
    __int64 result = n;

    if (n < 5)
    {
        return result;
    }

    for (i = 5; i <= n ; ++i)
    {
        result = last[0] + last[2];
        last[0] = last[1];
        last[1] = last[2];
        last[2] = result;
    }

    return result;
}

int main()
{
    int n;

    while((scanf("%d",&n)!=EOF)&&n!=0)
    {
        printf("%I64d\n",f(n));
    }

    return 0;
}
