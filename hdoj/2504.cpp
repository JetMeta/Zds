#include <stdio.h>

int gcd(int a, int b)
{
    if (!b)
        return a;
    else
        return gcd(b, a%b);
}

static void f(int a,int b)
{
    int i;

    for(i = 2*b;; ++i)
    {
        if(gcd(a,i) == b)
        {
            printf("%d\n",i);
            return;
        }
    }
}

int main()
{
    int n;
    int a,b;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d",&a,&b);
        f(a,b);
    }

    return 0;
}
