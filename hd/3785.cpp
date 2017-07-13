#include <stdio.h>
#include <vector>
#include <stdlib.h>

int sz[10]= {0};

int main()
{
    int n,m;
    int t;
    int i;

    while (scanf("%d%d",&n,&m)!=EOF&&!(m==0&&n==0))
    {
        memset(sz,0,10*sizeof(int));
        if(n <m)
        {
            m = n;
        }

        while(n--)
        {
            scanf("%d",&t);

            if (t<sz[m-1])
            {
            }
            else
            {
                for (i = 0; i < m; ++i)
                {
                    if (t>sz[i])
                    {
                        memmove(sz+i+1,sz+i,(m-i-1)*sizeof(int));
                        sz[i] = t;
                        break;
                    }
                }
            }
        }

        for (i = 0 ; i <m; ++i)
        {
            if (i == m-1)
            {
                printf("%d\n",sz[i]);
            }
            else
            {
                printf("%d ",sz[i]);
            }
        }
    }

    return 0;
}
