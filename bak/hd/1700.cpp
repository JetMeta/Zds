#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
*知道思路，忘记公式了
*/
int main(int argc, char** argv)
{
    double a,b,sinx,cosx,x0,y0,x1,y1,x2,y2;
    int t;

    a=sinx=sqrt(3.0)/2;
    b=cosx=-0.5;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf",&x0,&y0);

        x1=b*x0-a*y0;
        y1=b*y0+a*x0;
        x2=b*x0+a*y0;
        y2=b*y0-a*x0;

        if(y1<y2||((abs(y1-y2)<0.005)&&x1<x2))
        {
            printf("%.3lf %.3lf %.3lf %.3lf\n",x1,y1,x2,y2);
        }
        else
            printf("%.3lf %.3lf %.3lf %.3lf\n",x2,y2,x1,y1);

    }

    return 0;
}
