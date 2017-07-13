#include <stdio.h>

static int sum(const int n)
{
    int i = 0;
    int t = n/2 + 1;
    int res = 0;

    for (i = 1; i < t; ++i)
    {
        if (n%i == 0)
        {
            res+=i;
        }
    }

    return res;
}

static void f(const int s,const int t)
{
    if (sum(s) == t && sum(t) == s)
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
    int n;
    int s,t;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&s,&t);

        f(s,t);
    }

    return 0;
}
