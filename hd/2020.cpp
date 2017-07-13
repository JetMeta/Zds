#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

int comp(const void * p1,const void * p2)
{
    return *(int *)p2 - *(int *)p1;
}

int main()
{
    int n,nc;
    int j,t;
    int* psz = NULL;

    while(scanf("%d",&n)!=EOF &&n!=0)
    {
        map<int,int> zmap;
        nc = n;
        j =0;
        psz = (int*)malloc(n*sizeof(int));

        while(nc-- > 0)
        {
            scanf("%d",&t);

            if (t < 0)
            {
                psz[j] = -t;
                zmap[-t] = 1;
            }
            else
            {
                psz[j] = t;
                zmap[t] = 0;
            }

            ++j;
        }

        qsort(psz,n,sizeof(int),comp);

        for (j = 0 ; j < n; ++j)
        {
            if (j == n-1)
            {
                if (zmap[psz[j]]==1)
                {
                    printf("-%d\n",psz[j]);
                }
                else
                {
                    printf("%d\n",psz[j]);
                }
            }
            else
            {
                if (zmap[psz[j]]==1)
                {
                    printf("-%d ",psz[j]);
                }
                else
                {
                    printf("%d ",psz[j]);
                }
            }
        }

        free(psz);
        psz =NULL;
    }

    return 0;
}
