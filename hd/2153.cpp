#include <stdio.h>

static void f(int n)
{
    int i = 0,j;
    int max_n = 4*n-4;

    if (n == 1)
    {
        printf("%3d\n",1);
    }

    for (i = 0 ; i < n ; ++i)
    {
        printf("%3d",i+1);
    }

    printf("\n");

    for (i = n+1; i<n*2-1; ++i)
    {
        printf("%3d",5*n-3-i);

        for (j = 1; j < n - 1; ++j)
        {
            printf("   ");
        }
        printf("%3d\n",i);
    }

    for (i = 3*n-2 ; i>2*n-2 ; --i)
    {
        printf("%3d",i);
    }

    printf("\n");
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&(n>0&&n<11))
    {
        f(n);
    }

    return 0;
}
