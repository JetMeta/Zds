#include <stdio.h>

int sub_f(int n)
{
    int r = 0;
    int sum = 0;

    while(n > 0)
    {
        r = n % 10;
        n /= 10;
        sum += r;
    }

    return sum;
}

void f(int n)
{
    int m = n;
    while(m > 9)
    {
        n = sub_f(m);
        m = n;
    }

    printf("%d\n",m);
}

int sumstr(char sz[])
{
    int i = 0 ;
    int sum = 0;

    while(sz[i]!='\0')
    {
        sum += sz[i] - '0';
        ++i;
    }

    f(sum);
    return sum;
}

int main()
{
    char sz[1024] = {'\0'};

    while(scanf("%s",&sz)!=EOF&&sz[0]!='0')
    {
        sumstr(sz);
    }

    return 0;
}
