#include <stdio.h>

//z 计算某天一年中的第几天

int a[] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
int b[] = {0,31,60,91,121,152,182,213,244,274,305,335,366};

int IsLeap(int b)
{
    if ((b%4 == 0 && b%100!=0)||b%400==0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int y;
    int m;
    int d;

    while (scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        if (IsLeap(y))
        {
            printf("%d\n",b[m-1]+d);
        }
        else
        {
            printf("%d\n",a[m-1]+d);
        }
    }

    return 0;
}
