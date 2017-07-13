#include <stdio.h>
#include <string.h>

static void f(char sz[],int len)
{
    int iy = 0;
    int ir = 0;
    int i = 0;

    for (i = 0 ; i < len ; ++i)
    {
        if (sz[i] == 'R')
        {
            ++ir;
        }
        else
        {
            if (sz[i] == 'Y')
            {
                ++iy;
            }
            else
            {
                if (sz[i] == 'B')
                {
                    if(ir==7)
                    {
                        printf("Red\n");
                    }
                    else
                    {
                        printf("Yellow\n");
                    }
                }
                if(sz[i] == 'L')
                {
                    if (iy == 7)
                    {
                        printf("Yellow\n");
                    }
                    else
                    {
                        printf("Red\n");
                    }
                }
            }
        }
    }
}

int main()
{
    int n;
    char ball[15]= {'\0'};

    while((scanf("%d",&n)!=EOF)&& (n!=0))
    {
        scanf("%s",ball);
        f(ball,n);
    }

    return 0;
}
