#include <stdlib.h>
#include <stdio.h>

int comp(const void * p1,const void * p2)
{
    return *(int*)p1 - *(int*)p2;
}

int main()
{
    int n;
    int m;
    int i = 0;
    int* sz = NULL;
    int lm;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d",&m);

        i = 0;
        lm = m;
        sz = (int *)malloc(m*sizeof(int));
        while(m-- > 0)
        {
            scanf("%d",&sz[i++]);
        }

        qsort(sz,lm,sizeof(int),comp);

        for (i = 0 ; i < lm; ++i)
        {
            if (i == (lm-1))
            {
                printf("%d\n",sz[i]);
            }
            else
            {
                printf("%d ",sz[i]);
            }

        }

        free(sz);
        sz = NULL;
    }

    return 0;
}
