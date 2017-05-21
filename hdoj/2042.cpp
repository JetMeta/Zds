#include <stdio.h>
#include <string.h>

__int64 sz[32] = {0,};

static void f()
{
    int i = 0;
    memset(sz,0,sizeof(sz));

    sz[0] = 3;
    for (i = 1; i < 31; ++i )
    {
        sz[i] = (sz[i-1]-1)*2;
    }
}

int main()
{
    int n,m;

    scanf("%d",&n);

    f();

    while(n--)
    {
        scanf("%d",&m);
        printf("%I64d\n",sz[m]);
    }

    return 0;
}
