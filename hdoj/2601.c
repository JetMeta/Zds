#include <stdio.h>
#include <math.h>

static void f(__int64 n)
{
    int res = sqrt(n+1);
    int cnt = 0;
    int i;

    for (i = 2; i < res+1; ++i)
    {
        if ((n+1)%i==0)
        {
            ++cnt;
        }
    }

    printf("%d\n",cnt);
}

int main()
{
    int n;
    __int64 m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%I64d",&m);
        f(m);
    }

    return 0;
}
