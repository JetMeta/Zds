#include <stdio.h>

static void f(int n,int m)
{
    int i,j,k;
    int last ;
    int cnt = 0;

    for (i = 0 ; i <m+1; ++i)
    {
        for (j = 0 ; j < (m-i)/2+1; ++j)
        {
            for (k = 0 ; k < (m - i - j*2)/5+1; ++k)
            {
                last = i + j*2 + k*5;

                if ((last == m)&&(i+j+k) == n)
                {
                    ++cnt;
                }
            }
        }
    }

    printf("%d\n",cnt);
}

int main()
{
    int k;
    int n,m;

    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&n,&m);
        f(n,m);
    }

    return 0;
}
