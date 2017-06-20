#include <stdio.h>

static void f(int m,int k)
{
    int iday = 0;

    while(m>k-1)
    {
        iday+=k;
        m-=k;
        m+=1;
    }

    iday +=m;

    printf("%d\n",iday);
}

int main()
{
    int k,m;

    while((scanf("%d%d",&m,&k)!=EOF) && !(m==0&&k==0))
    {
        f(m,k);
    }

    return 0;
}
