#include <stdio.h>

int gcd(int a,int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
    int n;
    int a,b,c,d;
    int i,j;
    int imax = 0,imin;
    int div = 0;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        i = a*d + b*c;
        j = b*d;

        /*
        imax = i > j ? i:j;
        imin = i < j ? i:j;
        div = gcd(imax,imin);
        */

        div = gcd(i,j);
        i /= div;
        j /=div;

        printf("%d %d\n",i,j);
    }

    return 0;
}
