#include <stdlib.h>
#include <stdio.h>

int Sub1(int i,int j)
{
    int k = 0 ;
    int imax = i*j+1;

    if (j%i == 0)
    {
        return j;
    }

    for (k = 1 ; k < imax; ++k)
    {
        if (k%i == 0 && k%j == 0)
        {
            return k;
        }
    }
}

int GetLcm(int sz[],int len)
{
    int i = 0;
    int re = 1;

    for (i = 0 ; i < len ; ++i)
    {
        re = Sub1(sz[i],re);
    }

    return re;
}

int main()
{
    int n,nc;
    int* psz = NULL;
    int re;
    int t;
    int i = 0;

    while(scanf("%d",&n)!=EOF)
    {
        nc = n;
        psz = (int *)malloc(n*sizeof(int));
        i = 0;

        while(nc-- >0)
        {
            scanf("%d",&t);
            psz[i++] = t;
        }

        printf("%d\n",GetLcm(psz,n));
        free(psz);
        psz = NULL;
    }

    return 0;
}
