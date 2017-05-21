#include <stdio.h>

static void f(int m)
{
    int icnt = 0;

    while(m>0)
    {
        if (m&1)
        {
            m = m-1;
            ++icnt;
        }
        else
        {
            m>>=1;
        }
    }

    printf("%d\n",icnt);
}

int main()
{
    int n,m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        f(m);
    }

    return 0;
}
