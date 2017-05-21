#include <stdio.h>

static const double pi = 3.14159265L;

static void f(int n)
{
    double r = 0.0L;

    r = (double)n/pi;

    printf("%.2f\n",r*r*pi/2);
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        f(n);
    }

    return 0;
}
