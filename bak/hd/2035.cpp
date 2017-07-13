#include <stdio.h>

void f(int m,int n)
{
    int i = 0;
    int res = 1;

    for (i = 0 ; i < n ; ++i)
    {
        res *= m;
        res %= 1000;
    }

    printf("%d\n",res);
}

int main()
{
    int m,n;

    while((scanf("%d %d",&m,&n)!=EOF) && !(m==0&&n==0))
    {
        f(m,n);
    }

    return 0;
}
