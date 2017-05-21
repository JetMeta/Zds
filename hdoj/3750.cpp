#include <stdio.h>
#include <math.h>

static void f(int n)
{
    int i = 1,h= 1;
    int j = 0;
    __int64 sum = 0;
    int last = 0;

    while((i*2-1) < n)
    {
        i *= 2;
        ++h;
    }

    i = 1;
    for (j = 1; j < h; ++j)
    {
        last += i;
        sum += i*j;
        i*=2;
    }

    sum += (n-last)*h;

    printf("%.2f\n",(double)sum/n);
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        f(n);
    }

    return 0;
}
