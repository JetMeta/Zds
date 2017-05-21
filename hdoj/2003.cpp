#include <math.h>
#include <stdio.h>

int main()
{
    double f;

    while(scanf("%lf",&f)!=EOF)
    {
        printf("%.2lf\n",fabs(f));
    }

    return 0;
}
