#include <stdio.h>

static void f(int t)
{
    int icnt = 0;
    int i = 0;

    while(t>0)
    {
        if (t&1)
        {
            if (icnt > 0)
            {
                printf(" ");
            }

            printf("%d",i);

            ++icnt;
        }

        t>>=1;
        ++i;
    }

    printf("\n");
}

int main()
{
    int n;
    int t;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&t);
        f(t);
    }

    return 0;
}