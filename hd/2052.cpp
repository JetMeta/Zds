#include <cstdio>

static void f(const int m,const int n)
{
    int i = 0,j=0;
    printf("+");
    for (i = 0 ; i < m ; ++i)
    {
        printf("-");
    }
    printf("+\n");


    for (j = 0 ; j < n ; ++j)
    {
        printf("|");
        for (i = 0 ; i < m ; ++i)
        {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (i = 0 ; i < m ; ++i)
    {
        printf("-");
    }
    printf("+\n");

    printf("\n");
}

int main()
{
    int m,n;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        f(m,n);
    }

    return 0;
}
