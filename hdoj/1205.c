#include <stdio.h>

int main()
{
    int n = 0L;
    int m = 0L;
    int k =0L;
    __int64 sum = 0;
    __int64 max = 0;

    scanf("%d",&n);

    while(n-- > 0)
    {
        sum = 0;
        max = 0;

        scanf("%d",&m);

        while (m-- > 0)
        {
            scanf("%d",&k);
            sum += k;

            if(k > max)
            {
                max = k;
            }
        }

        sum -= max;

        if (max > sum+1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }

    return 0;
}
