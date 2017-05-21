#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n = 0;
    double fZero = 1e-10;
    double fSum = 0.0f;
    double fLen = 0.0f;

    scanf("%lf",&fLen);

    while(fLen > fZero && fLen <= 5.20)
    {
        fSum = 0.0f;
        for (n = 1 ; ; ++n)
        {
            fSum +=  (double)1/(n+1);

            if (fSum >= fLen)
            {
                printf("%d card(s)\n",n);
                break;
            }
        }

        scanf("%lf",&fLen);
    }

    return 0;
}
