#include <stdio.h>

static void f(int n)
{
    int i,j;

    for (i = 0 ; i < (n-1)/2 ; ++i)
    {
        for (j = 0; j < n-i; ++j)
        {
            if (j == i || j == n-1-i)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (j = 0 ; j < (n-1)/2+1; ++j)
    {
        if (j<(n-1)/2)
        {
            printf(" ");
        }
        else
        {
            printf("X");
        }
    }

    printf("\n");

    for (i = (n-1)/2+1; i<n; ++i)
    {
        for (j = 0 ; j < i+1; ++j)
        {
            if (j==n-1-i || j==i)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n,m;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);

        f(m);

        printf("\n");
    }

    return 0;
}
