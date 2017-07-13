#include <stdio.h>
#include <ctype.h>

bool getNumber(__int64& i)
{
    int fax = 1;
    int c;
    i = 0;

    while((c = getchar())&&!isspace(c))
    {
        if (c == EOF)
        {
            return false;
        }

        if (c == '-')
        {
            fax = -1;
        }
        else
        {
            if (isdigit(c))
            {
                i = i*10 + (c - '0');
            }
        }
    }

    i = i*fax;
    return true;
}

int main()
{
    bool res = true;
    __int64 i,j;

    while(1)
    {
        if (getNumber(i))
        {
            getNumber(j);
            printf("%I64d\n",i+j);
        }
        else
        {
            return 0;
        }
    }

    return 0;
}
