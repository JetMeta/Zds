#include <stdio.h>

static void f(int x,int y)
{
    if ((x == y) || (y == x -2))
    {
        if (x == y)
        {
            if (x&1)
            {
                printf("%d\n",2*x-1);
            }
            else
            {
                printf("%d\n",x*2);
            }
        }
        else
        {
            if (y&1)
            {
                printf("%d\n",2*y+1);
            }
            else
            {
                printf("%d\n",2*y+2);
            }
        }
    }
    else
    {
        printf("No Number\n");
    }
}

int main()
{
    int t;
    int x,y;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&x,&y);
        f(x,y);
    }

    return 0;
}
