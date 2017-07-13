#include <stdio.h>

static void PrintResult(const bool IsLucky)
{
    if (IsLucky)
    {
        printf("Lucky number!\n");
    }
    else
    {
        printf("What a pity!\n");
    }
}

static void IsLuckyNumber(int m)
{
    int sum = 0,sum_square=0;
    int t = 0;

    if (m % 8 == 0)
    {
        PrintResult(true);
    }
    else
    {
        sum = 0;
        sum_square = 0;
        while(m > 0)
        {
            t = m%10;
            sum+=t;
            sum_square += t*t;
            m /= 10;
        }

        if (sum % 8 == 0 || sum_square % 8 == 0)
        {
            PrintResult(true);
        }
        else
        {
            PrintResult(false);
        }
    }
}

int main()
{
    int n = 0;
    int m = 0;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        IsLuckyNumber(m);
    }

    return 0;
}
