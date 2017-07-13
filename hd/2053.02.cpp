#include <cstdio>
#include <cmath>

static void f2(const int n)
{
    int i = 0;
    int cnt = 0;

    for (i = 1 ; i*2 <n+1; ++i)
    {
        if (n%i == 0)
        {
            ++cnt;
        }
    }

    ++cnt;

    //printf("%d",cnt);

    if (cnt&1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    printf("\n");
}

static void f(const int n)
{
    bool bstatus = false;
    int i = 0;
    int icnt = 0;

    for (i = 1; i < n+1 ; ++i)
    {
        if (n%i == 0)
        {
            ++icnt;
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
        //f(n);
        f2(n);
    }

    return 0;
}
