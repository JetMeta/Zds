#include <stdio.h>

int main()
{
    int n;
    int m;
    double fmax=0.0L;
    double fcur=0.0;

    scanf("%d",&n);

    while(n--)
    {
        fmax = 0.0;
        scanf("%d",&m);

        while(m--)
        {
            scanf("%lf",&fcur);
            if (fcur > fmax)
            {
                fmax = fcur;
            }
        }

        printf("%.2f\n",fmax);
    }

    return 0;
}
