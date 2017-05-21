#include <stdio.h>

void f(int n)
{
    int i =0;
    int j = 0;
    int sz[100] = {0};
    int tz[100] = {0};
    sz[0] = 1;
    sz[1] = 1;

    for (i = 0 ; i < n ; ++i)
    {
        for (j = 0 ; j < i; ++j)
        {
            if (j == i-1)
            {
                printf("%d",sz[j]);
            }
            else
            {
                printf("%d ",sz[j]);
            }
        }

        if (i != 0)
        {
            printf("\n");
        }


        tz[0] = tz[i] = 1;
        for (j = 1 ; j < i; ++j)
        {
            tz[j]=sz[j-1]+sz[j];
        }

        for (j = 0 ; j < i+1; ++j)
        {
            sz[j] = tz[j];
        }
    }
}

int main()
{
    int flag = 0;
    int n = 0;

    while(scanf("%d",&n)!=EOF)
    {
        if (flag)
        {
            printf("\n");
        }

        f(n+1);

        if (!flag)
        {
            flag = 1;
        }
    }

    printf("\n");

    return 0;
}
