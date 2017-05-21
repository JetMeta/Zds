#include <stdio.h>
#include <math.h>

static void f(int n,int m)
{
    int i = 0;
    int k = sqrt(double(2*m));
    int base = 0;

    for (i = k; i > 0; --i)
    {
        base = (m - (i-1)*i/2)/i;

        if ((i*base + (i-1)*i/2) == m)
        {
            printf("[%d,%d]\n",base,base +i-1);
        }
    }

    printf("\n");
}

int main()
{
    int n,m;

    while(scanf("%d%d",&n,&m)!=EOF&&!(m==0&&n==0))
    {
        f(n,m);
    }

    return 0;
}
