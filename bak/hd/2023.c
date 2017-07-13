#include <stdio.h>

int main()
{
    int icnt = 0;
    int flag = 0;
    int m,n;
    int i,j;
    int t;
    int sz[50][5]= {0};
    float szavg[5] = {0};
    float fsum = 0.0;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        icnt = 0;

        for (i = 0 ; i < n; ++i)
        {
            for(j = 0 ; j < m ; ++j)
            {
                scanf("%d",&t);
                sz[i][j] = t;
            }
        }

        for (i = 0 ; i < n ; ++i)
        {
            fsum = 0.0;
            for (j = 0 ; j < m ; ++j)
            {
                fsum += sz[i][j];
            }

            if (i == n-1)
            {
                printf("%.2f\n",fsum/m);
            }
            else
            {
                printf("%.2f ",fsum/m);
            }
        }

        for (j = 0 ; j < m ; ++j)
        {
            fsum = 0;
            for (i = 0 ; i < n ; ++i)
            {
                fsum += sz[i][j];
            }

            szavg[j] = fsum/(float)n;

            if (j == m-1)
            {
                printf("%.2f\n",fsum/n);
            }
            else
            {
                printf("%.2f ",fsum/n);
            }
        }

        for (i = 0 ; i < n ; ++i)
        {
            fsum = 0.0;
            flag = 1;

            for (j = 0 ; j < m ; ++j)
            {
                if (sz[i][j]>=szavg[j])
                {
                }
                else
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
            {
                ++icnt;
            }
        }

        printf("%d\n\n",icnt);
    }

    return 0;
}
