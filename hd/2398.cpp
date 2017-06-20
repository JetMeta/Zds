#include <stdio.h>

static void f(double s,double rate ,double t)
{
    int i = 0;
    double fsum = s;

    for (i = 1;; ++i)
    {
        fsum += fsum*rate/100.0;

        if (fsum >= t)
        {
            printf("%d\n",i);
            return;
        }
    }
}

int main()
{
    double s,rate,t;

    while(scanf("%lf%lf%lf",&s,&rate,&t)!=EOF)
    {
        f(s,rate,t);
    }

    return 0;
}
