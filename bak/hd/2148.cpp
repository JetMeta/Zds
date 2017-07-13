#include <stdio.h>

int main()
{
    int t;
    int n,k;
    int icnt = 0,i;
    int sz[1024] = {0};

    scanf("%d",&t);

    while (t--)
    {
        icnt = 0;
        scanf("%d%d",&n,&k);

        for (i = 0 ; i < n ; ++i)
        {
            scanf("%d",&sz[i]);
        }

        for (i = 0 ; i < n ; ++i)
        {
            if (sz[i] > sz[k-1])
            {
                ++icnt;
            }
        }

        printf("%d\n",icnt);
    }

    return 0;
}
