#include <stdio.h>

static int f(int n,int m)
{
    int i,j;
    int cnt=0;
    int op1,op2;

    for (i = 2; i<n; ++i)
    {
        for (j = 1; j<i; ++j)
        {
            op1 = j*j+i*i+m;
            op2 = i*j;
            double sum = (double)op1/op2;

            if (sum == (int)sum)
            {
                //printf("%f %d %d %d %d\n",sum,i,j,op1,op2);
                ++cnt;
            }
        }
    }

    return cnt;
    //printf("%d\n",cnt);
}

int main()
{
    int n;
    int a,b;
    int cnt = 0;

    scanf("%d",&n);

    while(n--)
    {
        cnt = 0;

        while(scanf("%d%d",&a,&b)!=EOF&&!(a==0&&b==0))
        {
            ++cnt;
            printf("Case %d: %d\n",cnt,f(a,b));
        }

        if (n>0)
        {
            printf("\n");
        }
    }

    return 0;
}
