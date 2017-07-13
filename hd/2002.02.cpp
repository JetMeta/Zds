#include<stdio.h>
#define PI 3.1415927
int main()
{
    double a,r;
    while(scanf("%lf",&r)!=EOF)
    {
        a=(4.0/3.0*PI*r*r*r);
        printf("%.3lf\n",a);
    }
    return 0;
}
