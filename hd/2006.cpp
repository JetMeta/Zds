#include <stdio.h>

int main()
{
    int n;
    int t;
    __int64 r = 1;

    while(scanf("%d",&n)!=EOF)
    {
        r = 1;
        while(n-- > 0)
        {
            scanf("%d",&t);

            if ((t&1) == 1)
            {
                r*=t;
            }
        }

        printf("%I64d\n",r);
    }

    return 0;
}
