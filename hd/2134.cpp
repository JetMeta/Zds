#include <stdio.h>
#include <math.h>

const double pi=3.14159264L;

static void f(double n)
{
    double r1,r2;

    r1 = sqrt((double)n*n/3.0);
    r2 = sqrt((double)n*n*2.0/3.0);

    printf("%.3f %.3f\n",r1,r2);
}

int main()
{
    double n;

    while(scanf("%lf",&n)!=EOF&&(n!=0))
    {
        f(n);
    }

    return 0;
}
