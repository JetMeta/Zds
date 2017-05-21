#include <stdio.h>
#include <stdlib.h>

int comp(int* e1,int* e2)
{
    return *e1-*e2;
}

int comp2(const int* e1,const int* e2)
{
    return *e1-*e2;
}

int comp3(const void* e1,const void* e2)
{
    return *(const int *)e2 - *(const int *)e1;
}

int main()
{
    int i,j;
    int n,m;
    int* psz = NULL;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        psz = (int*)malloc(n*sizeof(int));

        for (i = 0; i < n; ++i)
        {
            scanf("%d",&j);
            psz[i] = j;
        }

        qsort(psz,n,sizeof(int),comp3);

        for (i = 0 ; i < m ; ++i)
        {
            if (i == m-1)
            {
                printf("%d",psz[i]);
            }
            else
            {
                printf("%d ",psz[i]);
            }
        }

        free(psz);

        printf("\n");
    }

    return 0;
}
