#include <stdio.h>

void f(int m)
{
    int a1,a2,a3;
    int sum = 0;

    a1 = m/2;
    a2 = (m-m/2)*2/3;
    a3 = m-a1-a2;

    sum += a1/10 + ((a1%10) > 0 ?1:0);
    sum += a2/10 + ((a2%10) > 0 ?1:0);
    sum += a3/10 + ((a3%10) > 0 ?1:0);

    printf("%d\n",sum);
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);

        f(m);
    }

    return 0;
}
