#include <stdio.h>

unsigned __int64 f(int n)
{
    if (n < 4)
    {
        return n;
    }

    if (n == 4)
    {
        return 5;
    }

    return 3*f(n-3) + 2*f(n-4);
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        printf("%I64d\n",f(n));
    }

    return 0;
}
