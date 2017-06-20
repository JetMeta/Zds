#include <stdio.h>

//z 走楼梯，一次只能走一步或是两步

void f(int m)
{
    __int64 i = 0;
    __int64 f1,f2;
    __int64 sum = 0;
    f1 = 1;
    f2 = 2;

    if (m < 4)
    {
        printf("%d\n",m-1);
        return;
    }

    for (i = 3 ; i < m; ++i)
    {
        sum = f1+f2;
        f1 = f2;
        f2 = sum;
    }

    printf("%I64d\n",f2);
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
