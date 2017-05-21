#include <stdio.h>

static int count_steps(int n)
{
    int t = n;
    int cnt=0;

    while(n!=1)
    {
        if ((n&1) == 0)
        {
            n >>=1;
        }
        else
        {
            n=n*3+1;
            n/=2;
        }
        ++cnt;
    }

    return cnt;
}

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&(n!=0))
    {
        printf("%d\n",count_steps(n));
    }

    return 0;
}
