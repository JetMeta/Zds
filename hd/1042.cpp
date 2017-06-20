#include<stdio.h>

int main()
{
    int i, j, n;
    while(scanf("%d", &n) != EOF)
    {
        int a[7201] = {0};
        a[0] = 1;
        for(i = 2; i <= n; ++i)
        {
            for(j = 0; j <= 7200; ++j) a[j] *= i;
            for(j = 0; j <= 7200; ++j)
                if(a[j] > 100000)
                {
                    a[j + 1] += a[j] / 100000;
                    a[j] %= 100000;
                }
        }
        for(j = 7200; !a[j]; --j) {}
        printf("%d", a[j]);
        for(--j; j >= 0; --j)
            printf("%05d", a[j]);
        printf("\n");
    }

    return 0;
}
