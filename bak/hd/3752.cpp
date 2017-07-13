#include <stdio.h>

static void f(int m,int n)
{
    if ((m >= (n*2)) && ((m&1) == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    int m,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&m,&n);
        f(m,n);
    }

    return 0;
}
