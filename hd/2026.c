#include <stdio.h>
#include <ctype.h>

void StrToUpper(char sz[])
{
    int i =0;
    int InWord = 0;

    while(sz[i]!='\0')
    {
        if(!InWord)
        {
            while(isspace(sz[i])&&sz[i]!='\0')
            {
                ++i;
            }

            InWord = 1;
        }
        else
        {
            sz[i] = toupper(sz[i]);
            while(isalpha(sz[i])&&sz[i]!='\0')
            {
                ++i;
            }

            InWord = 0;
        }
    }

}

int main()
{
    char sz[101] = {'\0'};

    while(gets(sz)!=NULL)
    {
        StrToUpper(sz);
        puts(sz);
    }

    return 0;
}
