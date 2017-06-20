#include <stdio.h>
#include <algorithm>

using namespace std;

static int subf(int n)
{
    int i = 0;
    int sum = 1;

    for (i = 2; i<(n/2+1); ++i)
    {
        if (n%i == 0)
        {
            sum+=i;
        }
    }

    if (sum == n)
    {
        return 1;
    }

    return 0;
}

static void f(int s,int t)
{
    int i;
    int cnt = 0;

    if (s > t)
    {
        swap(s,t);
    }

    for (i = s; i < t+1; ++i)
    {
        if (subf(i))
        {
            ++cnt;
        }
    }

    printf("%d\n",cnt);
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
