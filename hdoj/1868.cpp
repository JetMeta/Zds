#include <stdio.h>
#include <math.h>

int f(int n)
{
    int icnt =0;
    int r = sqrt(2*n)+1;
    int i = 0;

    for (i = 2; i < r ; ++i)
    {
        if (((n - i*(i-1)/2)%i) == 0)
        {
            ++icnt;
        }
    }

    return icnt;
}

int main()
{
    int n =0;

    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f(n));
    }

    return 0;
}
