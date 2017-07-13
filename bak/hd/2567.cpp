#include <stdio.h>
#include <string.h>

int main()
{
    char sz1[128] = {'\0'};
    char sz2[64] = {'\0'};

    int n = 0;
    int i,j,k;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",sz1);
        scanf("%s",sz2);
        i = strlen(sz1);
        j = strlen(sz2);

        for (k = i; k >= i/2; --k)
        {
            sz1[k+j] = sz1[k];
        }

        for (k = 0 ; k < j ; ++k)
        {
            sz1[i/2+k] = sz2[k];
        }

        printf("%s\n",sz1);
    }

    return 0;
}
