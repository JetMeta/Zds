#include <stdio.h>
#include <stdlib.h>

static int diff(const int x,const int y)
{
    int cnt = 0;
    int z = x^y;
    while(z>0)
    {
        if (z&1)
        {
            ++cnt;

        }

        z = z>>1;
    }

    return cnt;
}

static int findmin(int* psz,int m,int val)
{
    int i = 0;
    int min_diff = 32;
    int min_val = 0;
    int temp_diff = 0;

    for (i = 0 ; i < m ; ++i)
    {
        temp_diff = diff(psz[i],val);
        if (temp_diff<min_diff)
        {
            min_diff = temp_diff;
            min_val = psz[i];
        }
        else
        {
            if (temp_diff == min_diff)
            {
                if (psz[i]<min_val)
                {
                    min_val = psz[i];
                }
            }
        }
    }

    return min_val;
}

int main()
{
    int tc=0;
    int m,n;
    int cnt = 0;
    int index = 0;
    int*psz = NULL;

    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&m,&n);
        cnt = m;
        index = 0;
        psz = (int*)malloc(m*sizeof(int));

        while(cnt--)
        {
            scanf("%d",&psz[index++]);
        }

        cnt = n;
        while(cnt --)
        {
            int val;
            scanf("%d",&val);

            printf("%d\n",findmin(psz,m,val));
        }

        free(psz);
        psz = NULL;
    }

    return 0;
}
