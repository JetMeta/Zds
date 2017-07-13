#include <stdio.h>

static void fa(int n,int m)
{
    int i = 0;
    int res = 1;

    for (i = n-m+1 ; i < n+1; ++i)
    {
        res *= i;
    }

    printf("%d\n",res);
}

static void fc(int n,int m)
{
    int i = 0;
    int res = 1;

    for (i = n-m+1 ; i < n+1; ++i)
    {
        res *= i;
    }

    for(i = m ; i > 0 ; --i)
    {
        res/=i;
    }

    printf("%d\n",res);
}

int main()
{
    int cnt = 0;
    char c;
    int m,n;

    scanf("%d",&cnt);
    scanf("%c",&c);

    while(cnt--)
    {
        scanf("%c%d%d",&c,&n,&m);
        switch (c)
        {
        case 'A':
            fa(n,m);
            break;
        case 'C':
            fc(n,m);
            break;
        default:
            printf("stm wrong!\n");
            break;
        }
        scanf("%c",&c);
    }

    return 0;
}
