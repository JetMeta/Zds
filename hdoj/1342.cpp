#include <stdio.h>

int sz[49] = {0};

void PrintGame(int k)
{
    int a1,a2,a3,a4,a5,a6;

    for (a1 = 0 ; a1+5<k; ++a1)
    {
        for (a2 = a1+1; a2+4<k; ++a2)
        {
            for (a3=a2+1; a3+3<k; ++a3)
            {
                for (a4=a3+1; a4+2<k; ++a4)
                {
                    for (a5=a4+1; a5+1<k; ++a5)
                    {
                        for (a6 = a5+1; a6<k; ++a6)
                        {
                            printf("%d %d %d %d %d %d\n",sz[a1],sz[a2],sz[a3],sz[a4],sz[a5],sz[a6]);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int k;
    int i;
    int j;
    int icnt = 0;

    while(scanf("%d",&k)!=EOF&&(k!=0))
    {
        ++icnt;

        if (icnt > 1)
        {
            printf("\n");
        }

        i = 0;
        j = k;
        while(j--)
        {
            scanf("%d",&sz[i++]);
        }

        PrintGame(k);
    }

    return 0;
}
