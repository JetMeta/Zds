#include <stdio.h>

static void f(int n)
{
    __int64 m = n+1;
    __int64 res1,res2;

    res1 = (m-1)*(m-1)*(m-1);
    res2 = (m)*(m)*m;

    printf("%I64d %I64d\n",res1,res2);
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
