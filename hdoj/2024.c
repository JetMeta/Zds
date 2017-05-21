#include <stdio.h>
#include <ctype.h>

int IsToken(char sz[])
{
    int i = 0;
    if (isalpha(sz[0])||sz[0]=='_')
    {
        for (i = 1; sz[i]!='\0'; ++i)
        {
            if (!(isalnum(sz[i])||sz[i]=='_'))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }

    return 1;
}

int main()
{
    int n = 0;
    char sz[51] = {'\0'};
    char* psz = sz;
    char c;

    scanf("%d",&n);
    while((scanf("%c",&c)&&c!='\n'));

    while(n-- > 0)
    {
        gets(psz);

        if (IsToken(sz))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}
