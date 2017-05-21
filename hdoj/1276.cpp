#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void f(int m)
{
    bool is2 = true;
    int icnt = m;
    int index = 0;
    int icnt_left = m;
    int icnt_left_cpy;
    int i;

    int * p = (int*)malloc(m*sizeof(int));

    for (i = 0 ; i < m ; ++i)
    {
        p[i] = i;
    }

    while(icnt_left > 3)
    {
        index = 0;
        icnt_left_cpy = icnt_left;

        if (is2)
        {
            is2 = false;

            for (i = 0 ; i < icnt_left_cpy; ++i)
            {
                if ((i%2) == 1)
                {
                    --icnt_left;
                }
                else
                {
                    p[index++] = p[i];
                }
            }
        }
        else
        {
            is2 = true;

            for (i = 0 ; i < icnt_left_cpy; ++i)
            {
                if ((i%3) == 2)
                {
                    --icnt_left;
                }
                else
                {
                    p[index++] = p[i];
                }
            }
        }
    }

    for (i = 0 ; i < icnt_left; ++i)
    {
        printf("%d",p[i] + 1);

        if (i != icnt_left - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    free(p);
}

int main()
{
    int n;
    int m;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        f(m);
    }

    return 0;
}
