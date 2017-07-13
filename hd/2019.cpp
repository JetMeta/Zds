#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    int n,m,nc;
    int i=0;
    int* psz =NULL;
    int j = 0;

    scanf("%d %d",&n,&m);

    while(!(n==0&&m==0))
    {
        if (n == 0)
        {
            printf("%d\n",m);
            scanf("%d %d",&n,&m);
            continue;
        }

        psz = (int *)malloc((n+1)*sizeof(int));

        i=0;
        nc = n;
        while(nc-- > 0)
        {
            scanf("%d",&t);
            psz[i++] = t;
        }

        for (i = 0 ; i < n; ++i)
        {
            if (psz[i]<m)
            {
            }
            else
            {
                for (j = n; j>i; j--)
                {
                    psz[j]=psz[j-1];
                }

                psz[i] = m;

                break;
            }
        }

        for (i = 0 ; i < n+1; ++i)
        {
            if (i!=n)
            {
                printf("%d ",psz[i]);
            }
            else
            {
                printf("%d\n",psz[i]);
            }

        }

        free(psz);
        psz = NULL;

        scanf("%d %d",&n,&m);
    }

    return 0;
}
