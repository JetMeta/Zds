#include <stdio.h>

int main()
{
    int n;
    int c;

    scanf("%d",&n);
    scanf("%c",&c);

    while(n--)
    {
        scanf("%d",&c);

        if (c!='\n')
        {
            printf("%c",c);
        }
    }

    return 0;
}
