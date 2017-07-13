#include <stdio.h>
#include <stdlib.h>

double * pd = NULL;

static void f(int n)
{
    int j;
    double sum = 0.0L;

    for(j = 2; j < n+1; ++j)
    {
        sum+=pd[j];
    }

    sum *=2;
    sum+=n;

    printf("%.2f\n",sum);
}

int main()
{
    int n;
    int i = 0;

    pd = (double *)malloc(50001*sizeof(double));
    for (i = 1; i < 50001; ++i)
    {
        pd[i] = (double)1.0/i;
    }

    for (i = 2; i < 50000; ++i)
    {
        pd[i+1]+=pd[i];
    }

    while(scanf("%d",&n)!=EOF&&(n!=0))
    {
        f(n);
    }

    free(pd);
    return 0;
}
