#include <stdio.h>

void f(int n)
{
    int nc = n;
    int i = 0;
    int sum10 = 0;
    int sum12 = 0;
    int sum16 = 0;

    while(nc > 0)
    {
        i = nc % 10;
        sum10 += i;
        nc /=10;
    }

    nc = n;
    while(nc > 0)
    {
        i = nc %16;
        sum16 += i;
        nc /=16;
    }

    nc = n;
    while(nc > 0)
    {
        i = nc %12;
        sum12+=i;
        nc /=12;
    }

    if (sum12 == sum10 && sum12 == sum16)
    {
        printf("%d is a Sky Number.\n",n);
    }
    else
    {
        printf("%d is not a Sky Number.\n",n);
    }
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        f(n);
    }

    return 0;
}
