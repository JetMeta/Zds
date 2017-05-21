#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int sz[20000] = {0,};
int* psz = NULL;

int gcd(int a,int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

static f(int m)
{
    int icnt = 0;
    int i,j;
    int k;
    memset(sz,0,sizeof(sz));
    memset(psz,0,(m+1)*sizeof(int));

    //z k = sqrt((double)m) + 1;
    k = m/2+1;

    for (i = 2 ; i < k; ++i)
    {
        if ((m%i) == 0)
        {
            sz[i] = 1;
        }
    }

    for (i = 2; i < k ; ++i)
    {
        if (sz[i])
        {
            for (j = i ; j < m+1; j += i)
            {
                psz[j] = 1;
            }
        }
    }

    for (i = 1; i < m; ++i)
    {
        if (psz[i] == 0)
        {
            /*
            if (gcd(m,i)>1)
            {
                printf("-%d %d %d-",gcd(m,i),i,m);
            }
            */

            ++icnt;
        }
    }

    printf("%d\n",icnt);
}

int main()
{
    int n,m;

    psz = (int*)malloc(36000*sizeof(int));

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        f(m);
    }

    free(psz);

    return 0;
}
