#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int TCount(char sz[])
{
    int icnt = 0;
    int i =0;
    int len = strlen(sz);

    for ( i = 0 ; i < len ; ++i)
    {
        if (sz[i] < 0)
        {
            ++i;
            ++icnt;
        }
    }

    return icnt;
}

int main()
{
    int n ;
    char* psz = (char*)malloc(1000*sizeof(char));

    scanf("%d",&n);
    gets(psz);

    while(n-- >0)
    {
        gets(psz);
        printf("%d\n",TCount(psz));
    }

    free(psz);

    return 0;
}
