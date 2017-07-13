#include <stdio.h>
#include <string.h>

int sz[121][121];

static int f(int n,int m)
{
    int i = 0;
    if (n == 0)
    {
        return 1;
    }

    if (n < m )
    {
        return 0;
    }

    if (n == m)
    {
        return 1;
    }

    if (sz[n][m]!=-1)
    {
        return sz[n][m];
    }

    sz[n][m] = 0;
    for (i = m ; i <= n; ++i)
    {
        sz[n][m] += f(n-i,i);
    }

    return sz[n][m];
}

int main()
{
    int n;
    memset(sz,-1,sizeof(sz));

    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f(n,1));
    }

    return 0;
}
