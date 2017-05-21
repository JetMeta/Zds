#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    int i;
    int r = sqrt(n);

    for ( i = 2; i < r+1; ++i)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void TestPrime()
{
    int i = 0;

    for (i = 0 ; i < 50 ; ++i)
    {
        if (IsPrime(i))
        {
            printf("%d\n",i);
        }
    }
}

int IsAllPrime(int l,int r)
{
    int i;
    int sum = 0;

    for (i = l; i < r+1; ++i)
    {
        sum = i*i + i + 41;
        if (!IsPrime(sum))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int l,r;

    while(scanf("%d %d",&l,&r)!=EOF&&!(l==0&&r==0))
    {
        if (IsAllPrime(l,r))
        {
            printf("OK\n");
        }
        else
        {
            printf("Sorry\n");
        }
    }

    return 0;
}
