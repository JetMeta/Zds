#include <stdio.h>

int sz[22] = {0};

static void fill()
{
    int i = 1;

    sz[0] = 1;
    for (i = 1; i < 22; ++i)
    {
        sz[i] = sz[i-1]*2;
    }
}

static void f(int t)
{
    int icnt = 0;
    int i = 0;

    for (i = 0 ; i < 22; ++i)
    {
        if (t%sz[i]==0)
        {
            int r = t/sz[i];
            if (((r)&1)==1)
            {
                if (icnt!=0)
                {
                    printf(" ");
                }

                printf("%d %d",r,i);
                ++icnt;
            }
        }
    }

    printf("\n");
}

int main()
{
    int n;
    int t;

    fill();

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&t);
        f(t);
    }

    return 0;
}
