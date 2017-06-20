#include <stdio.h>
#include <string.h>

int sz[21][21][21];

int f(int a,int b,int c)
{
    if (a <= 0 || b<=0|| c<=0)
    {
        return 1;
    }

    if (a > 20 || b>20 || c>20)
    {
        return f(20,20,20);
    }

    if (sz[a][b][c]!=-1)
    {
        return sz[a][b][c];
    }

    if ((a<b)&&(b<c))
    {
        return f(a,b,c-1)+f(a,b-1,c-1) - f(a,b-1,c);
    }
    else
    {
        return f(a-1,b,c)+f(a-1,b-1,c)-f(a-1,b-1,c-1);
    }
}

static void init()
{
    int i,j,k;

    for (i = 0 ; i <21; ++i)
    {
        for (j = 0 ; j<21; ++j)
        {
            for (k = 0 ; k < 21; ++k)
            {
                if (i==0||j==0||k==0)
                {
                    sz[i][j][k] = 1;
                }
            }
        }
    }

    for (i = 1 ; i < 21; ++i)
    {
        for (j = 1 ; j < 21; ++j)
        {
            for (k = 1 ; k < 21; ++k)
            {
                if (!(i==0||j==0||k==0))
                {
                    if (i<j&&j<k)
                    {
                        sz[i][j][k] = sz[i][j][k-1]+sz[i][j-1][k-1] - sz[i][j-1][k];
                    }
                    else
                    {
                        sz[i][j][k] = sz[i-1][j][k] + sz[i-1][j-1][k] +sz[i-1][j][k-1]- sz[i-1][j-1][k-1];
                    }
                }
            }
        }
    }
}

int main()
{
    int a,b,c;

    memset(sz,-1,sizeof(sz));

    init();

    while((scanf("%d%d%d",&a,&b,&c)!=EOF)&&!((a==-1)&&(b==-1)&&(c==-1)))
    {
        printf("w(%d, %d, %d) = %d\n",a,b,c,f(a,b,c));
    }

    return 0;
}
