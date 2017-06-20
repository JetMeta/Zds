#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int index =0,i=0,j=0;
    int sz[1024] = {0};
    int icnt = 0;
    int sum = 0;

    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        icnt = 0;
        index = 0;
        memset(sz,0,sizeof(sz));
        for (i = 0 ; i < n; ++i)
        {
            scanf("%d",&sz[index++]);
        }

        for (i = 0; i < n; ++i)
        {
            icnt = 0;
            for (j = i+1 ; j < n; ++j )
            {
                if (sz[j]<sz[i])
                {
                    ++icnt;
                }
            }
            sum+=icnt;
        }
        printf("%d\n",sum);
    }

    return 0;
}
