#include <stdio.h>

const double EPSILON = 1e-15;

int main()
{
    int n = 0;
    int i,j,k;
    double f;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        i = j = k =0;
        while(n-- > 0)
        {
            scanf("%lf",&f);

            // 0
            if (f<EPSILON&&f>-EPSILON)
            {
                ++j;
            }

            //-
            if (f < -EPSILON)
            {
                ++i;
            }

            // +
            if (f>EPSILON)
            {
                ++k;
            }
        }

        printf("%d %d %d\n",i,j,k);
    }

    return 0;
}
