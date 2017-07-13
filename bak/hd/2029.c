#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int IsPalindromes(char sz[])
{
    int flag = 1;
    int i = 0 ;
    int len = strlen(sz);

    for (i = 0 ; i < len/2 ; ++i)
    {
        if (sz[i] == sz[len - i -1])
        {
        }
        else
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int n;
    char c;
    char* psz = (char *)malloc(1000*sizeof(char));
    memset(psz,'\0',1000);

    scanf("%d",&n);
    while(scanf("%d",&c)&&c!='\n');

    while(n-- >0)
    {
        gets(psz);
        if (IsPalindromes(psz))
        {
            printf("yes\n");


        }
        else
        {
            printf("no\n");


        }
    }

    free(psz);

    return 0;
}
