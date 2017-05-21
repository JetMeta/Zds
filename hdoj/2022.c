#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j;
    int t;
    int m,n;
    int ix,iy;
    int imax = 0;
    int val;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        imax = -1;

        for ( i = 1; i < m+1; ++i)
        {
            for (j = 1; j < n+ 1; ++j)
            {
                scanf("%d",&t);
                if (abs(t)>imax)
                {
                    imax = abs(t);
                    ix = i;
                    iy = j;
                    val = t;
                }
            }
        }

        printf("%d %d %d\n",ix,iy,val);
    }

    return 0;
}
