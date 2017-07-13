#include <stdio.h>

static void f(int n)
{
    int sum = 0;
    int res = 0;

    while(n>0)
    {
        res = n%10;
        if (!(res&1))
        {
            sum+=res;
        }

        n/=10;
    }

    printf("%d\n",sum);
}

int main()
{
    int n;
    int i = 0;

    while(scanf("%d",&n)!=EOF)
    {
        if (i)
        {
            printf("\n");
        }
        else
        {
            ++i;
        }

        f(n);
    }

    return 0;
}
