#include <stdio.h>

int main()
{
    int i;
    int l,r,t;
    long sum1 = 0,sum2 = 0;

    while(scanf("%d %d",&l,&r)!=EOF)
    {
        if (l > r)
        {
            t = r;
            r = l;
            l = t;
        }

        sum1 = 0;
        sum2 = 0;
        for (i = l ; i < r+1; ++i)
        {
            if ((i&1) == 1)
            {
                sum1 += i*i*i;
            }
            else
            {
                sum2 += i*i;
            }
        }

        printf("%ld %ld\n",sum2,sum1);
    }

    return 0;
}
