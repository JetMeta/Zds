#include <stdio.h>

int g1[] = {31,59,90,120,151,181,212,243,273,304,334,365};
int g2[] = {31,60,91,121,152,182,213,244,274,305,335,366};

int IsLeap(int y)
{
    if (((y%4==0)&&(y%100!=0))||(y%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int GetDay(int y,int m,int d)
{
    if (IsLeap(y))
    {
        return g2[m-1]+d;
    }
    else
    {
        return g1[m-1]+d;
    }
}

int CountDay2(int y,int m,int d)
{
    int i =0;
    int sum = 0;
    int iLeapCnt = 0;

    if (m==2&&d==29)
    {
        return -1;
    }

    for (i = y+1; i < y+18; ++i)
    {
        if (IsLeap(i))
        {
            ++iLeapCnt;
        }
    }

    sum += 17*365+iLeapCnt;

    sum += GetDay(y+18,m,d);

    if (IsLeap(y))
    {
        sum += 366 - GetDay(y,m,d);
    }
    else
    {
        sum += 365 - GetDay(y,m,d);
    }

    return sum;
}

int CountDay(int y,int m,int d)
{
    int i =0;
    int sum = 0;
    int iLeapCnt = 0;

    if (IsLeap(y)&&!IsLeap(y+18)&&m==2&&d==29)
    {
        return -1;
    }

    if ( m > 2)
    {
        for (i = y+1; i < y+19; ++i)
        {
            if (IsLeap(i))
            {
                ++iLeapCnt;
            }
        }
    }
    else
    {
        for (i = y ; i < y+18; ++i)
        {
            if (IsLeap(i))
            {
                ++iLeapCnt;
            }
        }
    }

    sum += 18*365+iLeapCnt;

    return sum;
}

int main()
{
    int n = 0;
    int y = 0,m,d;

    scanf("%d",&n);

    while(n-- > 0)
    {
        scanf("%d-%d-%d",&y,&m,&d);
        printf("%d\n",CountDay(y,m,d));
    }

    return 0;
}
