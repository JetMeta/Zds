#include <stdio.h>
#include <ctype.h>

static void f(char c,int m)
{
    int res = 0;

    if (isupper(c))
    {
        res = c-'A'+1;
    }
    else
    {
        res = 'a' - c - 1;
    }

    // printf("%c %d ",c,res);

    printf("%d\n",res+m);
}

int main()
{
    char c,d;
    int m;
    int n = 0;

    scanf("%d",&n);
    scanf("%c",&d);

    while(n--)
    {
        scanf("%c %d",&c,&m);
        f(c,m);
        scanf("%c",&d);
    }

    return 0;
}
