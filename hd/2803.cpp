#include <stdio.h>

int main()
{
    int n;
    int i;
    __int64 m;
    __int64 max = 0;
    __int64 sum = 0;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        max = 0;
        sum = 0;

        for (i = 0 ; i < n ; ++i)
        {
            scanf("%I64d",&m);
            sum+=m;
            if (m > max)
            {
                max = m;
            }
        }

        sum -= max;
        sum +=max * (2009-n+1);

        printf("%I64d\n",sum);
    }

    return 0;
}
