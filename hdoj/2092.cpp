#include <stdio.h>
#include <math.h>

static void f(const int m,const int n)
{
    int x1,y1;
    float fx;

    fx = (m+sqrt(float(m*m-4*n)))/2;

    if (fx>0)
    {
        x1 = fx+0.5;
    }
    else
    {
        x1 = fx - 0.5;
    }

    y1 = m-x1;

    // printf("%d,%d\n",x1,y1);

    if (x1*y1 == n )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)!=EOF&&!(m==0&&n==0))
    {
        f(m,n);
    }

    return 0;
}
