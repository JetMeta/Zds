#include <stdio.h>

void f(int a,int b,int k)
{
    int i = 0;
    int sum = 1;
    for (i = 0 ; i < k ; ++i)
    {
        sum *=10;
    }

    if (a%sum == b%sum)
    {
        printf("%d\n",-1);
    }
    else
    {
        printf("%d\n",a+b);
    }
}

int main()
{
    int a,b,k;

    while(scanf("%d %d %d",&a,&b,&k)&&(!(a==0&&b==0)))
    {
        f(a,b,k);
    }

    return 0;
}
