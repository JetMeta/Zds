#include <stdio.h>

static void f(int n)
{
    int pos = 2;
    int icnt = 1;

    while(pos!=1)
    {
        if (pos < n+1)
        {
            pos *= 2;
        }
        else
        {
            pos = 2*(pos-n)-1;
        }

        ++icnt;
    }

    printf("%d\n",icnt);
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        f(n);
    }

    return 0;
}
