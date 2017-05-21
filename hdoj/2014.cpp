#include <stdio.h>

int main()
{
    int t;
    float sum;
    int n,nc;
    int* psz = NULL;
    int zmin=0,zmax=0;

    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        nc = n;

        scanf("%d",&t);
        zmin = zmax = t;
        sum+=t;
        while(nc-- > 1)
        {
            scanf("%d",&t);
            if (t < zmin)
            {
                zmin = t;
            }

            if (t>zmax)
            {
                zmax = t;
            }

            sum+=t;
        }

        printf("%.2f\n",(sum-zmin-zmax)/(n-2));
    }

    return 0;
}
