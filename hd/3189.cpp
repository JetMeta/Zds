#include <stdio.h>
#include <string.h>

struct cnt_value
{
    int value;
};

struct cnt_value g_sz[1001];

static int fcnt(int n)
{
    int i = 0;
    int icnt = 0;

    for (i = 1; i < n/2+1; ++i)
    {
        if (n%i == 0)
        {
            ++icnt;
        }
    }

    ++icnt;

    return icnt;
}

static void f()
{
    int icnt = 0;
    int i = 0;

    memset(g_sz,0,sizeof(cnt_value)*1001);

    for (i = 1 ; i < 1001; ++i)
    {
        icnt = fcnt(i);

        if (g_sz[icnt].value == 0)
        {
            g_sz[icnt].value = i;
        }
    }
}

int main()
{
    int n,m;

    f();
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        if (g_sz[m].value==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",g_sz[m].value);
        }
    }

    return 0;
}
