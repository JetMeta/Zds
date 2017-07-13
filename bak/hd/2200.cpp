#include <stdio.h>

__int64 C[66][66];

int main()
{
    __int64 i, j, sum;
    for (i = 1; i <= 60; i++)
    {
        C[i][0] = 1;
        C[i][1] = i;
    }
    for (i = 2; i <= 60; i++)
    {
        for (j = 1; j <= i; j++)
        {
            C[i][j] = C[i - 1][j - 1] +C[i - 1][j];
        }
    }
    while (scanf("%I64d", &i) == 1)
    {
        sum = 0;
        for (j = 2; j <= i; j++)
        {
            sum += C[i][j] * (j - 1);
        }
        printf("%I64d\n", sum);
    }

    return 0;
}
