#include <stdio.h>

static void f(int a,int b,int c)
{
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        printf("good\n");
    }
    else
    {
        if (a  == b || b == c || a == c)
        {
            printf("perfect\n");
        }
        else
        {
            printf("just a triangle\n");
        }
    }
}

int main()
{
    int n;
    int a,b,c;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        f(a,b,c);
    }

    return 0;
}
