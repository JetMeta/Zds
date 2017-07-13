#include <stdio.h>

int sz[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

const today = 31+28+31+30+31+30+31+31+30+21;

static void init()
{
    int i = 0;

    for (i = 1 ; i < 13 ; ++i)
    {
        sz[i]+=sz[i-1];
    }
}

static void f(const int m,const int d)
{
    int curday = sz[m-1]+d;
    if (curday>today)
    {
        printf("What a pity, it has passed!\n");
    }
    else
    {
        if (curday<today)
        {
            printf("%d\n",today - curday);
        }
        else
        {
            printf("It's today!!\n");
        }
    }
}

int main()
{
    int t;
    int m,d;

    init();
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&m,&d);
        f(m,d);
    }

    return 0;
}
