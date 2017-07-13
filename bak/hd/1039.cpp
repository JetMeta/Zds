#include <stdio.h>
#include <string.h>

//abcdefghijklmnopqrstuvwxyz
//0   4   8     14    21
int aleph[] = {1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1};

static int f(char sz[])
{
    int i;
    int len = strlen(sz);
    int icnt = 0;

    for (i = 0 ; i < len ; ++i)
    {
        if (i < len - 2)
        {
            int sum = aleph[sz[i]-'a']+aleph[sz[i+1]-'a']+aleph[sz[i+2]-'a'];

            if (sum >2 || sum < -2)
            {
                return 0;
            }
        }

        if (i < len -1)
        {
            if (sz[i] == sz[i+1]&&!(sz[i]=='o'||sz[i]=='e'))
            {
                return 0;
            }
        }

        if (!icnt&&(sz[i] == 'a'||sz[i]=='e'||sz[i]=='i'||sz[i]=='o'||sz[i]=='u'))
        {
            ++icnt;
        }
    }

    if (icnt)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char sz[32] = {'\0'};

    while(scanf("%s",sz)&&!(strcmp(sz,"end")==0))
    {
        if (f(sz)==1)
        {
            printf("<%s> is acceptable.\n",sz);
        }
        else
        {
            printf("<%s> is not acceptable.\n",sz);
        }
    }

    return 0;
}
