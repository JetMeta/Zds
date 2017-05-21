#include <stdio.h>
#include <stdlib.h>

int comp(const void * a,const void * b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int i;
    int n;

    int sz[10000] = {0};

    while(scanf("%d",&n)!=EOF)
    {
        for (i = 0 ; i < n ; ++i)
        {
            scanf("%d",&sz[i]);
        }

        qsort(sz,n,sizeof(int),comp);

        for (i = 0 ; i < n/2; ++i)
        {
            if (i == 0)
            {
                printf("%d %d",sz[n-1-i],sz[i]);
            }
            else
            {
                printf(" %d %d",sz[n-1-i],sz[i]);
            }
        }

        if (n&1)
        {
            printf(" %d\n",sz[n/2]);
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
