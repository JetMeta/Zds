#include <stdio.h>

long fb(int n)
{
    if (n == 0)
    {
        return 7;
    }

    if (n == 1)
    {
        return 11;
    }

    return fb(n-1) + fb(n-2);
}

long fb2(int n)
{
    int i;
    long l1=7,l2=11;
    long result = 0l;

    if (n == 0)
    {
        return l1;
    }

    if (n == 1)
    {
        return l2;
    }

    // l1,l2
    for (i = 2; i < n+1 ; ++i)
    {
        result = l1 + l2;
        l1 = l2;
        l2 = result;
    }

    return result;
}

int fb3(int n)
{
    if (n == 2)
    {
        return 1;
    }

    if (n > 6)
    {
        if (((n-6)%4) == 0)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n = 0;

    while(scanf("%d",&n)!=EOF)
    {
        if (fb3(n))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}
