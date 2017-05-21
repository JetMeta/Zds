#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

static void f(const int sz[],const int n)
{
    int i = 0;
    int res = 0;

    for (i = 0; i < n-1; ++i)
    {
        res += sz[i+1] - sz[i];
    }

    res*=2;

    printf("%d\n",res);
}

int main()
{
    int n;
    int m;
    int mc;
    int index = 0;
    int* pi = NULL;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        index = 0;
        pi = (int*)malloc(m*sizeof(int));
        mc = m;
        while(mc--)
        {
            scanf("%d",&pi[index++]);
        }

        qsort(pi,m,sizeof(int),compare);
        f(pi,m);
        free(pi);
        pi = NULL;
    }

    return 0;
}
