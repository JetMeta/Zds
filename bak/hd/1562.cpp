#include <stdio.h>

static void f(const int a,const int b,const int c)
{
    int i = 1000;

    for (; i<10000; ++i)
    {
        if (((i%a) == 0)&&(((i+1)%b)==0)&&(((i+2)%c) == 0))
        {
            printf("%d\n",i);
            return ;
        }
    }

    printf("Impossible\n");
}

int main()
{
    int t;
    int a,b,c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);

        f(a,b,c);
    }

    return 0;
}
