#include <stdio.h>
#include <ctype.h>

int main()
{
    bool bEof = false;
    int c;
    char pattern = '\0';
    int icnt,isum;

    while(1)
    {
        icnt = 0;
        isum = 0;

        pattern = getchar();
        pattern = tolower(pattern);
        getchar();

        while((c=getchar())!='\n')
        {
            if (c == EOF)
            {
                bEof = true;
                break;
            }
            else
            {
                if (tolower(c) == pattern)
                {
                    ++icnt;
                }

                ++isum;
            }
        }

        printf("%.5f\n",double(icnt)/isum);

        if (bEof)
        {
            break;
        }
    }

    return 0;
}
