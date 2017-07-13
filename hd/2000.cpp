#include <stdio.h>

//z 简单题，最简单的排序

int main()
{
    int i = 0,j=0;
    int imin = 0;
    char c;
    char sz[4] = {'\0'};

    while(gets(sz)&&sz[0]!='\n')
    {
        for (i = 0 ; i < 3; ++i)
        {
            imin = i;
            for (j = i+ 1; j < 3; ++j)
            {
                if (sz[j] < sz[imin])
                {
                    imin = j;
                }
            }

            if (imin!=i)
            {
                c = sz[imin];
                sz[imin] = sz[i];
                sz[i] = c;
            }
        }

        for (i = 0 ; i < 3; ++i)
        {
            if(i==2)
            {
                printf("%c\n",sz[i]);
            }
            else
            {
                printf("%c ",sz[i]);
            }
        }
    }

    return 0;
}
