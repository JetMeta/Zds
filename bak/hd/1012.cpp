#include <stdio.h>

int foo(int n)
{
    int i;
    int result;
    if (n == 0)
    {
        return 1;
    }

    result = 1;
    for (i = 1; i < n+1; ++i)
    {
        result *=i;
    }

    return result;
}

int main()
{
    int i,j;
    double e;

    printf("n e\n");
    printf("- -----------\n");

    for (i = 0; i < 10 ; ++i)
    {
        e=0;
        for (j = 0 ; j <i+1 ; ++j)
        {
            e+=(double)1.0/foo(j);
        }

        if (i<2)
        {
            printf("%d %.0lf\n",i,e);
        }

        if (i == 2)
        {
            printf("%d %.1lf\n",i,e);
        }

        if (i>2)
        {
            printf("%d %.9lf\n",i,e);
        }
    }

    return 0;
}
