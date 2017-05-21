#include <stdio.h>

int sz[6] = {0};
int sum = 0;

int sz2[5]= {100,50,10,5,2};

void f2(int m)
{
    int i = 0;
    for (i = 0 ; i < 5; ++i)
    {
        sum += m/sz2[i];
        m =m%sz2[i];
    }

    sum+=m;
}

void f(int m)
{
    sz[0] += m /100;
    m = m %100;
    sz[1] += m / 50;
    m = m%50;
    sz[2] += m/10;
    m =m%10;
    sz[3] += m/5;
    m = m %5;
    sz[4] +=m/2;
    m=m%2;
    sz[5] +=m;
}

int main()
{
    int n;
    int m;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        sum = 0;
        while(n-- > 0)
        {
            scanf("%d",&m);
            f2(m);
        }
        printf("%d\n",sum);
    }

    return 0;
}
