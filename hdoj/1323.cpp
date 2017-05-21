#include <stdio.h>

static void f(int n)
{
    int i = 2;
    int sum = 1;

    if (n == 1)
    {
        printf("%5d  DEFICIENT\n",n);
        return;
    }

    for (i = 2; i < n; ++i)
    {
        if ((n%i) == 0)
        {
            sum += i;
        }
    }

    if (n == sum)
    {
        printf("%5d  PERFECT\n",n);
    }
    else
    {
        if (n > sum)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
}

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while((scanf("%d",&n)!=EOF)&&(n!=0))
    {
        f(n);
    }
    printf("END OF OUTPUT\n");

    return 0;
}
