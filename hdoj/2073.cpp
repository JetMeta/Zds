#include <stdio.h>
#include <math.h>

static void f(int x1,int y1,int x2,int y2)
{
    int x3 = x1 + y1;
    int x4 = x2 + y2;

    int xmin = x3 < x4 ? x3:x4;
    int xmax = x3 > x4 ? x3:x4;

    int i = 0;
    double fdis = 0.0L;
    double ftemp = 0.0L;

    if (xmin == xmax)
    {
        fdis = sqrt(double((x2 - x1)*(x2-x1) + (y2 -y1)*(y2 - y1)));

        printf("%.3f\n",fdis);
        return;
    }

    for (i = xmin ; i < xmax; ++i)
    {
        ftemp = sqrt(double(i*i + (i+1)*(i+1)));
        fdis += ftemp;
    }

    for (i = xmin + 1; i < xmax; ++i)
    {
        ftemp = sqrt((double)(i*i + i*i));
        fdis += ftemp;
    }

    if (xmin == x3)
    {
        ftemp = sqrt((double)((xmin-x1)*(xmin-x1) + y1*y1));
        fdis += ftemp;

        ftemp = sqrt((double)((xmax-y2)*(xmax-y2) + x2*x2));
        fdis += ftemp;
    }
    else
    {
        ftemp = sqrt((double)(xmin-x2)*(xmin-x2) + y2*y2);
        fdis += ftemp;

        ftemp = sqrt((double)((xmax-y1)*(xmax-y1) + x1*x1));
        fdis += ftemp;
    }

    printf("%.3f\n",fdis);
}

int main()
{
    int n;
    int x1,y1,x2,y2;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        f(x1,y1,x2,y2);
    }

    return 0;
}
