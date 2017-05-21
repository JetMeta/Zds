#include <stdio.h>
#include <math.h>
int main ()
{
    int i,t,sum,p;
    __int64 n;
    scanf ("%d", &t);
    while (t-- && scanf ("%I64d", &n))
    {
        sum = 0;
        n++;
        p = int(sqrt(n * 1.0));
        for (i = 2; i <= p; i++)
        {
            if (n % i == 0)
                sum++;
        }
        printf ("%d\n", sum);
    }
    return 0;
}
