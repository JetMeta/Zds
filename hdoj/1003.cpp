#include <stdio.h>
#include <stdlib.h>

void max_seq(int sz[],int len)
{
    int i =0;
    int maxsofar = 0;
    int maxendinghere = 0;

    for (i = 0 ; i < len ; ++i)
    {
        maxendinghere = (maxendinghere+sz[i]>0?maxendinghere+sz[i]:0);
        maxsofar = (maxsofar>maxendinghere?maxsofar:maxendinghere);
    }

    printf("%d\n",maxsofar);
}

void findmax(int sz[],int len,int n)
{
    int i = 0;
    int iMax = 0;

    for (i = 0 ; i < len ; ++i)
    {
        if (sz[i] > iMax)
        {
            iMax = sz[i];
        }
    }
}

void max_seq2(int sz[],int len,int n)
{
    int i =0;
    int istart = 0,iend=0,istart2=0;
    int maxsofar = 0;
    int maxendinghere = 0;
    int imax = sz[0],index=0;

    for (i = 0 ; i < len ; ++i)
    {
        if (sz[i] > imax)
        {
            imax = sz[i];
            index = i;
        }

        if (maxendinghere+sz[i]>0)
        {
            maxendinghere = maxendinghere+sz[i];
        }
        else
        {
            if (maxendinghere+sz[i]<0)
            {
                istart2 = i+1;
            }

            maxendinghere = 0;
        }

        if (maxsofar > maxendinghere)
        {
        }
        else
        {
            istart = istart2;
            iend = i;
            maxsofar = maxendinghere;
        }
    }

    printf("Case %d:\n",n);

    if (imax <= 0)
    {
        printf("%d %d %d\n",imax,index+1,index+1);
    }
    else
    {
        printf("%d %d %d\n",maxsofar,istart+1,iend+1);
    }
}

int main()
{
    int n = 0,m=0;
    int i = 0 ,j = 0;
    int * psz = NULL;

    scanf("%d",&n);
    i = n;
    for (i = 0 ; i < n ; ++i)
    {
        scanf("%d",&m);
        psz = (int*)malloc(m*sizeof(int));

        for (j = 0 ; j < m ; ++j)
        {
            scanf("%d",&psz[j]);
        }

        max_seq2(psz,m,i+1);

        if (i != n-1)
        {
            printf("\n");
        }

        free(psz);
    }

    return 0;
}
