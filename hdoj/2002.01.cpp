#include <stdio.h>

const double pi = 3.1415927;

int main()
{
    double r,result;
    double re = 0.000;

    while(scanf("%lf",&r)!=EOF)
    {
        re = r*r*r;
        result =(4.000/3.000*pi*re);
        printf("%.3lf\n",result);
    }

    return 0;
}
