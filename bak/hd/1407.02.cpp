#include <cstdio>
#include <cmath>

using namespace std;

int IsSquare(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int t = sqrt((float)n);

    if (t*t == n)
    {
        return 1;
    }

    return 0;
}

void output(int m,int n,int k)
{
    int i=0;
    int j = 0;
    int imax = 0;

    int a[] = {m,n,k};

    for (i = 1 ; i < 3; ++i)
    {
        imax = i;
        for(j = i ; j < 3; ++j)
        {
            if (a[j]>a[imax])
            {
                imax = j;
            }
        }

        if (i!=imax)
        {
            a[i]^=a[imax];
            a[imax]^=a[i];
            a[i]^=a[imax];
        }
    }

    printf("%d %d %d\n",a[2],a[1],a[0]);
}

void f(int n)
{
    int i,j,k;

    int t = sqrt(n/3.0);
    int t2 = sqrt((float)n) +1;
    int sum = 0;

    for (i = 1; i<t+1 ; ++i)
    {
        for (k = i; k<t2; ++k)
        {
            sum = n - k*k - i*i;

            if (sum == 0)
            {
                continue;
            }

            if (IsSquare(sum))
            {
                // printf("%d %d %d\n",i,(int)sqrt(float(sum)),k);
                int cc = sqrt((float)sum);
                output(cc,i,k);
                return;
            }
        }
    }
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
