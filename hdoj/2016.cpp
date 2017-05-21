#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,nc;
    int i;
    int* psz=NULL;
    int t;
    int imin;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        i = 0;
        nc = n;
        psz = (int *)malloc(n*sizeof(int));

        scanf("%d",&t);
        imin = 0;
        psz[i++] = t;
        while(nc-- > 1)
        {
            scanf("%d",&t);
            psz[i++] = t;

            if (t < psz[imin])
            {
                imin = i-1;
            }
        }

        t = psz[0];
        psz[0] = psz[imin];
        psz[imin] = t;

        for (i = 0 ; i < n ; ++i)
        {
            if (i == n -1)
            {
                printf("%d\n",psz[i]);
            }
            else
            {
                printf("%d ",psz[i]);
            }
        }

        free(psz);
        psz =NULL;
    }

    return 0;
}
