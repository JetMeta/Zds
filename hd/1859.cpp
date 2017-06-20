#include <stdio.h>

int main()
{
    int bIn = 0;
    int x,y;
    int x_min,y_min;
    int x_max,y_max;

    bIn = 1;
    scanf("%d %d",&x,&y);
    x_min = x_max = x;
    y_min = y_max = y;

    while (scanf("%d %d",&x,&y)!=EOF)
    {
        if (x == 0 && y == 0 && bIn == 1)
        {
            bIn = 0;
            printf("%d %d %d %d\n",x_min,y_min,x_max,y_max);

            scanf("%d %d",&x,&y);
            if (x!= 0 || y!=0)
            {
                x_min = x_max = x;
                y_min = y_max = y;

                bIn = 1;
            }
            else
            {
                break;
            }
        }

        if (x < x_min)
        {
            x_min = x;
        }

        if(x > x_max)
        {
            x_max = x;
        }

        if (y > y_max)
        {
            y_max = y;
        }

        if(y < y_min)
        {
            y_min = y;
        }

    }

    return 0;
}
