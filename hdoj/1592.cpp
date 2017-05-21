#include <stdio.h>
#include <string.h>

static void f(int sz[],const int n)
{
    bool bbits = false;
    int i = 0;
    int bits = 1;
    int j = 0;

    memset(sz,0,sizeof(int)*512);
    sz[0] = 1;

    for (i = 0 ; i < n ; ++i)
    {
        for (j = 0 ; j < bits; ++j)
        {
            sz[j] += sz[j];
        }
        sz[0]+=1;

        for (j = 0 ; j < bits; ++j)
        {
            if (sz[j]>9)
            {
                sz[j+1] += sz[j]/10;
                sz[j] = sz[j]%10;

                if (j == (bits-1))
                {
                    bbits = true;
                }
            }
        }

        if (bbits)
        {
            bbits = false;
            ++bits;
        }
    }

    for (j = bits -1; j>=0; --j)
    {
        printf("%d",sz[j]);
    }

    printf("\n");
}

int main()
{
    int sz[512] = {0};
    int n = 0;

    while(scanf("%d",&n)!=EOF)
    {
        f(sz,n);
    }

    return 0;
}
