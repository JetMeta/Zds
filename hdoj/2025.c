#include <stdio.h>

char FindMax(char sz[])
{
    int i = 0;
    char iMax;
    iMax = sz[0];

    for (i = 1 ; sz[i]!='\0'; ++i)
    {
        if(sz[i] > iMax)
        {
            iMax = sz[i];
        }
    }

    return iMax;
}

int main()
{
    int i = 0;
    char cMax;
    char sz[101] = {'\0'};

    while(gets(sz)!=NULL)
    {
        cMax = FindMax(sz);

        i = 0;
        while(sz[i]!='\0')
        {
            if (sz[i] == cMax)
            {
                printf("%c(max)",sz[i]);
            }
            else
            {
                printf("%c",sz[i]);
            }

            ++i;
        }
        printf("\n");
    }

    return 0;
}
