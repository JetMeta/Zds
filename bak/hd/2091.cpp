#include <stdio.h>

static void f(const char c,const int n)
{
    int i = 0;
    int j = 0;

    if (n == 1)
    {
        printf("%c\n",c);
        return ;
    }

    for (i= 0 ; i < n-1; ++i)
    {
        printf(" ");
    }
    printf("%c\n",c);

    for (i = 1; i < n-1; ++i)
    {
        for (j = 0; j<n-(i+1); ++j)
        {
            printf(" ");
        }

        printf("%c",c);
        for (j = 0 ; j < i*2-1; ++j)
        {
            printf(" ");
        }
        printf("%c\n",c);
    }

    for (i = 0 ; i < 2*n-1 ; ++i)
    {
        printf("%c",c);
    }

    printf("\n");
}

int main()
{
    int c = 0;
    int n = 0;
    int cnt = 0;

    while((scanf("%c",&c)!=EOF)&&(c!='@'))
    {
        if (cnt != 0)
        {
            printf("\n");
        }

        scanf("%d",&n);

        f(c,n);
        scanf("%c",&c);
        ++cnt;
    }

    return 0;
}
