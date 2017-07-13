#include <stdio.h>

static void f(int m)
{
    int i,j;

    for (i = 1 ; i <m+1 ; ++i)
    {
        for (j = 1 ; j<m+1; ++j )
        {
            if (j == m)
            {
                printf("%d\n",i*j);
            }
            else
            {
                printf("%d ",i*j);
            }
        }
    }
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
