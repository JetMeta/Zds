#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int sum_digi(int n)
{
    int sum = n;

    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}

static void f()
{
    int i = 0;
    char* pi = (char*)malloc(1000001*sizeof(int));
    memset(pi,0,1000001*sizeof(int));

    for (i = 1 ; i < 1000001; ++i)
    {
        int sum = sum_digi(i);

        if (sum <1000001)
        {
            pi[sum] = 1;
        }
    }

    for (i = 1; i < 1000001; ++i)
    {
        if (pi[i] == 0)
        {
            printf("%d\n",i);
        }
    }

    free(pi);
}

int main()
{
    f();

    return 0;
}
