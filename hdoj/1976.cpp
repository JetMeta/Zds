#include <stdio.h>

struct version
{
    int ver[3];
};

static void f(version sz[])
{
    int i = 0;

    for (i = 0 ; i < 3; ++i)
    {
        if (sz[0].ver[i] > sz[1].ver[i])
        {
            printf("First\n");
            return;
        }
        else
        {
            if (sz[0].ver[i] < sz[1].ver[i])
            {
                printf("Second\n");
                return;
            }
        }
    }

    printf("Same\n");
}

int main()
{
    int n;
    version sz[2];

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d%d",&sz[0].ver[0],&sz[0].ver[1],&sz[0].ver[2]);
        scanf("%d%d%d",&sz[1].ver[0],&sz[1].ver[1],&sz[1].ver[2]);

        f(sz);
    }

    return 0;
}
