#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int l,r;
    double fl;
    double f;

    while (scanf("%d %d",&l,&r)!=EOF)
    {
        f = 0.00;
        fl = l;
        for (i = 0 ; i < r ; ++i)
        {
            f += fl;
            fl = sqrt(fl);
        }

        printf("%.2lf\n",f);
    }

    return 0;
}
