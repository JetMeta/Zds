#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,m;
    __int64 sz[20];
    __int64 last = 1;
    memset(sz,0,sizeof(sz));
    sz[0] = 1;

    for (i = 1; i < 20 ; ++i)
    {
        last*=2;
        for (j = 0; j < i; ++j)
        {
            sz[i] +=sz[j];
        }

        sz[i] += last;
    }

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        printf("%d\n",sz[m-1]);
    }

    return 0;
}
