#include <cstdio>

static void f(const int n)
{
    bool bstatus = false;
    int i = 0;

    for (i = 1; i < n+1 ; ++i)
    {
        if (n%i == 0)
        {
            bstatus = !bstatus;
        }
    }

    printf("%d\n",bstatus);
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
