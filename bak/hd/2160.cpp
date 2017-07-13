#include <stdio.h>

static void f(int n)
{
    int k;
    __int64 i,j,last;
    i = 1;
    j=2;

    if (n<3)
    {
        printf("%d\n",n);
        return;
    }

    for (k = 2; k<n; ++k)
    {
        last = j;
        j+=i;
        i=last;
    }

    printf("%I64d\n",j);
}

int main()
{
    int n,m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
